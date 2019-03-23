%code requires{
  #include "abstsyntree.hpp"
  #include "abstsyntree_expr.hpp"
	#include "abstsyntree_stmts.hpp"
	#include "abstsyntree_dcls.hpp"
  #include <cassert>
	#include <fstream>
	#include <string>
  extern nodePtr g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}


//The %union DECL specifies the entire collection of possible data types for
//semantic values. The keyword %union is followed by braced code containing the same
//thing that goes inside a union in C.

%union{
  nodePtr expr;
  double number;
  std::string *string;
}

%token T_NUMBER T_IDENTIFIER T_STRING
%token T_PLUS T_MINUS T_DIVIDE T_STAR T_MOD
%token T_POINT T_INCR T_DECR T_LSHIFT T_RSHIFT T_EQ T_NEQ T_GT T_GTE T_LT T_LTE T_NOT
%token T_AND T_OR T_BWXOR T_BWAND T_BWOR T_BWNOT
%token  T_EQMULT T_EQDIV T_EQMOD T_EQPLUS T_EQMINUS T_EQLSHIFT T_EQRSHIFT T_ASSIGN T_EQEXPONENT T_EQBWOR T_EQBWAND
%token  T_TYPE_NAME T_SIZEOF T_SEMI T_QBEGIN T_QEND T_DOT T_COMM

%token T_TYPEDEF T_EXTERN T_STATIC T_AUTO T_REGISTER
%token T_CHAR T_SHORT T_INT T_LONG T_SIGNED T_UNSIGNED T_FLOAT T_DOUBLE T_VOLATILE T_VOID T_CONST
%token T_STRUCT T_UNION T_ENUM T_ELL
%token T_LBRACKET T_RBRACKET T_LSQBRACKET T_RSQBRACKET T_LCBRACKET T_RCBRACKET

%token T_CASE T_DEFAULT T_IF T_ELSE T_SWITCH T_WHILE T_DO T_FOR T_GOTO T_CONTINUE T_BREAK T_RETURN



%type <expr> TRANSLATION_UNIT PRI_EXPR POSTFIX_EXPR ARG_EXPR_LIST UNARY_EXPR UNARY_OP
%type <expr> CAST_EXPR MULTIPLICATIVE_EXPR ADDITIVE_EXPR SHFT_EXPR REL_EXPR EQ_EXPR AND_EXPR

%type <expr> EXCL_OR_EXPR INCL_OR_EXPR LOGI_AND_EXPR LOGI_OR_EXPR COND_EXPR ASSIGN_EXPR ASSIGN_OP EXPR CONST_EXPR
%type <expr> DECL DECL_SPECS INIT_DECLARATOR_LIST INIT_DECLARATOR STRGE_CLASS_SPEC TYPE_SPEC STRUCT_OR_UNION_SPEC
%type <expr> STRUCT_OR_UNION STRUCT_DECL_LIST STRUCT_DECL SPEC_QUAL_LIST STRUCT_DECLARATOR_LIST STRUCT_DECLARATOR
%type <expr> ENUM_SPEC ENUM_LIST ENUM TYPE_QUAL DECLARATOR
%type <expr> DIREC_DECLARATOR POINTER TYPE_QUAL_LIST PARAM_TYPE_LIST PARAM_LIST PARAM_DECL ID_LIST TYPE_NAME
%type <expr> ABST_DECLARATOR DIR_ABST_DECLARATOR INIT INIT_LIST STMT LBL_STMT COMP_STMT DECL_LIST STMT_LIST EXPR_STMT
%type <expr> SELEC_STMT ITER_STMT JMP_STMT ROOT_NODE EXT_DECL FUNC_DEF

