%code requires{
  #include "abstsyntree.hpp"
  #include "abstsyntree_expr.hpp"
	#include "abstsyntree_stmts.hpp"
	#include "abstsyntree_dcls.hpp"
  #include <cassert>
	#include <fstream>
	#include <string>
  extern nodePtr g_root; // A way of getting the AST out
	extern bool do_main;
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
	expr_list* exprlist;
	string_list* strlist;
}

%token T_NUMBER T_IDENTIFIER T_STRING
%token T_PLUS T_MINUS T_DIVIDE T_STAR T_MOD
%token T_POINT T_INCR T_DECR T_LSHIFT T_RSHIFT T_EQ T_NEQ T_GT T_GTE T_LT T_LTE T_NOT
%token T_AND T_OR T_BWXOR T_BWAND T_BWOR T_BWNOT
%token  T_EQMULT T_EQDIV T_EQMOD T_EQPLUS T_EQMINUS T_EQLSHIFT T_EQRSHIFT T_ASSIGN T_EQEXPONENT T_EQBWOR T_EQBWAND
%token  T_TYPE_NAME T_SIZEOF T_SEMI T_QBEGIN T_QEND T_DOT T_COMM

%token T_TYPEDEF T_EXTERN T_STATIC T_AUTO T_REGISTER
%token T_CHAR T_SHORT T_INT T_LONG T_SIGNED T_UNSIGNED T_FLOAT T_DOUBLE T_VOLATILE T_VOID T_CONST
%token  T_ELL
%token T_LBRACKET T_RBRACKET T_LSQBRACKET T_RSQBRACKET T_LCBRACKET T_RCBRACKET

%token T_CASE T_DEFAULT T_IF T_ELSE T_SWITCH T_WHILE T_DO T_FOR T_GOTO T_CONTINUE T_BREAK T_RETURN



%type <expr> TRANSLATION_UNIT PRI_EXPR POSTFIX_EXPR UNARY_EXPR UNARY_OP
%type <expr> CAST_EXPR MULTIPLICATIVE_EXPR ADDITIVE_EXPR SHFT_EXPR REL_EXPR EQ_EXPR AND_EXPR
%type <exprlist> ARG_EXPR_LIST DEC_LIST
%type <expr> EXCL_OR_EXPR INCL_OR_EXPR LOGI_AND_EXPR LOGI_OR_EXPR COND_EXPR ASSIGN_EXPR EXPR CONST_EXPR
%type <expr> DECL DECL_SPECS INIT_DECLARATOR_LIST INIT_DECLARATOR STRGE_CLASS_SPEC TYPE_SPEC
%type <expr> SPEC_QUAL_LIST
%type <expr> TYPE_QUAL DECLARATOR
%type <expr> DIREC_DECLARATOR TYPE_QUAL_LIST PARAM_TYPE_LIST PARAM_LIST PARAM_DECL ID_LIST TYPE_NAME
%type <expr> ABST_DECLARATOR DIR_ABST_DECLARATOR INIT INIT_LIST STMT LBL_STMT COMP_STMT DECL_LIST STMT_LIST EXPR_STMT
%type <expr> SELEC_STMT ITER_STMT JMP_STMT ROOT_NODE EXT_DECL FUNC_DEF


%type <number> T_NUMBER
%type <string> T_IDENTIFIER T_STRING T_INCR T_DECR T_LBRACKET T_RBRACKET T_MOD T_DIVIDE T_AND T_BWOR
%type <string> T_WHILE T_IF T_ELSE T_ASSIGN T_EQMULT T_EQDIV T_EQMOD T_EQPLUS T_EQMINUS
%type <string> T_EQLSHIFT T_EQRSHIFT T_EQBWAND T_EQEXPONENT T_EQBWOR T_DEFAULT T_CASE
%type <string>  T_BWAND T_STAR T_PLUS T_MINUS T_BWNOT T_NOT T_QEND T_RETURN
%type <string> T_GOTO T_CONTINUE T_BREAK T_CONST T_VOLATILE T_COMM
%type <string> T_LSHIFT T_RSHIFT T_LT T_GT T_LTE T_GTE T_EQ T_NEQ T_BWXOR T_OR
%type <string> T_TYPEDEF T_EXTERN T_STATIC T_AUTO T_REGISTER T_VOID T_CHAR T_SHORT T_INT T_LONG T_FLOAT T_SIZEOF
%type <string> T_DOUBLE T_SIGNED T_UNSIGNED T_TYPE_NAME ASSIGN_OP T_ELL T_LSQBRACKET T_RSQBRACKET T_RCBRACKET T_LCBRACKET

