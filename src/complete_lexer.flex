
%option noyywrap

%{
//keyword "auto"|"double"|"int"|"struct"|"break"|"else"|"long"|"switch"|"case"|"enum"|"register"|"typedef"|"char"|"extern"|"return"|"union"|"const"|"float"|"short"|"unsigned"|"continue"|"for"|"signed"|"void"|"default"|"goto"|"sizeof"|"volatile"|"do"|"if"|"static"|"while"

// This is to work around an irritating bug in Flex
// https://stackoverflow.com/questions/46213840/get-rid-of-warning-implicit-declaration-of-function-fileno-in-flex
extern "C" int fileno(FILE *stream);
#include "test_parser.tab.hpp"
int num_lines=0; int num_chars=0;
int current_scope=0;
%}

digit     [0-9]+
hexdigit  0[xX][0-9A-Fa-f]+
octdigit  [0][0-7]+

hexescape "\x"{hexdigit}|{hexescape}{hexdigit}
octescape "\"({octdigit}|"{octdigit}{octdigit}|{octdigit}{octdigit}{octdigit})
escapeseq {hexescape}|{octescape}



dec                 [1-9]{digit}*
decsigned           {dec}[uU]
declong             {dec}[lL]
decunsignedlong     {declong}[uU][lL]
decsignedlong       {decsigned}[lL]

oct                 {octdigit}+[eE][+-]?{octdigit}?
octlong             {oct}[lL]
octunsignedlong     {octlong}[uU][lL]

hex                 {hexdigit}+[eE][+-]?{hexdigit}?
hexlong             {hex}[lL]
hexunsignedlong     {hexlong}[uU][lL]

nondigit [a-zA-z_]

newline [\r\n]+
comment1 "//"[.]*{newline}
white					[.]|{newline}|[ \t]|{comment1}
real					{dec}|{hex}|{oct}

L?\"[^"\n]*["\n] {return T_STR;}//check strings can't cross line boundaries
variable [^"]{nondigit}[a-zA-Z0-9_]*

%%

"."             { return T_DOT;}
[*]             { return T_STAR; }
[/]             { return T_DIVIDE; }
[+]             { return T_PLUS; }
[-]             { return T_MINUS; }
[%]             { return T_MOD; }

[;]              { return T_SEMI;}
[,]							 { return T_COMM;}

"->"             { return T_POINT;}
"..."            { return T_ELL;}

[(]              { return T_LBRACKET; }
[)]              { return T_RBRACKET; }
[\[]             { return T_LSQBRACKET; }
[\]]             { return T_RSQBRACKET; }
[\{]             { return T_LCBRACKET; }
[\}]             { return T_RCBRACKET; }
[?]              { return T_QBEGIN; }
[:]              { return T_QEND; }

[=]              { return T_ASSIGN; }
"++"             { return T_INCR; }
"--"             { return T_DECR; }
"*="             { return T_EQMULT;}
"/="             { return T_EQDIV;}
"%="             { return T_EQMOD;}
"+="             { return T_EQPLUS;}
"-="             { return T_EQMINUS;}
"<<="            { return T_EQLSHIFT;}
">>="            { return T_EQRSHIFT;}
"^="             { return T_EQEXPONENT;}
"&="             { return T_EQBWAND;}
"|="             { return T_EQBWOR;}

"&&"    { return T_AND;}
"||"    { return T_OR; }
"=="    { return T_EQ; }
"!="    { return T_NEQ;}
[>]     { return T_GT; }
">="    { return T_GTE;}
[<]     { return T_LT; }
"<="    { return T_LTE;}
[!][^=] { return T_NOT;}

[&]    { return T_BWAND; }
[\^]    { return T_BWXOR; }
[|]    { return T_BWOR;  }
[~]    { return T_BWNOT; }
"<<"   { return T_LSHIFT;}
">>"   { return T_RSHIFT;}


auto       { return T_AUTO;}
double     { return T_DOUBLE;}
int        { return T_INT;}
struct     { return T_STRUCT;}
break      { return T_BREAK;}
else       { return T_ELSE;}
long       { return T_LONG;}
switch     { return T_SWITCH;}
case       { return T_CASE;}
enum       { return T_ENUM;}
register   { return T_REGISTER;}
typedef    { return T_TYPEDEF;}
char       { return T_CHAR;}
extern     { return T_EXTERN;}
return     { return T_RETURN;}
union      { return T_UNION;}
const      { return T_CONST;}
float      { return T_FLOAT;}
short      { return T_SHORT;}
unsigned   { return T_UNSIGNED;}
continue   { return T_CONTINUE;}
for        { return T_FOR;}
signed     { return T_SIGNED;}
void       { return T_VOID;}
default    { return T_DEFAULT;}
goto       { return T_GOTO;}
sizeof     { return T_SIZEOF;}
volatile   { return T_VOLATILE;}
do         { return T_DO;}
if         { return T_IF;}
static     { return T_STATIC;}
while      { return T_WHILE;}

{white} {}
{real} { yylval.number=strtod(yytext, 0); return T_NUMBER; }
{variable} { yylval.string=new std::string(yytext); return T_IDENTIFIER; }

%%
void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
