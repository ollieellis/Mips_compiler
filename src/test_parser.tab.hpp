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
     T_MULT = 264,
     T_DIV = 265,
     T_STAR = 266,
     T_EXPONENT = 267,
     T_MOD = 268,
     T_POINT = 269,
     T_INCR = 270,
     T_DECR = 271,
     T_LSHIFT = 272,
     T_RSHIFT = 273,
     T_EQ = 274,
     T_NEQ = 275,
     T_GT = 276,
     T_GTE = 277,
     T_LT = 278,
     T_LTE = 279,
     T_NOT = 280,
     T_AND = 281,
     T_OR = 282,
     T_BWXOR = 283,
     T_BWAND = 284,
     T_BWOR = 285,
     T_EQMULT = 286,
     T_EQDIV = 287,
     T_EQMOD = 288,
     T_EQPLUS = 289,
     T_EQMINUS = 290,
     T_EQLSHIFT = 291,
     T_EQRSHIFT = 292,
     T_ASSIGN = 293,
     T_EQEXPONENT = 294,
     T_EQBWOR = 295,
     T_EQBWAND = 296,
     T_TYPE_NAME = 297,
     T_SIZEOF = 298,
     T_SEMI = 299,
     T_QBEGIN = 300,
     T_QEND = 301,
     T_DOT = 302,
     T_COMM = 303,
     T_TILDE = 304,
     T_TYPEDEF = 305,
     T_EXTERN = 306,
     T_STATIC = 307,
     T_AUTO = 308,
     T_REGISTER = 309,
     T_CHAR = 310,
     T_SHORT = 311,
     T_INT = 312,
     T_LONG = 313,
     T_SIGNED = 314,
     T_UNSIGNED = 315,
     T_FLOAT = 316,
     T_DOUBLE = 317,
     T_VOLATILE = 318,
     T_VOID = 319,
     T_STRUCT = 320,
     T_UNION = 321,
     T_ENUM = 322,
     T_ELL = 323,
     T_LBRACKET = 324,
     T_RBRACKET = 325,
     T_LSQBRACKET = 326,
     T_RSQBRACKET = 327,
     T_LCBRACKET = 328,
     T_RCBRACKET = 329,
     T_CASE = 330,
     T_DEFAULT = 331,
     T_IF = 332,
     T_ELSE = 333,
     T_SWITCH = 334,
     T_WHILE = 335,
     T_DO = 336,
     T_FOR = 337,
     T_GOTO = 338,
     T_CONTINUE = 339,
     T_BREAK = 340,
     T_RETURN = 341
   };
#endif
/* Tokens.  */
#define T_NUMBER 258
#define T_IDENTIFIER 259
#define T_STRING 260
#define T_CONST 261
#define T_PLUS 262
#define T_MINUS 263
#define T_MULT 264
#define T_DIV 265
#define T_STAR 266
#define T_EXPONENT 267
#define T_MOD 268
#define T_POINT 269
#define T_INCR 270
#define T_DECR 271
#define T_LSHIFT 272
#define T_RSHIFT 273
#define T_EQ 274
#define T_NEQ 275
#define T_GT 276
#define T_GTE 277
#define T_LT 278
#define T_LTE 279
#define T_NOT 280
#define T_AND 281
#define T_OR 282
#define T_BWXOR 283
#define T_BWAND 284
#define T_BWOR 285
#define T_EQMULT 286
#define T_EQDIV 287
#define T_EQMOD 288
#define T_EQPLUS 289
#define T_EQMINUS 290
#define T_EQLSHIFT 291
#define T_EQRSHIFT 292
#define T_ASSIGN 293
#define T_EQEXPONENT 294
#define T_EQBWOR 295
#define T_EQBWAND 296
#define T_TYPE_NAME 297
#define T_SIZEOF 298
#define T_SEMI 299
#define T_QBEGIN 300
#define T_QEND 301
#define T_DOT 302
#define T_COMM 303
#define T_TILDE 304
#define T_TYPEDEF 305
#define T_EXTERN 306
#define T_STATIC 307
#define T_AUTO 308
#define T_REGISTER 309
#define T_CHAR 310
#define T_SHORT 311
#define T_INT 312
#define T_LONG 313
#define T_SIGNED 314
#define T_UNSIGNED 315
#define T_FLOAT 316
#define T_DOUBLE 317
#define T_VOLATILE 318
#define T_VOID 319
#define T_STRUCT 320
#define T_UNION 321
#define T_ENUM 322
#define T_ELL 323
#define T_LBRACKET 324
#define T_RBRACKET 325
#define T_LSQBRACKET 326
#define T_RSQBRACKET 327
#define T_LCBRACKET 328
#define T_RCBRACKET 329
#define T_CASE 330
#define T_DEFAULT 331
#define T_IF 332
#define T_ELSE 333
#define T_SWITCH 334
#define T_WHILE 335
#define T_DO 336
#define T_FOR 337
#define T_GOTO 338
#define T_CONTINUE 339
#define T_BREAK 340
#define T_RETURN 341




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "src/test_parser.y"
{
  const nodePtr *expr; //is STMT needed?
  double number; //believe this means all numbers are doubles not sure if i need int??
  std::string *string;
}
/* Line 1529 of yacc.c.  */
#line 227 "src/test_parser.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