%start ROOT_NODE

%%

ROOT_NODE: TRANSLATION_UNIT { g_root=$1;}


PRI_EXPR
	: T_IDENTIFIER { std::cerr<<"PRIM"<<*$1;$$ = new identifier(*$1);}
	| T_NUMBER { $$ = new constant($1);std::cerr<<$1;}
	| T_STRING { $$ = new str_lit(*$1);}
	| T_LBRACKET EXPR T_RBRACKET { $$=$2;}
	;

POSTFIX_EXPR
	: PRI_EXPR { $$=$1; }
	| POSTFIX_EXPR T_LSQBRACKET EXPR T_RSQBRACKET { $$ = new array($1,$3); }
	| POSTFIX_EXPR T_LBRACKET T_RBRACKET { $$ = new function_name($1,NULL,*$2,*$3); }
	| POSTFIX_EXPR T_LBRACKET ARG_EXPR_LIST T_RBRACKET { $$ = new function_name($1,$3,*$2,*$4); }
	| POSTFIX_EXPR T_DOT T_IDENTIFIER { $$ = new member($1,*$3); }
	| POSTFIX_EXPR T_POINT T_IDENTIFIER { $$ = new member($1,*$3); }
	| POSTFIX_EXPR T_INCR { $$=new incr($1);}
	| POSTFIX_EXPR T_DECR { $$=new decr($1);}
	;

ARG_EXPR_LIST
	: ASSIGN_EXPR {$$=new expr_list($1);}
	| ARG_EXPR_LIST T_COMM ASSIGN_EXPR {$$=$1;$1->push($3);}
	;

UNARY_EXPR
	: POSTFIX_EXPR {$$=$1;}
	| T_INCR UNARY_EXPR { $$=new incr($2);}
	| T_DECR UNARY_EXPR { $$=new decr($2);}
	| UNARY_OP CAST_EXPR { $$=new unary_expr($1,$2);}
	| T_SIZEOF UNARY_EXPR { $$=new size_of(*$1,$2, "","");}
	| T_SIZEOF T_LBRACKET TYPE_NAME T_RBRACKET { $$=new size_of(*$1,$3,*$2,*$4);}
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
	| T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPR {$$=new cast_expr($2,$4);}
	;

MULTIPLICATIVE_EXPR
	: CAST_EXPR {$$=$1;}
	| MULTIPLICATIVE_EXPR T_STAR CAST_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	| MULTIPLICATIVE_EXPR T_DIVIDE CAST_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	| MULTIPLICATIVE_EXPR T_MOD CAST_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	;

ADDITIVE_EXPR
	: MULTIPLICATIVE_EXPR {$$=$1;}
	| ADDITIVE_EXPR T_PLUS MULTIPLICATIVE_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	| ADDITIVE_EXPR T_MINUS MULTIPLICATIVE_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	;

SHFT_EXPR
	: ADDITIVE_EXPR {$$=$1;}
	| SHFT_EXPR T_LSHIFT ADDITIVE_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	| SHFT_EXPR T_RSHIFT ADDITIVE_EXPR {$$ = new binary_expr($1,*$2,$3);}
	;

REL_EXPR
	: SHFT_EXPR {$$=$1;}
	| REL_EXPR T_LT SHFT_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	| REL_EXPR T_GT SHFT_EXPR 	{$$ = new binary_expr($1,*$2,$3);}
	| REL_EXPR T_LTE SHFT_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	| REL_EXPR T_GTE SHFT_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	;

EQ_EXPR
	: REL_EXPR {$$ = $1;}
	| EQ_EXPR T_EQ REL_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	| EQ_EXPR T_NEQ REL_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	;

