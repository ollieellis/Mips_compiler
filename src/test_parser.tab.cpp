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




/* Copy the first part of user declarations.  */
#line 1 "src/test_parser.y"

  #include "ast.hpp"

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
  const nodePtr *expr; //is STMT needed?
  double number; //believe this means all numbers are doubles not sure if i need int??
  std::string *string;
}
/* Line 193 of yacc.c.  */
#line 288 "src/test_parser.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 301 "src/test_parser.tab.cpp"

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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNRULES -- Number of states.  */
#define YYNSTATES  267

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
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
     500,   504,   509,   511,   515,   517
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     136,     0,    -1,     4,    -1,     3,    -1,     5,    -1,    69,
     107,    70,    -1,    88,    -1,    89,    71,   107,    72,    -1,
      89,    69,    70,    -1,    89,    69,    90,    70,    -1,    89,
      47,     4,    -1,    89,    14,     4,    -1,    89,    15,    -1,
      89,    16,    -1,   105,    -1,    90,    48,   105,    -1,    89,
      -1,    15,    91,    -1,    16,    91,    -1,    92,    93,    -1,
      43,    91,    -1,    43,    69,   131,    70,    -1,    29,    -1,
      11,    -1,     7,    -1,     8,    -1,    49,    -1,    25,    -1,
      91,    -1,    69,   131,    70,    93,    -1,    93,    -1,    94,
      11,    93,    -1,    94,    10,    93,    -1,    94,    13,    93,
      -1,    94,    -1,    95,     7,    94,    -1,    95,     8,    94,
      -1,    95,    -1,    96,    17,    95,    -1,    96,    18,    95,
      -1,    96,    -1,    97,    23,    96,    -1,    97,    21,    96,
      -1,    97,    24,    96,    -1,    97,    22,    96,    -1,    97,
      -1,    98,    19,    97,    -1,    98,    20,    97,    -1,    98,
      -1,    99,    29,    98,    -1,    99,    -1,   100,    28,    99,
      -1,   100,    -1,   101,    30,   100,    -1,   101,    -1,   102,
      26,   101,    -1,   102,    -1,   103,    30,   102,    -1,   103,
      -1,   103,    45,   107,    46,   104,    -1,   104,    -1,    91,
     106,   105,    -1,    38,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,    41,
      -1,    39,    -1,    40,    -1,   105,    -1,   107,    48,   105,
      -1,   104,    -1,   110,    44,    -1,   110,   111,    44,    -1,
     113,    -1,   113,   110,    -1,   114,    -1,   114,   110,    -1,
     123,    -1,   123,   110,    -1,   112,    -1,   111,    48,   112,
      -1,   109,    -1,   109,    38,   134,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    64,    -1,    55,
      -1,    56,    -1,    57,    -1,    58,    -1,    61,    -1,    62,
      -1,    59,    -1,    60,    -1,   115,    -1,   120,    -1,    42,
      -1,   116,     4,    73,   117,    74,    -1,   116,    73,   117,
      74,    -1,   116,     4,    -1,    65,    -1,    66,    -1,   118,
      -1,   117,   118,    -1,   119,   117,    44,    -1,   114,   119,
      -1,   114,    -1,   123,   119,    -1,   123,    -1,   118,    -1,
     117,    48,   118,    -1,   109,    -1,    46,   108,    -1,   109,
      46,   108,    -1,    67,    73,   121,    74,    -1,    67,     4,
      73,   121,    74,    -1,    67,     4,    -1,   122,    -1,   121,
      48,   122,    -1,     4,    -1,     4,    38,   108,    -1,     6,
      -1,    63,    -1,   125,   124,    -1,   124,    -1,     4,    -1,
      69,   109,    70,    -1,   124,    71,   108,    72,    -1,   124,
      71,    72,    -1,   124,    69,   127,    70,    -1,   124,    69,
     130,    70,    -1,   124,    69,    70,    -1,    11,    -1,    11,
     126,    -1,    11,   125,    -1,    11,   126,   125,    -1,   123,
      -1,   126,   123,    -1,   128,    -1,   128,    48,    68,    -1,
     129,    -1,   128,    48,   129,    -1,   110,   109,    -1,   110,
     132,    -1,   110,    -1,     4,    -1,   130,    48,     4,    -1,
     119,    -1,   119,   132,    -1,   125,    -1,   133,    -1,   125,
     133,    -1,    69,   132,    70,    -1,    71,    72,    -1,    71,
     108,    72,    -1,   133,    71,    72,    -1,   133,    71,   108,
      72,    -1,    69,    70,    -1,    69,   127,    70,    -1,   133,
      69,    70,    -1,   133,    69,   127,    70,    -1,   105,    -1,
      73,   135,    74,    -1,    73,   135,    48,    74,    -1,   134,
      -1,   135,    48,   134,    -1,   109,    -1,   136,   109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    51,    55,    56,    57,    58,
      59,    60,    61,    62,    66,    67,    71,    72,    73,    74,
      75,    76,    80,    81,    82,    83,    84,    85,    89,    90,
      94,    95,    96,    97,   101,   102,   103,   107,   108,   109,
     113,   114,   115,   116,   117,   121,   122,   123,   127,   128,
     132,   133,   137,   138,   142,   143,   147,   148,   152,   153,
     157,   158,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   176,   177,   181,   185,   186,   190,   191,
     192,   193,   194,   195,   199,   200,   204,   205,   209,   210,
     211,   212,   213,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   232,   233,   234,   238,   239,
     243,   244,   248,   252,   253,   254,   255,   259,   260,   264,
     265,   266,   270,   271,   272,   276,   277,   281,   282,   286,
     287,   291,   292,   296,   297,   298,   299,   300,   301,   302,
     306,   307,   308,   309,   313,   314,   319,   320,   324,   325,
     329,   330,   331,   335,   336,   340,   341,   345,   346,   347,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   363,
     364,   365,   369,   370,   432,   433
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NUMBER", "T_IDENTIFIER", "T_STRING",
  "T_CONST", "T_PLUS", "T_MINUS", "T_MULT", "T_DIV", "T_STAR",
  "T_EXPONENT", "T_MOD", "T_POINT", "T_INCR", "T_DECR", "T_LSHIFT",
  "T_RSHIFT", "T_EQ", "T_NEQ", "T_GT", "T_GTE", "T_LT", "T_LTE", "T_NOT",
  "T_AND", "T_OR", "T_BWXOR", "T_BWAND", "T_BWOR", "T_EQMULT", "T_EQDIV",
  "T_EQMOD", "T_EQPLUS", "T_EQMINUS", "T_EQLSHIFT", "T_EQRSHIFT",
  "T_ASSIGN", "T_EQEXPONENT", "T_EQBWOR", "T_EQBWAND", "T_TYPE_NAME",
  "T_SIZEOF", "T_SEMI", "T_QBEGIN", "T_QEND", "T_DOT", "T_COMM", "T_TILDE",
  "T_TYPEDEF", "T_EXTERN", "T_STATIC", "T_AUTO", "T_REGISTER", "T_CHAR",
  "T_SHORT", "T_INT", "T_LONG", "T_SIGNED", "T_UNSIGNED", "T_FLOAT",
  "T_DOUBLE", "T_VOLATILE", "T_VOID", "T_STRUCT", "T_UNION", "T_ENUM",
  "T_ELL", "T_LBRACKET", "T_RBRACKET", "T_LSQBRACKET", "T_RSQBRACKET",
  "T_LCBRACKET", "T_RCBRACKET", "T_CASE", "T_DEFAULT", "T_IF", "T_ELSE",
  "T_SWITCH", "T_WHILE", "T_DO", "T_FOR", "T_GOTO", "T_CONTINUE",
  "T_BREAK", "T_RETURN", "$accept", "PRI_EXPR", "POSTFIX_EXPR",
  "ARG_EXPR_LIST", "UNARY_EXPR", "UNARY_OP", "CAST_EXPR",
  "MULTIPLICATIVE_EXPR", "ADDITIVE_EXPR", "SHFT_EXPR", "REL_EXPR",
  "EQ_EXPR", "AND_EXPR", "EXCL_OR_EXPR", "INCL_OR_EXPR", "LOGI_AND_EXPR",
  "LOGI_OR_EXPR", "COND_EXPR", "ASSIGN_EXPR", "ASSIGN_OP", "EXPR",
  "CONST_EXPR", "DECL", "DECL_SPECS", "INIT_DECL_LIST", "INIT_DECL",
  "STRGE_CLASS_SPEC", "TYPE_SPEC", "STRUCT_OR_UNION_SPEC",
  "STRUCT_OR_UNION", "STRUCT_DECL_LIST", "STRUCT_DECL", "SPEC_QUAL_LIST",
  "ENUM_SPEC", "ENUM_LIST", "ENUM", "TYPE_QUAL", "DIREC_DECL", "POINTER",
  "TYPE_QUAL_LIST", "PARAM_TYPE_LIST", "PARAM_LIST", "PARAM_DECL",
  "ID_LIST", "TYPE_NAME", "ABST_DECL", "DIR_ABST_DECL", "INIT",
  "INIT_LIST", "ROOT_NODE", 0
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
     335,   336,   337,   338,   339,   340,   341
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   119,   119,   117,   117,   118,
     118,   118,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   109,   109,   124,   124,   124,   124,   124,   124,   124,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   129,   130,   130,   131,   131,   132,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     134,   134,   135,   135,   136,   136
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
       3,     4,     1,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   129,   140,   104,    88,    89,    90,    91,    92,
      94,    95,    96,    97,   100,   101,    98,    99,   130,    93,
     108,   109,     0,     0,   174,     0,    78,    80,   102,     0,
     103,    82,   132,     0,     0,   144,   142,   141,   124,     0,
       0,    76,    86,     0,    84,    79,    81,   107,     0,    83,
       0,     0,   131,     1,   175,   145,   143,     0,   127,     0,
     125,   134,     0,    77,     0,     0,     0,   119,    80,     0,
     110,     0,    82,   153,   139,   152,     0,   146,   148,     0,
       3,     2,     4,    24,    25,    23,     0,     0,    27,    22,
       0,    26,     0,   136,     6,    16,    28,     0,    30,    34,
      37,    40,    45,    48,    50,    52,    54,    56,    58,    75,
       0,     0,     0,     0,   122,     0,    28,    60,   169,    87,
      85,     0,   120,     0,   113,     0,   106,   111,     0,   115,
       0,     0,   150,   157,   151,   158,   137,     0,     0,   138,
       0,    17,    18,     0,    20,    73,     0,   114,   155,   116,
       0,     0,    12,    13,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   123,   128,
     126,   172,     0,    63,    64,    65,    66,    67,    68,    69,
      62,    71,    72,    70,     0,   105,   121,   118,   112,   165,
     152,     0,     0,   161,     0,   159,     0,     0,   147,   149,
     154,     0,     0,     5,     0,   157,   156,     0,    11,    10,
       8,     0,    14,     0,    32,    31,    33,    35,    36,    38,
      39,    42,    44,    41,    43,    46,    47,    49,    51,    53,
      55,    57,     0,     0,   170,    61,    86,   166,   160,   162,
     167,     0,   163,     0,    21,    74,    29,     0,     9,     7,
       0,   171,   173,   168,   164,    15,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    94,    95,   221,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   117,   145,   194,
     146,   110,    67,    25,    43,    44,    26,    27,    28,    29,
      69,    70,    71,    30,    59,    60,    31,    32,    33,    37,
     201,    77,    78,    79,   150,   134,   135,   119,   182,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -129