%type <number> T_NUMBER
%type <string> T_IDENTIFIER T_STRING T_INCR T_DECR T_LBRACKET T_RBRACKET T_MOD T_DIVIDE T_AND T_BWOR
%type <string> T_WHILE T_IF T_ELSE T_ASSIGN T_EQMULT T_EQDIV T_EQMOD T_EQPLUS T_EQMINUS
%type <string> T_EQLSHIFT T_EQRSHIFT T_EQBWAND T_EQEXPONENT T_EQBWOR T_DEFAULT T_CASE
%type <string>  T_BWAND T_STAR T_PLUS T_MINUS T_BWNOT T_NOT T_QEND T_RETURN
%type <string> T_GOTO T_CONTINUE T_BREAK T_CONST T_VOLATILE T_ENUM T_STRUCT T_UNION T_COMM
%type <string> T_LSHIFT T_RSHIFT T_LT T_GT T_LTE T_GTE T_EQ T_NEQ T_BWXOR T_OR
%type <string> T_TYPEDEF T_EXTERN T_STATIC T_AUTO T_REGISTER T_VOID T_CHAR T_SHORT T_INT T_LONG T_FLOAT
%type <string> T_DOUBLE T_SIGNED T_UNSIGNED T_TYPE_NAME

%start ROOT_NODE

%%

ROOT_NODE: TRANSLATION_UNIT { g_root=$1; }


PRI_EXPR
	: T_IDENTIFIER { $$ = new identifier(*$1);std::cerr<<"id";}
	| T_NUMBER { $$ = new constant($1);std::cerr<<"const"<<$1;}
	| T_STRING { $$ = new str_lit(*$1);std::cerr<<"str";}
	| T_LBRACKET EXPR T_RBRACKET { $$=$2;std::cerr<<"primary";}
	;

POSTFIX_EXPR
	: PRI_EXPR { $$=$1; }
	| POSTFIX_EXPR T_LSQBRACKET EXPR T_RSQBRACKET { $$ = new array($1,$3); }
	| POSTFIX_EXPR T_LBRACKET T_RBRACKET { $$ = new function_name($1,NULL); }
	| POSTFIX_EXPR T_LBRACKET ARG_EXPR_LIST T_RBRACKET { $$ = new function_name($1,$3); }
	| POSTFIX_EXPR T_DOT T_IDENTIFIER { $$ = new member($1,*$3); }
	| POSTFIX_EXPR T_POINT T_IDENTIFIER { $$ = new member($1,*$3); }
	| POSTFIX_EXPR T_INCR { $$ = new incr($1); }
	| POSTFIX_EXPR T_DECR { $$ = new incr($1);  }
	;

ARG_EXPR_LIST
	: ASSIGN_EXPR {$$ = $1;}
	| ARG_EXPR_LIST T_COMM ASSIGN_EXPR {}
	;

UNARY_EXPR
	: POSTFIX_EXPR {$$=$1;}
	| T_INCR UNARY_EXPR {$$ = new incr($1); }
	| T_DECR UNARY_EXPR {$$ = new decr($1); }
	| UNARY_OP CAST_EXPR {}
	| T_SIZEOF UNARY_EXPR {}
	| T_SIZEOF T_LBRACKET TYPE_NAME T_RBRACKET {}
	;

UNARY_OP
	: T_BWAND { $$ = new unary_op(*$1);}
	| T_STAR {$$ = new unary_op(*$1); }
	| T_PLUS {$$ = new unary_op(*$1); }
	| T_MINUS {$$ = new unary_op(*$1); }
	| T_BWNOT { $$ = new unary_op(*$1);}
	| T_NOT {$$ = new unary_op(*$1);}
	;

CAST_EXPR
	: UNARY_EXPR {$$=$1;}
	| T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPR  {}
	;

MULTIPLICATIVE_EXPR
	: CAST_EXPR {$$=$1;}
	| MULTIPLICATIVE_EXPR T_STAR CAST_EXPR  {$$ = new binary_expr($1,$2,$3);}
	| MULTIPLICATIVE_EXPR T_DIVIDE CAST_EXPR  {$$ = new binary_expr($1,$2,$3);}
	| MULTIPLICATIVE_EXPR T_MOD CAST_EXPR  {$$ = new binary_expr($1,$2,$3);}
	;

ADDITIVE_EXPR
	: MULTIPLICATIVE_EXPR {$$=$1;}
	| ADDITIVE_EXPR T_PLUS MULTIPLICATIVE_EXPR  {$$ = new binary_expr($1,$2,$3);}
	| ADDITIVE_EXPR T_MINUS MULTIPLICATIVE_EXPR  {$$ = new binary_expr($1,$2,$3);}
	;

