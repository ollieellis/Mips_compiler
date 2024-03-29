
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
digit     [0-9]+
int       [1-9]{digit}*


nondigit [a-zA-z_]
variable ^\"{nondigit}[a-zA-Z0-9_]*
%%
while   { return T_WHILE;}
if      { return T_IF;}
else    { return T_ELSE;}
int			{ return T_INT;}
void		{ return T_VOID;}
return  { return T_RETURN;}






[*]             { return T_STAR; }
[/]             { return T_DIVIDE; }
[+]             { return T_PLUS; }
[-]             { return T_MINUS; }


"=="    { return T_EQ; }
"!="    { return T_NEQ;}

[;]		{ return ';'; }
[(]		{ return '('; }
[)]		{ return ')'; }
[\[]	{ return '['; }
[\]]	{ return ']'; }
[\{]	{ return '{'; }
[\}]	{ return '}'; }


[=]		{ return '='; }



[&]    { return '&'; }
[|]    { return '|'; }
[~]    { return '~'; }

{variable} { yylval.string=new std::string(yytext); return T_VARIABLE; }
{int}			 { yylval.number=strtod(yytext, 0); return T_NUMBER; }