AND_EXPR
	: EQ_EXPR {$$ = $1;}
	| AND_EXPR T_BWAND EQ_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	;

EXCL_OR_EXPR
	: AND_EXPR {$$ = $1;}
	| EXCL_OR_EXPR T_BWXOR AND_EXPR   {$$ = new binary_expr($1,*$2,$3);}
	;

INCL_OR_EXPR
	: EXCL_OR_EXPR {$$ = $1;}
	| INCL_OR_EXPR T_OR EXCL_OR_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	;

LOGI_AND_EXPR
	: INCL_OR_EXPR {$$ = $1;}
	| LOGI_AND_EXPR T_AND INCL_OR_EXPR  {$$ = new binary_expr($1,*$2,$3);}
	;

LOGI_OR_EXPR
	: LOGI_AND_EXPR {$$ = $1;}
	| LOGI_OR_EXPR T_BWOR LOGI_AND_EXPR {$$ = new binary_expr($1,*$2,$3);}
	;

COND_EXPR
	: LOGI_OR_EXPR {$$ = $1;}
	| LOGI_OR_EXPR T_QBEGIN EXPR T_QEND COND_EXPR {$$ = new cond_expr($1,$3,$5);}
	;

ASSIGN_EXPR
	: COND_EXPR {$$ = $1;}
	| UNARY_EXPR ASSIGN_OP ASSIGN_EXPR {$$ = new binary_expr($1,*$2,$3);}
	;

ASSIGN_OP
	: T_ASSIGN {$$=$1;}
	| T_EQMULT {$$=$1;}
	| T_EQDIV {$$=$1;}
	| T_EQMOD {$$=$1;}
	| T_EQPLUS {$$=$1;}
	| T_EQMINUS {$$=$1;}
	| T_EQLSHIFT {$$=$1;}
	| T_EQRSHIFT {$$=$1;}
	| T_EQBWAND {$$=$1;}
	| T_EQEXPONENT {$$=$1;}
	| T_EQBWOR  {$$=$1;}
	;

EXPR
	: ASSIGN_EXPR {$$ = new expr_list($1);}
	| EXPR T_COMM ASSIGN_EXPR {$1->push($2);$$=$1;}
	;

CONST_EXPR
	: COND_EXPR {$$ = $1;}
	;

DECL
	: DECL_SPECS T_SEMI {std::cerr<<" D1 ";std::cout<<$1;$$ = new decl_list($1);}
	| DECL_SPECS INIT_DECLARATOR_LIST T_SEMI {std::cerr<<" D2 ";$2->push($1);$$=$2;}
	;

DECL_SPECS
	: STRGE_CLASS_SPEC {$$ = $1;}
	| STRGE_CLASS_SPEC DECL_SPECS {$$ = new decl_specs($1,$2);}
	| TYPE_SPEC {$$ = $1;}
	| TYPE_SPEC DECL_SPECS {$$ = new decl_specs($1,$2);}
	| TYPE_QUAL {$$ = $1;}
	| TYPE_QUAL DECL_SPECS
	;

INIT_DECLARATOR_LIST
	: INIT_DECLARATOR {$$ = new decl_list($1);}
	| INIT_DECLARATOR_LIST T_COMM INIT_DECLARATOR {$1->push($3);$$=$1;}
	;

INIT_DECLARATOR
	: DECLARATOR {std::cerr<<"INITDECL1";$$= new ideclarator($1);}
	| DECLARATOR T_ASSIGN INIT {$$ = new binary_expr($1,*$2,$3);}
	;

STRGE_CLASS_SPEC
	: T_TYPEDEF {$$ = new type_qual(*$1); }
	| T_EXTERN {$$ = new type_qual(*$1); }
	| T_STATIC {$$ = new type_qual(*$1); }
	| T_AUTO {$$ = new type_qual(*$1); }
	| T_REGISTER {$$ = new type_qual(*$1); }
	;