SHFT_EXPR
	: ADDITIVE_EXPR {$$=$1;}
	| SHFT_EXPR T_LSHIFT ADDITIVE_EXPR  {$$ = new binary_expr($1,$2,$3);}
	| SHFT_EXPR T_RSHIFT ADDITIVE_EXPR  {$$ = new binary_expr($1,$2,$3);}
	;

REL_EXPR
	: SHFT_EXPR {$$=$1;}
	| REL_EXPR T_LT SHFT_EXPR  {$$ = new binary_expr($1,$2,$3);}
	| REL_EXPR T_GT SHFT_EXPR 	{$$ = new binary_expr($1,$2,$3);}
	| REL_EXPR T_LTE SHFT_EXPR  {$$ = new binary_expr($1,$2,$3);}
	| REL_EXPR T_GTE SHFT_EXPR  {$$ = new binary_expr($1,$2,$3);}
	;

EQ_EXPR
	: REL_EXPR {$$ = $1;}
	| EQ_EXPR T_EQ REL_EXPR  {$$ = new binary_expr($1,$2,$3);}
	| EQ_EXPR T_NEQ REL_EXPR  {$$ = new binary_expr($1,$2,$3);}
	;

AND_EXPR
	: EQ_EXPR {$$ = $1;}
	| AND_EXPR T_BWAND EQ_EXPR  {$$ = new binary_expr($1,$2,$3);}
	;

EXCL_OR_EXPR
	: AND_EXPR {$$ = $1;}
	| EXCL_OR_EXPR T_BWXOR AND_EXPR   {$$ = new binary_expr($1,$2,$3);}
	;

INCL_OR_EXPR
	: EXCL_OR_EXPR {$$ = $1;}
	| INCL_OR_EXPR T_OR EXCL_OR_EXPR  {$$ = new binary_expr($1,$2,$3);}
	;

LOGI_AND_EXPR
	: INCL_OR_EXPR {$$ = $1;}
	| LOGI_AND_EXPR T_AND INCL_OR_EXPR  {$$ = new binary_expr($1,$2,$3);}
	;

LOGI_OR_EXPR
	: LOGI_AND_EXPR {$$ = $1;}
	| LOGI_OR_EXPR T_BWOR LOGI_AND_EXPR {$$ = new binary_expr($1,$2,$3);}
	;

COND_EXPR
	: LOGI_OR_EXPR {$$ = $1;}
	| LOGI_OR_EXPR T_QBEGIN EXPR T_QEND COND_EXPR {$$ = new cond_expr($1,$3,$5);}
	;

ASSIGN_EXPR
	: COND_EXPR {$$ = $1;}
	| UNARY_EXPR ASSIGN_OP ASSIGN_EXPR {$$ = new binary_expr($1,$2,$3);}
	;

ASSIGN_OP
	: T_ASSIGN { $$ = $1;}
	| T_EQMULT { $$ = $1;}
	| T_EQDIV { $$ = $1;}
	| T_EQMOD { $$ = $1;}
	| T_EQPLUS { $$ = $1;}
	| T_EQMINUS { $$ = $1;}
	| T_EQLSHIFT { $$ = $1;}
	| T_EQRSHIFT { $$ = $1;}
	| T_EQBWAND { $$ = $1;}
	| T_EQEXPONENT { $$ = $1;}
	| T_EQBWOR { $$ = $1;}
	;

EXPR
	: ASSIGN_EXPR {$$ = $1;}
	| EXPR T_COMM ASSIGN_EXPR { $$ = new seperator_expr($1, $3);}
	;

CONST_EXPR
	: COND_EXPR {$$ = $1;}
	;

DECL
	: DECL_SPECS T_SEMI {$$ = $1;}
	| DECL_SPECS INIT_DECLARATOR_LIST T_SEMI
	;