static const yytype_int16 yypact[] =
{
     919,  -129,  -129,    11,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,     6,   919,  -129,   829,  1083,  1083,  -129,     9,
    -129,  1083,    -8,    20,   357,  -129,  -129,    11,   -52,    55,
       5,  -129,    67,     7,  -129,  -129,  -129,    44,   893,  -129,
     685,   424,    -8,  -129,  -129,  -129,  -129,    55,    92,   -34,
    -129,  -129,   333,  -129,   919,   893,   753,    34,  1020,   235,
    -129,   893,  1046,  -129,  -129,   574,    79,    45,  -129,   -16,
    -129,  -129,  -129,  -129,  -129,  -129,   768,   768,  -129,  -129,
     783,  -129,   659,  -129,  -129,   160,  -129,   753,  -129,   113,
     106,    25,   156,   120,   121,   126,   133,   130,    22,  -129,
      97,   -10,   753,    55,  -129,   333,   220,  -129,  -129,  -129,
    -129,   265,  -129,   753,  -129,   893,  -129,  -129,   803,  -129,
     480,   439,  -129,    16,  -129,    39,  -129,   983,   167,  -129,
     753,  -129,  -129,   659,  -129,  -129,    42,   329,    35,   329,
     103,   177,  -129,  -129,   178,   643,   753,  -129,   753,   753,
     753,   753,   753,   753,   753,   753,   753,   753,   753,   753,
     753,   753,   753,   753,   753,   753,   753,  -129,  -129,  -129,
    -129,  -129,    -4,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,   753,  -129,  -129,  -129,  -129,  -129,
     510,   118,   123,  -129,   111,    39,   957,   454,  -129,  -129,
    -129,   124,   753,  -129,   542,    62,  -129,   753,  -129,  -129,
    -129,    59,  -129,   -25,  -129,  -129,  -129,   113,   113,   106,
     106,    25,    25,    25,    25,   156,   156,   120,   121,   126,
     133,   130,    90,   201,  -129,  -129,   -20,  -129,  -129,  -129,
    -129,   129,  -129,   131,  -129,  -129,  -129,   753,  -129,  -129,
     753,  -129,  -129,  -129,  -129,  -129,  -129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,  -129,  -129,   -57,  -129,   -58,   -15,   -21,    24,
      -2,    30,    41,    46,    48,    21,  -129,   -50,   -59,  -129,
    -128,   -55,     2,   -19,  -129,   151,  -129,    93,  -129,  -129,
      13,     0,   -27,  -129,   163,   110,    23,   -24,    -3,  -129,
     -46,  -129,    87,  -129,    82,  -111,  -118,  -109,  -129,  -129
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -151
static const yytype_int16 yytable[] =
{
      36,   109,    24,   118,    76,   116,   181,    45,    46,    52,
      38,   122,    49,    47,   113,   205,   109,     2,    62,   202,
       1,    57,     3,   212,     1,    40,    35,    42,   223,   141,
     142,    75,   138,   144,    56,   116,    54,   216,   113,   157,
     114,   124,   163,   164,   243,   129,     3,   259,   242,    46,
    -150,    63,   175,    49,   139,    64,   118,   179,   116,    58,
      55,    50,   109,    51,   178,   148,    42,   176,   196,   127,
     244,    72,   133,   109,    18,    61,   204,   132,   121,    39,
     123,   109,    48,   116,   128,   130,   116,   131,    72,    23,
     212,    72,    72,   137,    72,    72,   222,   205,   116,   116,
     224,   225,   226,   202,   214,    62,   131,   257,   206,    52,
     207,   200,   213,   161,   162,   149,   148,    65,    75,   116,
     124,   127,   129,   158,   159,   197,   160,   133,   127,   258,
     112,   214,    40,   131,   262,   245,   260,   116,   212,   169,
     170,    68,   229,   230,    72,   215,   227,   228,    72,   136,
     171,    72,   253,   255,   172,   116,   174,   109,    68,   256,
     251,    68,    68,   173,    68,    68,   149,   235,   236,   177,
     149,   210,   149,   217,   151,   152,   153,   165,   166,   167,
     168,   218,   219,   249,   118,   147,   116,    75,   247,   231,
     232,   233,   234,   248,   254,    75,   241,   133,   265,   263,
     116,   237,   246,   264,    80,    81,    82,   154,    83,    84,
     266,   215,    85,   238,    68,   120,    86,    87,    68,   239,
     111,    68,   240,   180,   209,   211,    88,     0,     0,   155,
      89,   156,     0,     0,     0,     0,   147,     0,     0,     1,
     147,     2,   147,     0,    90,     0,     3,     0,     0,     0,
      91,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,     0,     0,     0,     0,     0,     0,     0,     1,
      92,     2,     0,     0,   115,   261,     3,     4,     0,     0,
       0,    66,     0,   125,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    23,     0,     0,     4,     0,   126,
       0,    66,     0,   125,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    23,     2,    80,    81,    82,   195,
      83,    84,     0,     0,    85,     0,     0,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,    53,    88,     0,
       0,     1,    89,     2,     0,     0,     0,     0,     3,     0,
       0,     4,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,    91,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     4,
       0,     0,    92,     0,     0,     0,   115,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    80,    81,    82,
       0,    83,    84,     0,     0,    85,     0,     0,     0,    86,
      87,     0,    80,    81,    82,     0,    83,    84,     0,    88,
      85,     0,     0,    89,    86,    87,     0,    80,    81,    82,
       0,    83,    84,     0,    88,    85,     0,    90,    89,    86,
      87,     0,     0,    91,     0,     0,     0,     0,     0,    88,
       0,     0,    90,    89,     1,     0,     2,     0,    91,     0,
       0,     3,     0,    92,     0,     0,    93,    90,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    92,     0,
       0,   203,     0,     0,     1,     0,     2,     0,     0,     0,
       0,     3,     4,    92,     0,     0,   252,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     2,   130,
     199,   131,     4,     3,    41,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     1,   130,
       2,   131,     0,     0,     4,     3,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,   214,   199,   131,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,   130,     0,   131,    80,    81,    82,     0,
      83,    84,     0,     0,    85,     0,     0,     0,    86,    87,
       0,     0,    80,    81,    82,     2,    83,    84,    88,     0,
      85,     0,    89,     0,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,    90,     0,    89,    73,
       0,     2,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     4,    90,     0,     0,     0,     0,     0,    91,     0,
       0,     0,    92,   220,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     4,    92,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,    74,    80,    81,    82,     0,
      83,    84,     0,     0,    85,     0,     0,     0,    86,    87,
       0,    80,    81,    82,     0,    83,    84,     0,    88,    85,
       0,     0,    89,    86,    87,     0,    80,    81,    82,     0,
      83,    84,     0,    88,    85,     0,    90,    89,    86,    87,
       0,     0,    91,     0,     0,     0,     0,     1,    88,     2,
       0,    90,    89,     0,     3,     0,     0,    91,     0,     0,
       0,     0,    92,     0,     0,     0,    90,     0,     0,     0,
       0,     0,    91,     1,     0,     2,     0,   140,     0,     0,
       3,     0,     0,     0,     0,     4,     0,   198,     0,    66,
       0,   125,   143,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     4,    23,    41,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     1,    23,     2,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     4,     0,     0,     0,    66,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     4,    23,     2,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    23,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     4,     2,   250,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   208,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,  -114,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     4,     2,
       0,     0,  -116,     0,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22
};

static const yytype_int16 yycheck[] =
{
       3,    51,     0,    62,    50,    62,   115,    26,    27,    33,
       4,    66,    31,     4,    48,   133,    66,     6,    38,   130,
       4,    73,    11,    48,     4,    23,     3,    25,   156,    86,
      87,    50,    48,    90,    37,    92,    34,   148,    48,    97,
      74,    68,    17,    18,    48,    72,    11,    72,   176,    68,
      70,    44,    30,    72,    70,    48,   115,   112,   115,     4,
      37,    69,   112,    71,    74,    92,    64,    45,   123,    69,
      74,    48,    75,   123,    63,    70,   131,    75,    65,    73,
      46,   131,    73,   140,    71,    69,   143,    71,    65,    69,
      48,    68,    69,    48,    71,    72,   155,   215,   155,   156,
     158,   159,   160,   214,    69,    38,    71,    48,    69,   133,
      71,   130,    70,     7,     8,    92,   143,    73,   137,   176,
     147,   121,   149,    10,    11,   125,    13,   130,   128,    70,
      38,    69,   130,    71,   243,   194,    46,   194,    48,    19,
      20,    48,   163,   164,   121,   148,   161,   162,   125,    70,
      29,   128,   207,   212,    28,   212,    26,   207,    65,   217,
     206,    68,    69,    30,    71,    72,   143,   169,   170,    72,
     147,     4,   149,    70,    14,    15,    16,    21,    22,    23,
      24,     4,     4,    72,   243,    92,   243,   206,    70,   165,
     166,   167,   168,    70,    70,   214,   175,   200,   257,    70,
     257,   171,   200,    72,     3,     4,     5,    47,     7,     8,
     260,   214,    11,   172,   121,    64,    15,    16,   125,   173,
      57,   128,   174,   113,   137,   143,    25,    -1,    -1,    69,
      29,    71,    -1,    -1,    -1,    -1,   143,    -1,    -1,     4,
     147,     6,   149,    -1,    43,    -1,    11,    -1,    -1,    -1,
      49,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      69,     6,    -1,    -1,    73,    74,    11,    42,    -1,    -1,
      -1,    46,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    -1,    -1,    42,    -1,    74,
      -1,    46,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,     6,     3,     4,     5,    74,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    25,    -1,
      -1,     4,    29,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    42,
      -1,    -1,    69,    -1,    -1,    -1,    73,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,     3,     4,     5,
      -1,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,
      16,    -1,     3,     4,     5,    -1,     7,     8,    -1,    25,
      11,    -1,    -1,    29,    15,    16,    -1,     3,     4,     5,
      -1,     7,     8,    -1,    25,    11,    -1,    43,    29,    15,
      16,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    43,    29,     4,    -1,     6,    -1,    49,    -1,
      -1,    11,    -1,    69,    -1,    -1,    72,    43,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    42,    69,    -1,    -1,    72,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     6,    69,
      70,    71,    42,    11,    44,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     4,    69,
       6,    71,    -1,    -1,    42,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    71,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    -1,     3,     4,     5,     6,     7,     8,    25,    -1,
      11,    -1,    29,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    43,    -1,    29,     4,
      -1,     6,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    69,    70,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    42,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    70,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,     3,     4,     5,    -1,     7,     8,    -1,    25,    11,
      -1,    -1,    29,    15,    16,    -1,     3,     4,     5,    -1,
       7,     8,    -1,    25,    11,    -1,    43,    29,    15,    16,
      -1,    -1,    49,    -1,    -1,    -1,    -1,     4,    25,     6,
      -1,    43,    29,    -1,    11,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    49,     4,    -1,     6,    -1,    69,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    48,    69,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    42,    69,    44,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     4,    69,     6,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    42,    69,     6,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    42,     6,    70,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    42,     6,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,    11,    42,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    69,   109,   110,   113,   114,   115,   116,
     120,   123,   124,   125,   136,   123,   125,   126,     4,    73,
     109,    44,   109,   111,   112,   110,   110,     4,    73,   110,
      69,    71,   124,     0,   109,   123,   125,    73,     4,   121,
     122,    70,    38,    44,    48,    73,    46,   109,   114,   117,
     118,   119,   123,     4,    70,   110,   127,   128,   129,   130,
       3,     4,     5,     7,     8,    11,    15,    16,    25,    29,
      43,    49,    69,    72,    88,    89,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     108,   121,    38,    48,    74,    73,    91,   104,   105,   134,
     112,   117,   108,    46,   119,    48,    74,   118,   117,   119,
      69,    71,   109,   125,   132,   133,    70,    48,    48,    70,
      69,    91,    91,    69,    91,   105,   107,   114,   119,   123,
     131,    14,    15,    16,    47,    69,    71,    93,    10,    11,
      13,     7,     8,    17,    18,    21,    22,    23,    24,    19,
      20,    29,    28,    30,    26,    30,    45,    72,    74,   108,
     122,   134,   135,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   106,    74,   108,   118,    44,    70,
     110,   127,   132,    72,   108,   133,    69,    71,    68,   129,
       4,   131,    48,    70,    69,   125,   132,    70,     4,     4,
      70,    90,   105,   107,    93,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    96,    97,    97,    98,    99,   100,
     101,   102,   107,    48,    74,   105,   109,    70,    70,    72,
      70,   127,    72,   108,    70,   105,    93,    48,    70,    72,
      46,    74,   134,    70,    72,   105,   104
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
      
/* Line 1267 of yacc.c.  */
#line 1956 "src/test_parser.tab.cpp"
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



