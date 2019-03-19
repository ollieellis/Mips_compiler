/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "src/test_parser.y"

  #include "abstsyntree.hpp"

  #include <cassert>

  extern const nodePtr *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "src/test_parser.y"
{
  const nodePtr *expr;
  double number;
  std::string *string;
}
/* Line 193 of yacc.c.  */
#line 284 "src/test_parser.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 297 "src/test_parser.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNRULES -- Number of states.  */
#define YYNSTATES  350

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    68,    70,    72,    74,    76,    78,    80,    82,
      87,    89,    93,    97,   101,   103,   107,   111,   113,   117,
     121,   123,   127,   131,   135,   139,   141,   145,   149,   151,
     155,   157,   161,   163,   167,   169,   173,   175,   179,   181,
     187,   189,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   221,   223,   226,   230,   232,
     235,   237,   240,   242,   245,   247,   251,   253,   257,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   297,   302,   305,   307,
     309,   311,   314,   318,   321,   323,   326,   328,   330,   334,
     336,   339,   343,   348,   354,   357,   359,   363,   365,   369,
     371,   373,   376,   378,   380,   384,   389,   393,   398,   403,
     407,   409,   412,   415,   419,   421,   424,   426,   430,   432,
     436,   439,   442,   444,   446,   450,   452,   455,   457,   459,
     462,   466,   469,   473,   477,   482,   485,   489,   493,   498,
     500,   504,   509,   511,   515,   517,   519,   521,   523,   525,
     527,   531,   536,   540,   543,   547,   551,   556,   558,   561,
     563,   566,   568,   571,   577,   585,   591,   597,   605,   612,
     620,   624,   627,   630,   633,   637,   639,   642,   644,   646,
     651,   655,   659
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     146,     0,    -1,     4,    -1,     3,    -1,     5,    -1,    67,
     105,    68,    -1,    86,    -1,    87,    69,   105,    70,    -1,
      87,    67,    68,    -1,    87,    67,    88,    68,    -1,    87,
      45,     4,    -1,    87,    12,     4,    -1,    87,    13,    -1,
      87,    14,    -1,   103,    -1,    88,    46,   103,    -1,    87,
      -1,    13,    89,    -1,    14,    89,    -1,    90,    91,    -1,
      41,    89,    -1,    41,    67,   132,    68,    -1,    27,    -1,
      10,    -1,     7,    -1,     8,    -1,    47,    -1,    23,    -1,
      89,    -1,    67,   132,    68,    91,    -1,    91,    -1,    92,
      10,    91,    -1,    92,     9,    91,    -1,    92,    11,    91,
      -1,    92,    -1,    93,     7,    92,    -1,    93,     8,    92,
      -1,    93,    -1,    94,    15,    93,    -1,    94,    16,    93,
      -1,    94,    -1,    95,    21,    94,    -1,    95,    19,    94,
      -1,    95,    22,    94,    -1,    95,    20,    94,    -1,    95,
      -1,    96,    17,    95,    -1,    96,    18,    95,    -1,    96,
      -1,    97,    27,    96,    -1,    97,    -1,    98,    26,    97,
      -1,    98,    -1,    99,    25,    98,    -1,    99,    -1,   100,
      24,    99,    -1,   100,    -1,   101,    28,   100,    -1,   101,
      -1,   101,    43,   105,    44,   102,    -1,   102,    -1,    89,
     104,   103,    -1,    36,    -1,    29,    -1,    30,    -1,    31,
      -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,    39,
      -1,    37,    -1,    38,    -1,   103,    -1,   105,    46,   103,
      -1,   102,    -1,   108,    42,    -1,   108,   109,    42,    -1,
     111,    -1,   111,   108,    -1,   112,    -1,   112,   108,    -1,
     123,    -1,   123,   108,    -1,   110,    -1,   109,    46,   110,
      -1,   124,    -1,   124,    36,   135,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    62,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    59,    -1,    60,
      -1,    57,    -1,    58,    -1,   113,    -1,   120,    -1,    40,
      -1,   114,     4,    71,   115,    72,    -1,   114,    71,   115,
      72,    -1,   114,     4,    -1,    63,    -1,    64,    -1,   116,
      -1,   115,   116,    -1,   117,   118,    42,    -1,   112,   117,
      -1,   112,    -1,   123,   117,    -1,   123,    -1,   119,    -1,
     118,    46,   119,    -1,   124,    -1,    44,   106,    -1,   124,
      44,   106,    -1,    65,    71,   121,    72,    -1,    65,     4,
      71,   121,    72,    -1,    65,     4,    -1,   122,    -1,   121,
      46,   122,    -1,     4,    -1,     4,    36,   106,    -1,     6,
      -1,    61,    -1,   126,   125,    -1,   125,    -1,     4,    -1,
      67,   124,    68,    -1,   125,    69,   106,    70,    -1,   125,
      69,    70,    -1,   125,    67,   128,    68,    -1,   125,    67,
     131,    68,    -1,   125,    67,    68,    -1,    10,    -1,    10,
     127,    -1,    10,   126,    -1,    10,   127,   126,    -1,   123,
      -1,   127,   123,    -1,   129,    -1,   129,    46,    66,    -1,
     130,    -1,   129,    46,   130,    -1,   108,   124,    -1,   108,
     133,    -1,   108,    -1,     4,    -1,   131,    46,     4,    -1,
     117,    -1,   117,   133,    -1,   126,    -1,   134,    -1,   126,
     134,    -1,    67,   133,    68,    -1,    69,    70,    -1,    69,
     106,    70,    -1,   134,    69,    70,    -1,   134,    69,   106,
      70,    -1,    67,    68,    -1,    67,   128,    68,    -1,   134,
      67,    68,    -1,   134,    67,   128,    68,    -1,   103,    -1,
      71,   136,    72,    -1,    71,   136,    46,    72,    -1,   135,
      -1,   136,    46,   135,    -1,   138,    -1,   139,    -1,   142,
      -1,   143,    -1,   144,    -1,   145,    -1,     4,    44,   137,
      -1,    73,   106,    44,   137,    -1,    74,    44,   137,    -1,
      71,    72,    -1,    71,   141,    72,    -1,    71,   140,    72,
      -1,    71,   140,   141,    72,    -1,   107,    -1,   140,   107,
      -1,   137,    -1,   141,   137,    -1,    42,    -1,   105,    42,
      -1,    75,    67,   105,    68,   137,    -1,    75,    67,   105,
      68,   137,    76,   137,    -1,    77,    67,   105,    68,   137,
      -1,    78,    67,   105,    68,   137,    -1,    79,   137,    78,
      67,   105,    68,    42,    -1,    80,    67,   142,   142,    68,
     137,    -1,    80,    67,   142,   142,   105,    68,   137,    -1,
      81,     4,    42,    -1,    82,    42,    -1,    83,    42,    -1,
      84,    42,    -1,    84,   105,    42,    -1,   147,    -1,   146,
     147,    -1,   148,    -1,   107,    -1,   108,   124,   140,   139,
      -1,   108,   124,   139,    -1,   124,   140,   139,    -1,   124,
     139,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    66,    67,    68,    72,    73,    74,    75,
      76,    77,    78,    79,    83,    84,    88,    89,    90,    91,
      92,    93,    97,    98,    99,   100,   101,   102,   106,   107,
     111,   112,   113,   114,   118,   119,   120,   124,   125,   126,
     130,   131,   132,   133,   134,   138,   139,   140,   144,   145,
     149,   150,   154,   155,   159,   160,   164,   165,   169,   170,
     174,   175,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   193,   194,   198,   202,   203,   207,   208,
     209,   210,   211,   212,   216,   217,   221,   222,   226,   227,
     228,   229,   230,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   249,   250,   251,   255,   256,
     260,   261,   265,   269,   270,   271,   272,   276,   277,   281,
     282,   283,   287,   288,   289,   293,   294,   298,   299,   303,
     304,   308,   309,   313,   314,   315,   316,   317,   318,   319,
     323,   324,   325,   326,   330,   331,   336,   337,   341,   342,
     346,   347,   348,   352,   353,   357,   358,   362,   363,   364,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   380,
     381,   382,   386,   387,   391,   392,   393,   394,   395,   396,
     400,   401,   402,   406,   407,   408,   409,   413,   414,   418,
     419,   423,   424,   428,   429,   430,   434,   435,   436,   437,
     441,   442,   443,   444,   445,   449,   450,   453,   454,   458,
     459,   460,   461
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NUMBER", "T_IDENTIFIER", "T_STRING",
  "T_CONST", "T_PLUS", "T_MINUS", "T_DIV", "T_STAR", "T_MOD", "T_POINT",
  "T_INCR", "T_DECR", "T_LSHIFT", "T_RSHIFT", "T_EQ", "T_NEQ", "T_GT",
  "T_GTE", "T_LT", "T_LTE", "T_NOT", "T_AND", "T_OR", "T_BWXOR", "T_BWAND",
  "T_BWOR", "T_EQMULT", "T_EQDIV", "T_EQMOD", "T_EQPLUS", "T_EQMINUS",
  "T_EQLSHIFT", "T_EQRSHIFT", "T_ASSIGN", "T_EQEXPONENT", "T_EQBWOR",
  "T_EQBWAND", "T_TYPE_NAME", "T_SIZEOF", "T_SEMI", "T_QBEGIN", "T_QEND",
  "T_DOT", "T_COMM", "T_TILDE", "T_TYPEDEF", "T_EXTERN", "T_STATIC",
  "T_AUTO", "T_REGISTER", "T_CHAR", "T_SHORT", "T_INT", "T_LONG",
  "T_SIGNED", "T_UNSIGNED", "T_FLOAT", "T_DOUBLE", "T_VOLATILE", "T_VOID",
  "T_STRUCT", "T_UNION", "T_ENUM", "T_ELL", "T_LBRACKET", "T_RBRACKET",
  "T_LSQBRACKET", "T_RSQBRACKET", "T_LCBRACKET", "T_RCBRACKET", "T_CASE",
  "T_DEFAULT", "T_IF", "T_ELSE", "T_SWITCH", "T_WHILE", "T_DO", "T_FOR",
  "T_GOTO", "T_CONTINUE", "T_BREAK", "T_RETURN", "$accept", "PRI_EXPR",
  "POSTFIX_EXPR", "ARG_EXPR_LIST", "UNARY_EXPR", "UNARY_OP", "CAST_EXPR",
  "MULTIPLICATIVE_EXPR", "ADDITIVE_EXPR", "SHFT_EXPR", "REL_EXPR",
  "EQ_EXPR", "AND_EXPR", "EXCL_OR_EXPR", "INCL_OR_EXPR", "LOGI_AND_EXPR",
  "LOGI_OR_EXPR", "COND_EXPR", "ASSIGN_EXPR", "ASSIGN_OP", "EXPR",
  "CONST_EXPR", "DECL", "DECL_SPECS", "INIT_DECLARATOR_LIST",
  "INIT_DECLARATOR", "STRGE_CLASS_SPEC", "TYPE_SPEC",
  "STRUCT_OR_UNION_SPEC", "STRUCT_OR_UNION", "STRUCT_DECL_LIST",
  "STRUCT_DECL", "SPEC_QUAL_LIST", "STRUCT_DECLARATOR_LIST",
  "STRUCT_DECLARATOR", "ENUM_SPEC", "ENUM_LIST", "ENUM", "TYPE_QUAL",
  "DECLARATOR", "DIREC_DECLARATOR", "POINTER", "TYPE_QUAL_LIST",
  "PARAM_TYPE_LIST", "PARAM_LIST", "PARAM_DECL", "ID_LIST", "TYPE_NAME",
  "ABST_DECLARATOR", "DIR_ABST_DECLARATOR", "INIT", "INIT_LIST", "STMT",
  "LBL_STMT", "COMP_STMT", "DECL_LIST", "STMT_LIST", "EXPR_STMT",
  "SELEC_STMT", "ITER_STMT", "JMP_STMT", "ROOT_NODE", "EXT_DECL",
  "FUNC_DEF", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   135,   136,   136,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   143,   144,   144,   144,   144,
     145,   145,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   148
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   129,   140,   104,    88,    89,    90,    91,    92,
      94,    95,    96,    97,   100,   101,    98,    99,   130,    93,
     108,   109,     0,     0,   208,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   144,   142,
     141,   124,     0,     0,    76,     0,    84,    86,    79,    81,
     107,     0,    83,     0,   187,     0,   212,     0,     0,     0,
     131,     1,   206,   145,   143,     0,   127,     0,   125,   134,
      77,     0,     0,   210,     0,     0,   114,     0,   110,     0,
     116,     3,     2,     4,    24,    25,    23,     0,     0,    27,
      22,     0,   191,    26,     0,   183,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,    16,    28,
       0,    30,    34,    37,    40,    45,    48,    50,    52,    54,
      56,    58,    60,    73,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,    86,   188,   211,   153,   139,   152,
       0,   146,   148,     0,     2,   136,    28,    75,     0,     0,
       0,     0,   122,    85,     0,   169,    87,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,     0,     0,    17,
      18,     0,    20,     0,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,   203,     0,     0,    12,
      13,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    62,    71,    72,    70,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,     0,   185,     0,
     184,   190,     0,     0,   150,   157,   151,   158,   137,     0,
       0,   138,   135,   123,   128,   126,   172,     0,   105,   120,
     112,     0,     0,   180,     0,     5,     0,   157,   156,     0,
       0,   182,     0,     0,     0,     0,     0,   200,   204,    11,
      10,     8,     0,    14,     0,    61,    32,    31,    33,    35,
      36,    38,    39,    42,    44,    41,    43,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,     0,   170,
     118,   121,    21,    29,   181,     0,     0,     0,     0,     0,
       0,     9,     7,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,   193,   195,   196,     0,     0,     0,    15,
      59,   168,   164,     0,     0,   198,     0,   194,   197,   199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   272,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   205,
     124,   148,    54,    55,    45,    46,    26,    27,    28,    29,
      77,    78,    79,   163,   164,    30,    67,    68,    31,    32,
      33,    34,    40,   298,   141,   142,   143,   175,   299,   237,
     156,   247,   125,   126,   127,    57,   129,   130,   131,   132,
     133,    35,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -176
