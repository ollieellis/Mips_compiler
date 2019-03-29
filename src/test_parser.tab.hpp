/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SRC_TEST_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_TEST_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/test_parser.y" /* yacc.c:1909  */

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

#line 61 "src/test_parser.tab.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_NUMBER = 258,
    T_IDENTIFIER = 259,
    T_STR = 260,
    T_PLUS = 261,
    T_MINUS = 262,
    T_DIVIDE = 263,
    T_STAR = 264,
    T_MOD = 265,
    T_POINT = 266,
    T_INCR = 267,
    T_DECR = 268,
    T_LSHIFT = 269,
    T_RSHIFT = 270,
    T_EQ = 271,
    T_NEQ = 272,
    T_GT = 273,
    T_GTE = 274,
    T_LT = 275,
    T_LTE = 276,
    T_NOT = 277,
    T_AND = 278,
    T_OR = 279,
    T_BWXOR = 280,
    T_BWAND = 281,
    T_BWOR = 282,
    T_BWNOT = 283,
    T_EQMULT = 284,
    T_EQDIV = 285,
    T_EQMOD = 286,
    T_EQPLUS = 287,
    T_EQMINUS = 288,
    T_EQLSHIFT = 289,
    T_EQRSHIFT = 290,
    T_ASSIGN = 291,
    T_EQEXPONENT = 292,
    T_EQBWOR = 293,
    T_EQBWAND = 294,
    T_TYPE_NAME = 295,
    T_SIZEOF = 296,
    T_SEMI = 297,
    T_QBEGIN = 298,
    T_QEND = 299,
    T_DOT = 300,
    T_COMM = 301,
    T_TYPEDEF = 302,
    T_EXTERN = 303,
    T_STATIC = 304,
    T_AUTO = 305,
    T_REGISTER = 306,
    T_CHAR = 307,
    T_SHORT = 308,
    T_INT = 309,
    T_LONG = 310,
    T_SIGNED = 311,
    T_UNSIGNED = 312,
    T_FLOAT = 313,
    T_DOUBLE = 314,
    T_VOLATILE = 315,
    T_VOID = 316,
    T_CONST = 317,
    T_ELL = 318,
    T_LBRACKET = 319,
    T_RBRACKET = 320,
    T_LSQBRACKET = 321,
    T_RSQBRACKET = 322,
    T_LCBRACKET = 323,
    T_RCBRACKET = 324,
    T_CASE = 325,
    T_DEFAULT = 326,
    T_IF = 327,
    T_ELSE = 328,
    T_SWITCH = 329,
    T_WHILE = 330,
    T_DO = 331,
    T_FOR = 332,
    T_GOTO = 333,
    T_CONTINUE = 334,
    T_BREAK = 335,
    T_RETURN = 336
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "src/test_parser.y" /* yacc.c:1909  */

  nodePtr expr;
  double number;
  std::string *string;
	expr_list* exprlist;
	string_list* strlist;

#line 163 "src/test_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_TEST_PARSER_TAB_HPP_INCLUDED  */