DECL_SPECS
	: STRGE_CLASS_SPEC {$$ = $1;}
	| STRGE_CLASS_SPEC DECL_SPECS {}
	| TYPE_SPEC {$$ = $1;}
	| TYPE_SPEC DECL_SPECS
	| TYPE_QUAL {$$ = $1;}
	| TYPE_QUAL DECL_SPECS
	;

INIT_DECLARATOR_LIST
	: INIT_DECLARATOR {$$=$1;}
	| INIT_DECLARATOR_LIST T_COMM INIT_DECLARATOR {}
	;

INIT_DECLARATOR
	: DECLARATOR {$$=$1;}
	| DECLARATOR T_ASSIGN INIT {}
	;

STRGE_CLASS_SPEC
	: T_TYPEDEF {$$=$1;}
	| T_EXTERN {$$=$1;}
	| T_STATIC {$$=$1;}
	| T_AUTO {$$=$1;}
	| T_REGISTER {$$=$1;}
	;

TYPE_SPEC
	: T_VOID  {$$=$1;}
	| T_CHAR  {$$=$1;}
	| T_SHORT {$$=$1;}
	| T_INT {$$=$1;std::cerr<<"int";}
	| T_LONG  {$$=$1;}
	| T_FLOAT  {$$=$1;}
	| T_DOUBLE  {$$=$1;}
	| T_SIGNED  {$$=$1;}
	| T_UNSIGNED  {$$=$1;}
	| STRUCT_OR_UNION_SPEC  {}
	| ENUM_SPEC  {$$=$1;}
	| T_TYPE_NAME  {$$=$1;}
	;

STRUCT_OR_UNION_SPEC
	: STRUCT_OR_UNION T_IDENTIFIER T_LCBRACKET STRUCT_DECL_LIST T_RCBRACKET  {}
	| STRUCT_OR_UNION T_LCBRACKET STRUCT_DECL_LIST T_RCBRACKET  {}
	| STRUCT_OR_UNION T_IDENTIFIER  {}
	;

STRUCT_OR_UNION
	: T_STRUCT {$$=$1;}
	| T_UNION  {$$=$1;}
	;

STRUCT_DECL_LIST
	: STRUCT_DECL {$$=$1;}
	| STRUCT_DECL_LIST STRUCT_DECL {$$= new struct_decl_list($1,$2,NULL,NULL);}
	;

STRUCT_DECL
	: SPEC_QUAL_LIST STRUCT_DECLARATOR_LIST T_SEMI {$$= new struct_decl($1,$2);}
	;

SPEC_QUAL_LIST
	: TYPE_SPEC SPEC_QUAL_LIST {}
	| TYPE_SPEC {$$=$1;}
	| TYPE_QUAL SPEC_QUAL_LIST {}
	| TYPE_QUAL {$$=$1;}
	;

STRUCT_DECLARATOR_LIST
	: STRUCT_DECLARATOR {$$=$1;}
	| STRUCT_DECLARATOR_LIST T_COMM STRUCT_DECLARATOR {}
	;

STRUCT_DECLARATOR
	: DECLARATOR {$$= new struct_decl($1,NULL);}
	| T_QEND CONST_EXPR {$$= new struct_decl(NULL,$2);}
	| DECLARATOR T_QEND CONST_EXPR {$$= new struct_decl($1,$3);}
	;

ENUM_SPEC
	: T_ENUM T_LCBRACKET ENUM_LIST T_RCBRACKET {$$= new enum_spec(*$1,NULL,$3);}
	| T_ENUM T_IDENTIFIER T_LCBRACKET ENUM_LIST T_RCBRACKET {$$= new enum_spec(*$1,*$2,$4);}
	| T_ENUM T_IDENTIFIER {$$= new enum_spec(*$1,*$2,NULL);}
	;

ENUM_LIST
	: ENUM {$$=$1;}
	| ENUM_LIST T_COMM ENUM
	;

ENUM
	: T_IDENTIFIER { $$ = new identifier(*$1);}
	| T_IDENTIFIER T_ASSIGN CONST_EXPR {}
	;

TYPE_QUAL
	: T_CONST {$$ = new type_qual(*$1);}
	| T_VOLATILE {$$ = new type_qual(*$1);}
	;