TYPE_SPEC
	: T_VOID  {$$ = new type_qual(*$1); }
	| T_CHAR  {$$ = new type_qual(*$1); }
	| T_SHORT {$$ = new type_qual(*$1); }
	| T_INT {$$ = new type_qual(*$1);}
	| T_LONG  {$$ = new type_qual(*$1); }
	| T_FLOAT {$$ = new type_qual(*$1); }
	| T_DOUBLE {$$ = new type_qual(*$1); }
	| T_SIGNED  {$$ = new type_qual(*$1); }
	| T_UNSIGNED  {$$ = new type_qual(*$1); }
	| T_TYPE_NAME {$$ = new type_qual(*$1); }
	;

SPEC_QUAL_LIST
	: TYPE_SPEC SPEC_QUAL_LIST  {$1->push($2);$$=$1;}
	| TYPE_SPEC {$$= new decl_list($1);}
	| TYPE_QUAL SPEC_QUAL_LIST  {$1->push($2);$$=$1;}
	| TYPE_QUAL {$$= new decl_list($1);}
	;
TYPE_QUAL
	: T_CONST {$$ = new type_qual(*$1);}
	| T_VOLATILE {$$ = new type_qual(*$1);}
	;

DECLARATOR

	: DIREC_DECLARATOR {$$=$1; std::cerr<<"DECLARATOR->direc";}
	;

DIREC_DECLARATOR
	: T_IDENTIFIER {std::cerr<<*$1<<std::endl;$$ = new identifier(*$1); if(*$1=="main"){std::cerr<<"fasds";do_main=true;}}
	| T_LBRACKET DECLARATOR T_RBRACKET {$$=$2;}
	| DIREC_DECLARATOR T_LSQBRACKET CONST_EXPR T_RSQBRACKET {$$ = new d_declarator($1,$3,*$2,*$4);}
	| DIREC_DECLARATOR T_LSQBRACKET T_RSQBRACKET {$$ = new d_declarator($1,NULL,*$2,*$3);}
	| DIREC_DECLARATOR T_LBRACKET PARAM_TYPE_LIST T_RBRACKET  {std::cerr<<"PTL";$$ = new d_declarator($1,$3,*$2,*$4);}
	| DIREC_DECLARATOR T_LBRACKET ID_LIST T_RBRACKET  {$$ = new d_declarator($1,$3,*$2,*$4);}
	| DIREC_DECLARATOR T_LBRACKET T_RBRACKET  {$$ = new d_declarator($1,NULL,*$2,*$3);}
	;

TYPE_QUAL_LIST
	: TYPE_QUAL  { $$= new expr_list($1);}
	| TYPE_QUAL_LIST TYPE_QUAL {$1->push($2);$$=$1;}
	;


PARAM_TYPE_LIST
	: PARAM_LIST {$$= $1;}
	| PARAM_LIST T_COMM T_ELL {$$= new para_t_list($1,*$2,*$3);}
	;

PARAM_LIST
	: PARAM_DECL {$$= new expr_list($1);}
	| PARAM_LIST T_COMM PARAM_DECL {$1->push($2);$$=$1;}
	;

PARAM_DECL
	: DECL_SPECS DECLARATOR {$$ = new param_decl($1,$2);}
	| DECL_SPECS ABST_DECLARATOR {$$ = new param_decl($1,$2);}
	| DECL_SPECS {$$=$1;}
	;

ID_LIST//list of strings
	: T_IDENTIFIER { std::cerr<<"IDLIST";$$ = new string_list($1);}
	| ID_LIST T_COMM T_IDENTIFIER {std::cerr<<"IDLISTC";$$=$1;$1->push($3);}
	;

TYPE_NAME
	: SPEC_QUAL_LIST { std::cerr<<"typename";$$=$1;}
	| SPEC_QUAL_LIST ABST_DECLARATOR { std::cerr<<"typename";$$ = new type_name($1,$2);}
	;

ABST_DECLARATOR
	: DIR_ABST_DECLARATOR {$$=$1;}
	;