static const yytype_int16 yypact[] =
{
    1265,  -176,  -176,    11,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,     7,    58,  -176,    66,  1364,  1364,  -176,    10,
    -176,  1364,   893,    43,    16,   646,  -176,  -176,  -176,  -176,
      11,   -37,     9,   -11,  -176,    19,  -176,   858,  -176,  -176,
      69,  1390,  -176,   264,  -176,    66,  -176,   893,  1052,   711,
      43,  -176,  -176,  -176,  -176,     9,    38,   -18,  -176,  -176,
    -176,    58,   622,  -176,   893,  1390,  1390,   765,  -176,    59,
    1390,  -176,    86,  -176,  -176,  -176,  -176,  1176,  1176,  -176,
    -176,  1188,  -176,  -176,  1026,  -176,  1217,   129,   126,   130,
     159,   531,   163,   199,   180,   208,  1118,  -176,   186,   263,
    1217,  -176,   232,   202,   218,   194,   220,   217,   226,   248,
     251,     8,  -176,  -176,    81,  -176,  -176,  -176,   346,   428,
    -176,  -176,  -176,  -176,   240,  -176,  -176,  -176,  -176,    15,
     211,   234,  -176,    60,  -176,  -176,  -176,  -176,   212,     1,
    1217,     9,  -176,  -176,   622,  -176,  -176,  -176,   791,  -176,
    -176,  -176,  1217,   101,  -176,   237,  -176,   531,  1217,  -176,
    -176,  1026,  -176,    61,   112,   215,   241,   531,  1217,  1217,
    1217,   206,  1130,   244,  -176,  -176,  -176,   138,   284,  -176,
    -176,   285,   958,  1217,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  1217,  -176,  1217,  1217,  1217,
    1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,
    1217,  1217,  1217,  1217,  1217,  1217,  -176,  1217,  -176,   449,
    -176,  -176,   828,   723,  -176,    42,  -176,    48,  -176,  1329,
     286,  -176,  -176,  -176,  -176,  -176,  -176,    67,  -176,  -176,
    -176,    59,  1217,  -176,   239,  -176,  1239,    79,  -176,  1217,
     531,  -176,    70,   128,   136,   242,  1130,  -176,  -176,  -176,
    -176,  -176,   137,  -176,    -4,  -176,  -176,  -176,  -176,   232,
     232,   202,   202,   218,   218,   218,   218,   194,   194,   220,
     217,   226,   248,   251,   146,  -176,  -176,  -176,   262,   265,
    -176,   238,    48,  1303,   769,  -176,  -176,  -176,   552,  -176,
    -176,  -176,  -176,  -176,  -176,   531,   531,   531,  1217,   970,
    1217,  -176,  -176,  1217,  -176,  -176,  -176,  -176,   266,  -176,
     270,  -176,  -176,   256,  -176,  -176,   139,   531,   140,  -176,
    -176,  -176,  -176,   531,   268,  -176,   531,  -176,  -176,  -176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,  -176,   -58,  -176,   -88,    47,    49,     4,
      45,   135,   141,   142,   134,   143,  -176,   -57,   -60,  -176,
     -91,   -64,    44,     0,  -176,   287,  -176,   -27,  -176,  -176,
     288,   -59,   -35,  -176,   110,  -176,   300,   219,    20,   -15,
     -29,     3,  -176,   -54,  -176,   127,  -176,   197,   -84,   -46,
    -138,  -176,   -92,  -176,   155,    88,   243,  -175,  -176,  -176,
    -176,  -176,   337,  -176
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      25,   146,   147,   173,   140,    60,    39,   266,    43,   181,
      47,    41,   155,    66,    50,   187,   246,     2,   161,     1,
       1,     3,   206,    38,    76,     3,    48,    49,   151,   169,
     170,    52,   176,   172,    65,    25,   224,   231,   146,   147,
     134,   159,   227,    64,    24,   166,     1,   151,    76,    76,
      76,   225,   146,    76,   152,   236,   134,    69,   139,   174,
      63,    70,     1,     1,   165,    71,   322,    76,     3,     3,
       1,    80,    18,   243,   150,   253,     3,   173,    42,    24,
     173,    51,   232,    23,   233,   261,   244,   262,   263,   264,
     258,   319,   146,   147,   155,    80,    80,    80,   249,   161,
      80,   135,   274,   162,   146,   147,   240,   227,    44,   232,
      58,   233,    59,   308,    80,   303,   227,   304,   135,   276,
     277,   278,     3,   226,   234,    23,    23,   227,   241,   255,
     167,    76,   273,    23,   294,    74,   174,   231,   315,   309,
      75,   128,   235,   250,    76,   275,   256,   251,   233,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   295,   314,   301,
     332,   313,   135,   177,   227,   146,   147,   257,    80,   256,
     268,   233,   227,   320,   227,   227,   227,    56,   311,   302,
     323,    80,   227,   178,   146,   147,   316,   179,   188,   189,
     190,   146,    73,   183,   317,   321,    60,   344,   346,   210,
     211,   302,   136,   214,   215,   216,   217,    43,   283,   284,
     285,   286,   184,   333,   334,   335,   180,   336,   338,   157,
     182,   191,   139,   212,   213,   235,   165,   218,   219,   139,
     330,   207,   208,   209,   220,   345,   146,   147,   155,   328,
     185,   347,   221,   192,   349,   193,   139,   279,   280,   257,
     339,   281,   282,   287,   288,   146,   340,    81,    82,    83,
       2,    84,    85,   222,    86,   223,    72,    87,    88,   238,
     239,   252,   242,   259,   265,   260,   267,    89,   269,   270,
     307,    90,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   139,     4,    91,    92,   312,   326,   318,
     348,    93,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     324,    94,   343,   325,   341,    53,    95,    96,    97,    98,
     342,    99,   100,   101,   102,   103,   104,   105,   106,    81,
      82,    83,     2,    84,    85,   289,    86,   292,   153,    87,
      88,   310,   290,   158,   291,   149,   306,   293,   254,    89,
     245,   229,    62,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,    91,    92,     0,
       0,     0,     0,    93,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    94,     0,     0,     0,    53,   228,    96,
      97,    98,     0,    99,   100,   101,   102,   103,   104,   105,
     106,    81,    82,    83,     0,    84,    85,     0,    86,     0,
       0,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    81,    82,    83,    90,    84,    85,     0,    86,
       0,     0,    87,    88,     0,     0,     0,     0,     0,    91,
      92,     0,    89,     0,     0,    93,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,     0,     0,     0,    94,    93,     0,     0,    53,
     230,    96,    97,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,     0,     0,     0,    94,     0,     0,     0,
      53,   296,    96,    97,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,    81,    82,    83,     0,    84,    85,
       0,    86,     0,     0,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    81,   144,    83,    90,    84,
      85,     0,    86,     0,     0,    87,    88,     0,     0,     0,
       0,     0,    91,    92,     0,    89,     0,     0,    93,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    94,    93,
       0,     0,    53,     0,    96,    97,    98,     0,    99,   100,
     101,   102,   103,   104,   105,   106,     0,     0,     0,    94,
       0,     0,     0,   154,   331,    81,   144,    83,     0,    84,
      85,     0,    86,     0,     0,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    61,     0,     0,    90,
       1,     0,     2,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,    94,
       0,     0,     0,   154,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    23,    81,   144,    83,     0,    84,    85,
       0,    86,     0,     0,    87,    88,    81,   144,    83,     0,
      84,    85,     0,    86,    89,     0,    87,    88,    90,     0,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
      90,     0,    91,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
      93,     2,    81,   144,    83,     0,    84,    85,    94,    86,
       0,   145,    87,    88,     0,     0,     0,     0,     0,     0,
      94,     0,    89,   300,     0,     0,    90,     2,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,    93,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     4,     1,     0,     2,     0,    94,   160,     3,   329,
       0,     0,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,   248,     2,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    72,   232,   297,   233,     4,     2,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,    81,   144,    83,    53,    84,    85,     0,    86,     0,
       0,    87,    88,    81,   144,    83,     0,    84,    85,     0,
      86,    89,     0,    87,    88,    90,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,    90,     0,    91,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,    94,   271,     0,     0,    81,
     144,    83,     2,    84,    85,     0,    86,    94,   337,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,    90,     0,     0,   137,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     4,    91,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     4,    94,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
     138,    81,   144,    83,     0,    84,    85,     0,    86,     0,
       0,    87,    88,    81,   144,    83,     0,    84,    85,     0,
      86,    89,     0,    87,    88,    90,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,    90,     0,    91,
     186,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,    91,    92,     0,     0,     0,     0,    93,     0,    81,
     144,    83,     0,    84,    85,    94,    86,     0,     0,    87,
      88,    81,   144,    83,     0,    84,    85,    94,    86,    89,
       0,    87,    88,    90,     0,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,    90,     0,    91,     0,     0,
      81,   144,    83,    93,    84,    85,     0,    86,     0,    91,
      87,    88,     0,     0,     0,    93,     0,     0,     0,     0,
      89,     0,     0,   168,    90,     2,     0,     0,     0,     3,
       0,     0,     0,     0,     0,   171,     0,     0,    91,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     1,
       0,     2,     0,     0,     0,     3,     0,     0,     0,     4,
       0,     0,     0,     0,    94,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     4,   256,   297,   233,     2,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    23,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     4,
       2,   327,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   305,     2,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       0,    59,    59,    94,    58,    34,     3,   182,    23,   101,
      25,     4,    72,     4,     4,   106,   154,     6,    77,     4,
       4,    10,   110,     3,    51,    10,    26,    27,    46,    87,
      88,    31,    96,    91,    71,    35,    28,   129,    96,    96,
      55,    76,    46,    40,     0,    80,     4,    46,    75,    76,
      77,    43,   110,    80,    72,   139,    71,    68,    58,    94,
      40,    42,     4,     4,    79,    46,    70,    94,    10,    10,
       4,    51,    61,    72,    36,   167,    10,   168,    71,    35,
     171,    71,    67,    67,    69,   177,   150,   178,   179,   180,
     174,   266,   150,   150,   154,    75,    76,    77,   162,   158,
      80,    57,   193,    44,   162,   162,    46,    46,    42,    67,
      67,    69,    69,    46,    94,    67,    46,    69,    74,   207,
     208,   209,    10,    42,   139,    67,    67,    46,    68,    68,
      44,   158,   192,    67,   225,    47,   171,   229,    68,    72,
      71,    53,   139,    42,   171,   205,    67,    46,    69,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   227,   260,   233,
     308,   259,   128,    44,    46,   233,   233,   174,   158,    67,
      42,    69,    46,    46,    46,    46,    46,    32,   252,   235,
      44,   171,    46,    67,   252,   252,    68,    67,    12,    13,
      14,   259,    47,     4,    68,    68,   235,    68,    68,     7,
       8,   257,    57,    19,    20,    21,    22,   232,   214,   215,
     216,   217,    42,   315,   316,   317,    67,   318,   319,    74,
      67,    45,   232,    15,    16,   232,   251,    17,    18,   239,
     304,     9,    10,    11,    27,   337,   304,   304,   308,   303,
      42,   343,    26,    67,   346,    69,   256,   210,   211,   256,
     320,   212,   213,   218,   219,   323,   323,     3,     4,     5,
       6,     7,     8,    25,    10,    24,    36,    13,    14,    68,
      46,    44,    70,    68,    78,    44,    42,    23,     4,     4,
       4,    27,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   303,    40,    41,    42,    68,    70,    67,
      42,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      68,    67,    76,    68,    68,    71,    72,    73,    74,    75,
      70,    77,    78,    79,    80,    81,    82,    83,    84,     3,
       4,     5,     6,     7,     8,   220,    10,   223,    71,    13,
      14,   251,   221,    75,   222,    65,   239,   224,   171,    23,
     151,   128,    35,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,     3,     4,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,     3,     4,     5,    27,     7,     8,    -1,    10,
      -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    23,    -1,    -1,    47,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    67,    47,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,     3,     4,     5,    -1,     7,     8,
      -1,    10,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,     3,     4,     5,    27,     7,
       8,    -1,    10,    -1,    -1,    13,    14,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    23,    -1,    -1,    47,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    67,    47,
      -1,    -1,    71,    -1,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    71,    72,     3,     4,     5,    -1,     7,
       8,    -1,    10,    -1,    -1,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,     0,    -1,    -1,    27,
       4,    -1,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    67,
      -1,    -1,    -1,    71,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,     3,     4,     5,    -1,     7,     8,
      -1,    10,    -1,    -1,    13,    14,     3,     4,     5,    -1,
       7,     8,    -1,    10,    23,    -1,    13,    14,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      47,     6,     3,     4,     5,    -1,     7,     8,    67,    10,
      -1,    70,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    23,    70,    -1,    -1,    27,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    40,     4,    -1,     6,    -1,    67,    72,    10,    70,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,     6,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    36,    67,    68,    69,    40,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,     3,     4,     5,    71,     7,     8,    -1,    10,    -1,
      -1,    13,    14,     3,     4,     5,    -1,     7,     8,    -1,
      10,    23,    -1,    13,    14,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    67,    68,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,     4,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    40,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      68,     3,     4,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    13,    14,     3,     4,     5,    -1,     7,     8,    -1,
      10,    23,    -1,    13,    14,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,     3,
       4,     5,    -1,     7,     8,    67,    10,    -1,    -1,    13,
      14,     3,     4,     5,    -1,     7,     8,    67,    10,    23,
      -1,    13,    14,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    41,    -1,    -1,
       3,     4,     5,    47,     7,     8,    -1,    10,    -1,    41,
      13,    14,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    67,    27,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    40,    67,    68,    69,     6,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    67,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    40,
       6,    68,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,    10,    40,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    67,   107,   108,   111,   112,   113,   114,
     120,   123,   124,   125,   126,   146,   147,   148,   123,   126,
     127,     4,    71,   124,    42,   109,   110,   124,   108,   108,
       4,    71,   108,    71,   107,   108,   139,   140,    67,    69,
     125,     0,   147,   123,   126,    71,     4,   121,   122,    68,
      42,    46,    36,   139,   140,    71,   112,   115,   116,   117,
     123,     3,     4,     5,     7,     8,    10,    13,    14,    23,
      27,    41,    42,    47,    67,    72,    73,    74,    75,    77,
      78,    79,    80,    81,    82,    83,    84,    86,    87,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   105,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   124,   107,   139,     4,    68,   108,
     128,   129,   130,   131,     4,    70,    89,   102,   106,   121,
      36,    46,    72,   110,    71,   103,   135,   139,   115,   117,
      72,   116,    44,   118,   119,   124,   117,    44,    67,    89,
      89,    67,    89,   105,   117,   132,   106,    44,    67,    67,
      67,   137,    67,     4,    42,    42,    42,   105,    12,    13,
      14,    45,    67,    69,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   104,    91,     9,    10,    11,
       7,     8,    15,    16,    19,    20,    21,    22,    17,    18,
      27,    26,    25,    24,    28,    43,    42,    46,    72,   141,
      72,   137,    67,    69,   124,   126,   133,   134,    68,    46,
      46,    68,    70,    72,   106,   122,   135,   136,    72,   106,
      42,    46,    44,   137,   132,    68,    67,   126,   133,    68,
      44,   137,   105,   105,   105,    78,   142,    42,    42,     4,
       4,    68,    88,   103,   105,   103,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      97,    98,    99,   100,   105,   103,    72,    68,   128,   133,
      70,   106,   134,    67,    69,    66,   130,     4,    46,    72,
     119,   106,    68,    91,   137,    68,    68,    68,    67,   142,
      46,    68,    70,    44,    68,    68,    70,    68,   128,    70,
     106,    72,   135,   137,   137,   137,   105,    68,   105,   103,
     102,    68,    70,    76,    68,   137,    68,   137,    42,   137
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 65 "src/test_parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].string);;}
    break;

  case 31:
#line 112 "src/test_parser.y"
    { (yyval.expr) = new mult_expr((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));;}
    break;

  case 32:
#line 113 "src/test_parser.y"
    { (yyval.expr) = new div_expr((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));;}
    break;

  case 33:
#line 114 "src/test_parser.y"
    { (yyval.expr) = new mod_expr((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));;}
    break;

  case 35:
#line 119 "src/test_parser.y"
    { (yyval.expr) = new plus_expr((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));;}
    break;

  case 36:
#line 120 "src/test_parser.y"
    { (yyval.expr) = new minus_expr((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));;}
    break;


/* Line 1267 of yacc.c.  */
#line 2103 "src/test_parser.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