DECLARATOR
	: POINTER DIREC_DECLARATOR {$$ = new p_declarator($2);std::cerr<<"DECLARATOR->pointdirec";}
	| DIREC_DECLARATOR {$$=$1; std::cerr<<"DECLARATOR->direc";}
	;

DIREC_DECLARATOR
	: T_IDENTIFIER {std::cerr<<*$1;$$ = new identifier(*$1);}
	| T_LBRACKET DECLARATOR T_RBRACKET
	| DIREC_DECLARATOR T_LSQBRACKET CONST_EXPR T_RSQBRACKET {}
	| DIREC_DECLARATOR T_LSQBRACKET T_RSQBRACKET
	| DIREC_DECLARATOR T_LBRACKET PARAM_TYPE_LIST T_RBRACKET
	| DIREC_DECLARATOR T_LBRACKET ID_LIST T_RBRACKET
	| DIREC_DECLARATOR T_LBRACKET T_RBRACKET {std::cerr<<"empty";}
	;

POINTER
	: T_STAR { $$ = $1 }
	| T_STAR TYPE_QUAL_LIST
	| T_STAR POINTER
	| T_STAR TYPE_QUAL_LIST POINTER
	;

TYPE_QUAL_LIST
	: TYPE_QUAL
	| TYPE_QUAL_LIST TYPE_QUAL
	;


PARAM_TYPE_LIST
	: PARAM_LIST
	| PARAM_LIST T_COMM T_ELL
	;

PARAM_LIST
	: PARAM_DECL
	| PARAM_LIST T_COMM PARAM_DECL
	;

PARAM_DECL
	: DECL_SPECS DECLARATOR
	| DECL_SPECS ABST_DECLARATOR
	| DECL_SPECS
	;

ID_LIST
	: T_IDENTIFIER  {}
	| ID_LIST T_COMM T_IDENTIFIER  {std::cerr<<"here7";}
	;

TYPE_NAME
	: SPEC_QUAL_LIST {}
	| SPEC_QUAL_LIST ABST_DECLARATOR {std::cerr<<"here7";}
	;

ABST_DECLARATOR
	: POINTER {std::cerr<<"here7";}
	| DIR_ABST_DECLARATOR {std::cerr<<"here7";}
	| POINTER DIR_ABST_DECLARATOR {std::cerr<<"here7";}
	;

DIR_ABST_DECLARATOR
	: T_LBRACKET ABST_DECLARATOR T_RBRACKET {std::cerr<<"here6";}
	| T_LSQBRACKET T_RSQBRACKET {std::cerr<<"here6";}
	| T_LSQBRACKET CONST_EXPR T_RSQBRACKET {std::cerr<<"here6";}
	| DIR_ABST_DECLARATOR T_LSQBRACKET T_RSQBRACKET {std::cerr<<"here6";}
	| DIR_ABST_DECLARATOR T_LSQBRACKET CONST_EXPR T_RSQBRACKET {std::cerr<<"here6";}
	| T_LBRACKET T_RBRACKET {std::cerr<<"here6";}
	| T_LBRACKET PARAM_TYPE_LIST T_RBRACKET {std::cerr<<"here6";}
	| DIR_ABST_DECLARATOR T_LBRACKET T_RBRACKET {std::cerr<<"here6";}
	| DIR_ABST_DECLARATOR T_LBRACKET PARAM_TYPE_LIST T_RBRACKET {std::cerr<<"here6";}
	;

INIT
	: ASSIGN_EXPR
	| T_LCBRACKET INIT_LIST T_RCBRACKET {std::cerr<<"here6";}
	| T_LCBRACKET INIT_LIST T_COMM T_RCBRACKET {std::cerr<<"here6";}
	;

INIT_LIST
	: INIT {$$ = $1;}
	| INIT_LIST T_COMM INIT {std::cerr<<"here";}
	;

STMT
	: LBL_STMT {$$ = $1;}
	| COMP_STMT {$$ = $1;}
	| EXPR_STMT {$$ = $1;}
	| SELEC_STMT {$$ = $1;}
	| ITER_STMT {$$ = $1;}
	| JMP_STMT {$$ = $1;}
	;

