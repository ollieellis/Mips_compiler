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


/*
//punctuation and paired operators
%token T_SEMI T_LBRACKET T_RBRACKET T_LCBRACKET T_RCBRACKET
//possibly unused 
%token T_LSBRACKET T_RSBRACKET
*/

//logical and bitwise operators
%token T_BWAND T_BWOR t_BWNOT




//Types 
%type <expr> EXPR TERM FACTOR //unsure where statement fits in
//%type <number> T_NUMBER
%type <string> T_VARIABLE T_LOG T_EXP T_SQRT FUNCTION_NAME 
// think all tokens must be declared as type string
// above comment is false



//start a translation unit is sometimes used not sure if we need
//https://en.wikipedia.org/wiki/Translation_unit_(programming)
//https://www.lysator.liu.se/c/ANSI-C-grammar-y.html

%start ROOT_NODE

ROOT_NODE : EXPR { g_root = $1; } 	//all things apart from above tokens and chars are pointers 
									//to some sort of node

//will need to add the following the the %type things
//cant remeber how blank spaces are treated i think im doing correctly

VARIABLE_DECLERATION	:VARIABLE_TYPE T_VARIABLE {;} 
						|VARIABLE_TYPE T_VARIABLE ASSIGNMENT_OPERATOR{;}
						;

//not sure how the following works with type checker
VARIABLE_TYPE			: T_INT
						;

//not sure how the following works with type checker
ASSIGNMENT_OPERATOR     
						: T_INT '=' FACTOR {;} //not true if variable is type string

//arethmatic stuff
NUMERICAL_EXPR 			: TERM                 			{ $$ = $1; }
						| NUMERICAL_EXPR T_PLUS TERM 	{ ; }
						| NUMERICAL_EXPR T_MINUS TERM 	{ ; }
						;

TERM 					: FACTOR               	{ $$ = $1; }
						| TERM T_TIMES FACTOR 	{ ; }
						| TERM T_DIVIDE FACTOR 	{ ; }

FACTOR 					: T_NUMBER           					{ ;}
						| '(' NUMERICAL_EXPR ')' 	{ ; }
//dont no about this 1	| T_VARIABLE 							{ ; }

SELECTION				: T_IF '(' STATEMENT ')' '{' STUFF0 '}' { ;} //IF
						: T_IF '(' STATEMENT ')' '{' STUFF0 '}' T_ELSE '{' STUFF0 '}' //IF ELSE

//where stufF0 is a place holder for the start of the grammer
//simular yo expresion in lab 2
//simular to compound statement on parser link maybe

ITTERATION 				: T_WHILE '(' STATEMENT ')' '{' STUFF0 '}' { ;}
//for loops will also go here

STATEMENT				: something T_EQ something 	{ ;} 
						| something T_NEQ something { ;}
/*somthing can be a 
numerical expresion
bool dunno if including
int
function w retun type int or bool
*/

FUNCTION_DECLERATION 	: T_VOID T_VARIABLE '(' ')' '{' STUFF0 '}' { ;} //NO ARGUMENTS
						| T_INT T_VARIABLE '(' ')' '{' STUFF0 '}' 	{ ;}//NO ARGUMENTS				
//MAYBE TRY COMBINE THE TYPE THING BUT LATER
//I also don't know whether to inlcude declorations without implemtation 

FUNCTION_CALL           : T_VARIABLE '(' ')' {;} //dont know if this is correct

STUFF0					: VARIABLE_DECLERATION {;}
						| ASSIGNMENT_OPERATOR {;}
						| SELECTION	{;}
						| ITTERATION {;}
						| FUNCTION_CALL {;}