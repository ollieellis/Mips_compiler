
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



dec                 ([1-9]{digit}*)|0
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

nondigit [a-zA-Z_]

newline [\r\n]+
comment1 "//"(.)*{newline}
comment2 "/*"([^*]|(\*+[^*/]))*\*+\/
white					{newline}|[ \t]|{comment1}|{comment2}
real					{dec}|{hex}|{oct}|{decsigned}|{declong}|{decunsignedlong}|{octunsignedlong}|{octlong}|{hexlong}|{hexunsignedlong}


variable {nondigit}[a-zA-Z0-9_]*

%%

(\"([^\\\"]|\\.)*\") {yylval.string = new std::string(yytext);return T_STR;}

"."             { yylval.string=new std::string(yytext);return T_DOT;}
[*]             { yylval.string=new std::string(yytext);return T_STAR; }
[/]             { yylval.string=new std::string(yytext);return T_DIVIDE; }
[+]             { yylval.string=new std::string(yytext);return T_PLUS; }
[-]             { yylval.string=new std::string(yytext);return T_MINUS; }
[%]             { yylval.string=new std::string(yytext);return T_MOD; }

[;]              { yylval.string=new std::string(yytext);return T_SEMI;}
[,]							 { yylval.string=new std::string(yytext);return T_COMM;}

"->"             { yylval.string=new std::string(yytext);return T_POINT;}
"..."            { yylval.string=new std::string(yytext);return T_ELL;}

[(]              { yylval.string=new std::string(yytext);return T_LBRACKET;}
[)]              { yylval.string=new std::string(yytext);return T_RBRACKET;}
[\[]             { yylval.string=new std::string(yytext);return T_LSQBRACKET; }
[\]]             { yylval.string=new std::string(yytext);return T_RSQBRACKET; }
"{"             { yylval.string=new std::string(yytext);return T_LCBRACKET; }
"}"             { yylval.string=new std::string(yytext);return T_RCBRACKET; }
[?]              { yylval.string=new std::string(yytext);return T_QBEGIN; }
[:]              { yylval.string=new std::string(yytext);return T_QEND; }

[=]              { yylval.string=new std::string(yytext);return T_ASSIGN; }
"++"             { yylval.string=new std::string(yytext);return T_INCR; }
"--"             { yylval.string=new std::string(yytext);return T_DECR; }
"*="             { yylval.string=new std::string(yytext);return T_EQMULT;}
"/="             { yylval.string=new std::string(yytext);return T_EQDIV;}
"%="             { yylval.string=new std::string(yytext);return T_EQMOD;}
"+="             { yylval.string=new std::string(yytext);return T_EQPLUS;}
"-="             { yylval.string=new std::string(yytext);return T_EQMINUS;}
"<<="            { yylval.string=new std::string(yytext);return T_EQLSHIFT;}
">>="            { yylval.string=new std::string(yytext);return T_EQRSHIFT;}
"^="             { yylval.string=new std::string(yytext);return T_EQEXPONENT;}
"&="             { yylval.string=new std::string(yytext);return T_EQBWAND;}
"|="             { yylval.string=new std::string(yytext);return T_EQBWOR;}

"&&"    { yylval.string=new std::string(yytext);return T_AND;}
"||"    { yylval.string=new std::string(yytext);return T_OR; }
"=="    { yylval.string=new std::string(yytext);return T_EQ; }
"!="    { yylval.string=new std::string(yytext);return T_NEQ;}
[>]     {yylval.string=new std::string(yytext); return T_GT; }
">="    { yylval.string=new std::string(yytext);return T_GTE;}
[<]     { yylval.string=new std::string(yytext);return T_LT; }
"<="    { yylval.string=new std::string(yytext);return T_LTE;}
[!][^=] { yylval.string=new std::string(yytext);return T_NOT;}

[&]    { yylval.string=new std::string(yytext);return T_BWAND; }
[\^]    { yylval.string=new std::string(yytext);return T_BWXOR; }
[\|]    { yylval.string=new std::string(yytext);return T_BWOR;  }
[~]    { yylval.string=new std::string(yytext);return T_BWNOT; }
"<<"   { yylval.string=new std::string(yytext);return T_LSHIFT;}
">>"   { yylval.string=new std::string(yytext);return T_RSHIFT;}


auto       {  yylval.string=new std::string(yytext);return T_AUTO;}
double     {  yylval.string=new std::string(yytext);return T_DOUBLE;}
int        {  yylval.string=new std::string(yytext); return T_INT;}
break      {  yylval.string=new std::string(yytext);return T_BREAK;}
else       {  yylval.string=new std::string(yytext);return T_ELSE;}
long       {  yylval.string=new std::string(yytext);return T_LONG;}
switch     { yylval.string=new std::string(yytext); return T_SWITCH;}
case       {  yylval.string=new std::string(yytext); yylval.string=new std::string(yytext);return T_CASE;}
register   {  yylval.string=new std::string(yytext);return T_REGISTER;}
typedef    {  yylval.string=new std::string(yytext);return T_TYPEDEF;}
char       {  yylval.string=new std::string(yytext);return T_CHAR;}
extern     {  yylval.string=new std::string(yytext);return T_EXTERN;}
return     {  yylval.string=new std::string(yytext);return T_RETURN;}
const      { yylval.string=new std::string(yytext); return T_CONST;}
float      {  yylval.string=new std::string(yytext);return T_FLOAT;}
short      {  yylval.string=new std::string(yytext);return T_SHORT;}
unsigned   {  yylval.string=new std::string(yytext);return T_UNSIGNED;}
continue   {  yylval.string=new std::string(yytext);return T_CONTINUE;}
for        {  yylval.string=new std::string(yytext);return T_FOR;}
signed     {  yylval.string=new std::string(yytext);return T_SIGNED;}
void       {  yylval.string=new std::string(yytext);return T_VOID;}
default    {  yylval.string=new std::string(yytext);return T_DEFAULT;}
goto       {  yylval.string=new std::string(yytext);return T_GOTO;}
sizeof     {  yylval.string=new std::string(yytext);return T_SIZEOF;}
volatile   {  yylval.string=new std::string(yytext);return T_VOLATILE;}
do         {  yylval.string=new std::string(yytext);return T_DO;}
if         {  yylval.string=new std::string(yytext);return T_IF;}
static     {  yylval.string=new std::string(yytext);return T_STATIC;}
while      {  yylval.string=new std::string(yytext);return T_WHILE;}

{white} {}
{real} { yylval.number=strtod(yytext, 0); return T_NUMBER; }
{variable} { yylval.string=new std::string(yytext); return T_IDENTIFIER; }
[ \t\v\n\f]		{ }
. {}
%%
void yyerror (char const *s)
{
  fprintf (stderr, "flex error : %s\n", s);
  exit(1);
}
