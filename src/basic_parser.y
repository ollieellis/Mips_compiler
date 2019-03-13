%code requires{
  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}


//The %union declaration specifies the entire collection of possible data types for
//semantic values. The keyword %union is followed by braced code containing the same
//thing that goes inside a union in C.

%union{
  const Expression *expr; //is statement needed?
  double number; //believe this means all numbers are doubles not sure if i need int??
  std::string *string;
}

//Tokens
//keywords
%token T_WHILE T_IF T_ELSE T_INT T_VOID T_RETURN

//arethmatic operators
%token T_STAR T_DEVIDE T_PLUS T_MINUS

//binary operators
&token T_EQ, T_NEQ

//punctuation and paired operators
%token T_SEMI T_LBRACKET T_RBRACKET T_LCBRACKET T_RCBRACKET
//possibly unused
%token T_LSBRACKET T_RSBRACKET

//logical and bitwise operators
%token T_BWAND T_BWOR t_BWNOT




//Types
%type <expr> EXPR TERM FACTOR //unsure wher statement fits in
%type <number> T_NUMBER
%type <string> T_VARIABLE T_LOG T_EXP T_SQRT FUNCTION_NAME




//start a translation unit is sometimes used not sure if we need
//https://en.wikipedia.org/wiki/Translation_unit_(programming)
//https://www.lysator.liu.se/c/ANSI-C-grammar-y.html

%start ROOT_NODE

ROOT_NODE : EXPR { g_root = $1; }
