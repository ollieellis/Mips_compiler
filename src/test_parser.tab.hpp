/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_NUMBER = 258,
     T_IDENTIFIER = 259,
     T_STRING = 260,
     T_CONST = 261,
     T_PLUS = 262,
     T_MINUS = 263,
     T_DIV = 264,
     T_STAR = 265,
     T_MOD = 266,
     T_POINT = 267,
     T_INCR = 268,
     T_DECR = 269,
     T_LSHIFT = 270,
     T_RSHIFT = 271,
     T_EQ = 272,
     T_NEQ = 273,
     T_GT = 274,
     T_GTE = 275,
     T_LT = 276,
     T_LTE = 277,
     T_NOT = 278,
     T_AND = 279,
     T_OR = 280,
     T_BWXOR = 281,
     T_BWAND = 282,
     T_BWOR = 283,
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
     T_TILDE = 302,
     T_TYPEDEF = 303,
     T_EXTERN = 304,
     T_STATIC = 305,
     T_AUTO = 306,
     T_REGISTER = 307,
     T_CHAR = 308,
     T_SHORT = 309,
     T_INT = 310,
     T_LONG = 311,
     T_SIGNED = 312,
     T_UNSIGNED = 313,
     T_FLOAT = 314,
     T_DOUBLE = 315,
     T_VOLATILE = 316,
     T_VOID = 317,
     T_STRUCT = 318,
     T_UNION = 319,
     T_ENUM = 320,
     T_ELL = 321,
     T_LBRACKET = 322,
     T_RBRACKET = 323,
     T_LSQBRACKET = 324,
     T_RSQBRACKET = 325,
     T_LCBRACKET = 326,
     T_RCBRACKET = 327,
     T_CASE = 328,
     T_DEFAULT = 329,
     T_IF = 330,
     T_ELSE = 331,
     T_SWITCH = 332,
     T_WHILE = 333,
     T_DO = 334,
     T_FOR = 335,
     T_GOTO = 336,
     T_CONTINUE = 337,
     T_BREAK = 338,
     T_RETURN = 339
   };
#endif
/* Tokens.  */
#define T_NUMBER 258
#define T_IDENTIFIER 259
#define T_STRING 260
#define T_CONST 261
#define T_PLUS 262
#define T_MINUS 263
#define T_DIV 264
#define T_STAR 265
#define T_MOD 266
#define T_POINT 267
#define T_INCR 268
#define T_DECR 269
#define T_LSHIFT 270
#define T_RSHIFT 271
#define T_EQ 272
#define T_NEQ 273
#define T_GT 274
#define T_GTE 275
#define T_LT 276
#define T_LTE 277
#define T_NOT 278
#define T_AND 279
#define T_OR 280
#define T_BWXOR 281
#define T_BWAND 282
#define T_BWOR 283
#define T_EQMULT 284
#define T_EQDIV 285
#define T_EQMOD 286
#define T_EQPLUS 287
#define T_EQMINUS 288
#define T_EQLSHIFT 289
#define T_EQRSHIFT 290
#define T_ASSIGN 291
#define T_EQEXPONENT 292
#define T_EQBWOR 293
#define T_EQBWAND 294
#define T_TYPE_NAME 295
#define T_SIZEOF 296
#define T_SEMI 297
#define T_QBEGIN 298
#define T_QEND 299
#define T_DOT 300
#define T_COMM 301
#define T_TILDE 302
#define T_TYPEDEF 303
#define T_EXTERN 304
#define T_STATIC 305
#define T_AUTO 306
#define T_REGISTER 307
#define T_CHAR 308
#define T_SHORT 309
#define T_INT 310
#define T_LONG 311
#define T_SIGNED 312
#define T_UNSIGNED 313
#define T_FLOAT 314
#define T_DOUBLE 315
#define T_VOLATILE 316
#define T_VOID 317
#define T_STRUCT 318
#define T_UNION 319
#define T_ENUM 320
#define T_ELL 321
#define T_LBRACKET 322
#define T_RBRACKET 323
#define T_LSQBRACKET 324
#define T_RSQBRACKET 325
#define T_LCBRACKET 326
#define T_RCBRACKET 327
#define T_CASE 328
#define T_DEFAULT 329
#define T_IF 330
#define T_ELSE 331
#define T_SWITCH 332
#define T_WHILE 333
#define T_DO 334
#define T_FOR 335
#define T_GOTO 336
#define T_CONTINUE 337
#define T_BREAK 338
#define T_RETURN 339




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "src/test_parser.y"
{
  nodePtr expr;
  double number;
  std::string *string;
}
/* Line 1529 of yacc.c.  */
#line 223 "src/test_parser.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

