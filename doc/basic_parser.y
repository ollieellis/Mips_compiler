%{
  #include "ast.hpp"

  #include <cassert>

  extern const nodePtr *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
%}


//The %union declaration specifies the entire collection of possible data types for
//semantic values. The keyword %union is followed by braced code containing the same
//thing that goes inside a union in C.

%union{
  const nodePtr *expr; //is statement needed?
  double number; //believe this means all numbers are doubles not sure if i need int??
  std::string *string;
}

//Tokens
%token T_VARIABLE T_NUMBER
//keywords
%token T_WHILE T_IF T_ELSE T_INT T_VOID T_RETURN

//arethmatic operators
%token T_STAR T_DIVIDE T_PLUS T_MINUS

//binary operators
%token T_EQ T_NEQ

//logical and bitwise operators
%token T_BWAND T_BWOR t_BWNOT

//Types
%type <expr> NUMERICAL_EXPR TERM FACTOR VARIABLE_DECLERATION VARIABLE_TYPE ASSIGNMENT_OPERATOR SELECTION ITTERATION STATEMENT STATEMENT_SIDE FUNCTION_DECLERATION FUNCTION_CALL STUFF0
//%type <number> T_NUMBER
%type <string> T_VARIABLE
// think all tokens must be declared as type string
// above comment is false



//start a translation unit is sometimes used not sure if we need
//https://en.wikipedia.org/wiki/Translation_unit_(programming)
//https://www.lysator.liu.se/c/ANSI-C-grammar-y.html

%start ROOT_NODE

%%

ROOT_NODE : STUFF0 {g_root = $1;} 	//all things apart from above tokens and chars are pointers
									//to some sort of node

//will need to add the following the the %type things
//cant remeber how blank spaces are treated i think im doing correctly

VARIABLE_DECLERATION	:VARIABLE_TYPE T_VARIABLE {;}
						|VARIABLE_TYPE T_VARIABLE ASSIGNMENT_OPERATOR{;}
						;

//not sure how the following works with type checker
VARIABLE_TYPE			: T_INT {;}
						;

//not sure how the following works with type checker
ASSIGNMENT_OPERATOR
						: T_INT T_VARIABLE '=' FACTOR {;} //not true if variable is type string

//arethmatic stuff
NUMERICAL_EXPR 			: TERM                 			{ $$ = $1; }
								| NUMERICAL_EXPR T_PLUS TERM 	{ ; }
								| NUMERICAL_EXPR T_MINUS TERM 	{ ; }
								;

TERM 					: FACTOR               	{ $$ = $1; }
						| TERM T_STAR FACTOR 	{ ; }
						| TERM T_DIVIDE FACTOR 	{ ; }

FACTOR 					: T_NUMBER           					{ ;}
						| '(' NUMERICAL_EXPR ')' 	{ ; }
//dont no about this 1	| T_VARIABLE 							{ ; }

SELECTION				: T_IF '(' STATEMENT ')' '{' STUFF0 '}' { ;} //IF
						| T_IF '(' STATEMENT ')' '{' STUFF0 '}' T_ELSE '{' STUFF0 '}' //IF ELSE

//where stufF0 is a place holder for the start of the grammer
//simular yo expresion in lab 2
//simular to compound statement on parser link maybe

ITTERATION 				: T_WHILE '(' STATEMENT ')' '{' STUFF0 '}' { ;}
//for loops will also go here

STATEMENT				: STATEMENT_SIDE T_EQ STATEMENT_SIDE	{ ;}
						| STATEMENT_SIDE T_NEQ STATEMENT_SIDE 	{ ;}
/*somthing can be a
numerical expresion
bool dunno if including
int
function w retun type int or bool
*/
STATEMENT_SIDE			: T_INT {;}
						| NUMERICAL_EXPR{;}

FUNCTION_DECLERATION 	: T_VOID T_VARIABLE '(' ')' '{' STUFF0 '}' { ;} //NO ARGUMENTS
						| T_INT T_VARIABLE '(' ')' '{' STUFF0 '}' 	{ ;}//NO ARGUMENTS
//MAYBE TRY COMBINE THE TYPE THING BUT LATER
//I also don't know whether to inlcude declorations without implemtation

FUNCTION_CALL           : T_VARIABLE '(' ')' {;} //dont know if this is correct
//feel like this should have type the fiunction is eg string int ect

STUFF0					: VARIABLE_DECLERATION {;}
						| ASSIGNMENT_OPERATOR {;}
						| SELECTION	{;}
						| ITTERATION {;}
						| FUNCTION_CALL {;}
