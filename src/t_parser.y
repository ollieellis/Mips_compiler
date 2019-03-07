%code requires{
  #include "abstsyntree.hpp"

  #include <cassert>
  #include <math.h>
  #include <string.h>
  extern const Expression *g_root; // A way of getting the AST out
  int yylex(void);
  void yyerror(const char *);
}

%union{
  const Expression *expr;
  double number;
  std::string *string;
}





%token T_TIMES T_DIVIDE T_PLUS T_MINUS T_EXPONENT
%token T_NUMBER T_VARIABLE

%token T_LBRACKET T_RBRACKET T_LSQBRACKET T_RSQBRACKET T_LCBRACKET T_RCBRACKET T_QBEGIN T_QEND
%token T_SEMI T_DOT T_POINT T_TILDE T_ELL T_SIZE

%token T_WHILE T_IF T_ELSE T_INT
%token T_LOG T_EXP T_SQRT
%token T_VOID



%type <expr> EXPR TERM FACTOR INTER
%type <number> T_NUMBER
%type <string> T_VARIABLE T_LOG T_EXP T_SQRT FUNCTION_NAME


%start ROOT


%%

%%

const Expression *g_root; // Definition of variable (to match declaration earlier)

const Expression *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
