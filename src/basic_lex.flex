
%option noyywrap

%{
#include "t_parser.tab.hpp" //this was a bison parser
//i think we need to make our own using bison 3.0.4.
#include <string.h> //ide thing?
//#include "histogram.hpp"//check commented as unsure whether we hav/need?

// This is to work around an irritating bug in Flex
// https://stackoverflow.com/questions/46213840/get-rid-of-warning-implicit-declaration-of-function-fileno-in-flex
extern "C" int fileno(FILE *stream);
int num_lines=0; int num_chars=0;
int current_scope=0;
%}

%%
//keywords
while   { return T_WHILE;}
if      { return T_IF;}
else    { return T_ELSE;}
int			{ return T_INT;}
void		{ return T_VOID;} //maybe not for basic idk?
return  { return T_RETURN;}
//main	{ return T_MAIN;} //function name not needed

/*Operators*/
/*----arithmetic operators*/
[*]             { return T_STAR; } //dont know how to use w pointers
[/]             { return T_DIVIDE; }
[+]             { return T_PLUS; }
[-]             { return T_MINUS; }

//binary operators //&&... not included bc can be done using below
"=="    { return T_EQ; } // is " alllowed???
"!="    { return T_NEQ;}


//logical operators
[&]    { return T_BWAND; }
[|]    { return T_BWOR;  }
[~]    { return T_BWNOT; }

digit     [0-9]+
int       [1-9]{digit}*


nondigit [a-zA-z_]
variable ^"{nondigit}[a-zA-Z0-9_]*

//identifiers - yylval was something he created :L
{variable} { yylval.string=new std::string(yytext); return T_VARIABLE; }
{int}					{ yylval.number=strtod(yytext, 0); return T_NUMBER; }

%%