LBL_STMT
	: T_IDENTIFIER T_QEND STMT {$$=new label_stmt(*$1,$3,NULL);}
	| T_CASE CONST_EXPR T_QEND STMT {$$=new label_stmt(*$1,$2,$4);}
	| T_DEFAULT T_QEND STMT {$$=new label_stmt(*$1,$3,NULL);}
	;

COMP_STMT
	: T_LCBRACKET T_RCBRACKET {$$= new comp_stmt(NULL,NULL);}
	| T_LCBRACKET STMT_LIST T_RCBRACKET {$$= new comp_stmt($2,NULL);}
	| T_LCBRACKET DECL_LIST T_RCBRACKET {$$= new comp_stmt($2,NULL);}
	| T_LCBRACKET DECL_LIST STMT_LIST T_RCBRACKET {;$$= new comp_stmt($2,$3);}
	;

DECL_LIST
	: DECL {$$ = new decl_list($1);}
	| DECL_LIST DECL {$$ = new decl_list($1);}
	;

STMT_LIST
	: STMT {$$ = new stmt_list($1);}
	| STMT_LIST STMT {$$=new stmt_list($1);}
	;

EXPR_STMT
	: T_SEMI {}
	| EXPR T_SEMI {$$=$1;}
	;

SELEC_STMT
	: T_IF T_LBRACKET EXPR T_RBRACKET STMT {$$ = new ifelse_stmt($3, $5, NULL);}
	| T_IF T_LBRACKET EXPR T_RBRACKET STMT T_ELSE STMT {$$ = new ifelse_stmt($3, $5, $7);}
	| T_SWITCH T_LBRACKET EXPR T_RBRACKET STMT { $$ = new switch_stmt($3, $5);}
	;

ITER_STMT
	: T_WHILE T_LBRACKET EXPR T_RBRACKET STMT  { $$ = new while_stmt($3, $5);}
	| T_DO STMT T_WHILE T_LBRACKET EXPR T_RBRACKET T_SEMI {$$ = new do_stmt($2, $5);}
	| T_FOR T_LBRACKET EXPR_STMT EXPR_STMT T_RBRACKET STMT {}
	| T_FOR T_LBRACKET EXPR_STMT EXPR_STMT EXPR T_RBRACKET STMT {}
	;

JMP_STMT
	: T_GOTO T_IDENTIFIER T_SEMI {$$=new jump_stmt(*$1,NULL);}
	| T_CONTINUE T_SEMI {$$=new jump_stmt(*$1,NULL);}
	| T_BREAK T_SEMI {$$=new jump_stmt(*$1,NULL);}
	| T_RETURN T_SEMI {$$=new jump_stmt(*$1,NULL);}
	| T_RETURN EXPR T_SEMI {$$=new jump_stmt(*$1,$2);}
	;

TRANSLATION_UNIT
	: EXT_DECL {}
	| TRANSLATION_UNIT EXT_DECL {}
	;
EXT_DECL
	: FUNC_DEF {$$=$1;}
	| DECL {$$=$1;;}
	;

FUNC_DEF
	: DECL_SPECS DECLARATOR DECL_LIST COMP_STMT  {std::cerr<<"FUNC";$$ = new function_definition($1, $2, $3, $4);}
	| DECL_SPECS DECLARATOR COMP_STMT  {std::cerr<<"FUNC";$$ = new function_definition($1, $2, NULL, $3);}
	| DECLARATOR DECL_LIST COMP_STMT  {std::cerr<<"FUNC";$$ = new function_definition(NULL, $1, $2, $3);}
	| DECLARATOR COMP_STMT  {std::cerr<<"FUNC";$$ = new function_definition(NULL, $1, NULL, $2);}
	;

	%%

	nodePtr g_root;
	extern FILE *yyin;
	const nodePtr parseAST(FILE* src){
	  g_root=0;
		yyin=src;
		std::cerr<<"parse in";
	  yyparse();
		std::cerr<<"parse out "<<g_root;
	  return g_root;
	}