DIR_ABST_DECLARATOR
	: T_LBRACKET ABST_DECLARATOR T_RBRACKET {$$=new dir_abst_declarator(NULL,$2,*$1,*$3);}
	| T_LSQBRACKET T_RSQBRACKET {$$=new dir_abst_declarator(NULL,NULL,*$1,*$2);}
	| T_LSQBRACKET CONST_EXPR T_RSQBRACKET {$$=new dir_abst_declarator(NULL,$2,*$1,*$3);}
	| DIR_ABST_DECLARATOR T_LSQBRACKET T_RSQBRACKET {$$=new dir_abst_declarator($1,NULL,*$2,*$3);}
	| DIR_ABST_DECLARATOR T_LSQBRACKET CONST_EXPR T_RSQBRACKET {$$=new dir_abst_declarator($1,$3,*$2,*$4);}
	| T_LBRACKET T_RBRACKET {$$=new dir_abst_declarator(NULL,NULL,*$1,*$2);}
	| T_LBRACKET PARAM_TYPE_LIST T_RBRACKET {$$=new dir_abst_declarator(NULL,$2,*$1,*$3);}
	| DIR_ABST_DECLARATOR T_LBRACKET T_RBRACKET {$$=new dir_abst_declarator($1,NULL,*$2,*$3);}
	| DIR_ABST_DECLARATOR T_LBRACKET PARAM_TYPE_LIST T_RBRACKET {$$=new dir_abst_declarator($1,$3,*$2,*$4);}
	;

INIT
	: ASSIGN_EXPR {$$=$1;}
	| T_LCBRACKET INIT_LIST T_RCBRACKET {$$ = new init($2,*$3);}
	| T_LCBRACKET INIT_LIST T_COMM T_RCBRACKET {$$ = new init($2, *$3);};
	;

INIT_LIST
	: INIT {$$ = new init_list($1);}
	| INIT_LIST T_COMM INIT  {$$=$1;$1->push($3);}
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
	: T_LCBRACKET T_RCBRACKET {	std::cerr<<"COMP1";$$= new comp_stmt(NULL,NULL);}
	| T_LCBRACKET STMT_LIST T_RCBRACKET {std::cerr<<"COMP2";$$= new comp_stmt($2,NULL);}
	| T_LCBRACKET DECL_LIST T_RCBRACKET {	std::cerr<<"COMP3";$$= new comp_stmt($2,NULL);}
	| T_LCBRACKET DECL_LIST STMT_LIST T_RCBRACKET {std::cerr<<"COMP4";$$= new comp_stmt($2,$3);}
	;

DECL_LIST
	: DECL {std::cerr<<"DL1";$$= new decl_list($1);}
	| DECL_LIST DECL {std::cerr<<"DL2";$$=$1;$1->push($2);}
	;

STMT_LIST
	: STMT {std::cerr<<"sl1";$$= new stmt_list($1);}
	| STMT_LIST STMT {std::cerr<<"s2";$$=$1;$1->push($2);}
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
	| T_RETURN T_SEMI {std::cerr<<"return empty";$$=new jump_stmt(*$1,NULL);}
	| T_RETURN EXPR T_SEMI {std::cerr<<"return full";$$=new jump_stmt(*$1,$2);}
	;

TRANSLATION_UNIT
	: EXT_DECL {$$=new stmt_list($1);}
	| TRANSLATION_UNIT EXT_DECL {$$=$1;$1->push($2);}
	;
EXT_DECL
	: FUNC_DEF {$$=$1;}
	| DECL {$$=$1;}
	;

FUNC_DEF
	: DECL_SPECS DECLARATOR DECL_LIST COMP_STMT  {std::cerr<<"FUNC1";$$ = new function_definition($1, $2, $3, $4, do_main);}
	| DECL_SPECS DECLARATOR COMP_STMT  {std::cerr<<"FUNC2";$$ = new function_definition($1, $2, NULL, $3,do_main);}
	| DECLARATOR DECL_LIST COMP_STMT  {std::cerr<<"FUNC3";$$ = new function_definition(NULL, $1, $2, $3,do_main);}
	| DECLARATOR COMP_STMT  {std::cerr<<"FUNC4";$$ = new function_definition(NULL, $1, NULL, $2,do_main);}
	;

	%%

	nodePtr g_root;
	bool do_main;
	extern FILE *yyin;
	const nodePtr parseAST(FILE* src){
	  g_root=0;
		yyin=src;
		do_main=false;
		std::cerr<<"parse in";
	  yyparse();
		std::cerr<<"parse out "<<g_root;
	  return g_root;
	}
