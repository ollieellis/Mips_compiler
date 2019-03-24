/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "src/test_parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "test_parser.tab.hpp".  */
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
#line 1 "src/test_parser.y" /* yacc.c:355  */

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

#line 114 "src/test_parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_NUMBER = 258,
    T_IDENTIFIER = 259,
    T_STRING = 260,
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
#line 23 "src/test_parser.y" /* yacc.c:355  */

  nodePtr expr;
  double number;
  std::string *string;
	expr_list* exprlist;
	string_list* strlist;

#line 216 "src/test_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_TEST_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 233 "src/test_parser.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    77,    78,    79,    80,    84,    85,    86,
      87,    88,    89,    90,    91,    95,    96,   100,   101,   102,
     103,   104,   105,   109,   110,   111,   112,   113,   114,   118,
     119,   123,   124,   125,   126,   130,   131,   132,   136,   137,
     138,   142,   143,   144,   145,   146,   150,   151,   152,   156,
     157,   161,   162,   166,   167,   171,   172,   176,   177,   181,
     182,   186,   187,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   205,   206,   210,   214,   215,   219,
     220,   221,   222,   223,   224,   228,   229,   233,   234,   238,
     239,   240,   241,   242,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   259,   260,   261,   262,   265,   266,
     271,   275,   276,   277,   278,   279,   280,   281,   291,   292,
     296,   297,   301,   302,   303,   307,   308,   312,   313,   317,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   333,
     334,   335,   339,   340,   344,   345,   346,   347,   348,   349,
     353,   354,   355,   359,   360,   361,   362,   366,   367,   371,
     372,   376,   377,   381,   382,   383,   387,   388,   389,   390,
     394,   395,   396,   397,   398,   402,   403,   406,   407,   411,
     412,   413,   414
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NUMBER", "T_IDENTIFIER", "T_STRING",
  "T_PLUS", "T_MINUS", "T_DIVIDE", "T_STAR", "T_MOD", "T_POINT", "T_INCR",
  "T_DECR", "T_LSHIFT", "T_RSHIFT", "T_EQ", "T_NEQ", "T_GT", "T_GTE",
  "T_LT", "T_LTE", "T_NOT", "T_AND", "T_OR", "T_BWXOR", "T_BWAND",
  "T_BWOR", "T_BWNOT", "T_EQMULT", "T_EQDIV", "T_EQMOD", "T_EQPLUS",
  "T_EQMINUS", "T_EQLSHIFT", "T_EQRSHIFT", "T_ASSIGN", "T_EQEXPONENT",
  "T_EQBWOR", "T_EQBWAND", "T_TYPE_NAME", "T_SIZEOF", "T_SEMI", "T_QBEGIN",
  "T_QEND", "T_DOT", "T_COMM", "T_TYPEDEF", "T_EXTERN", "T_STATIC",
  "T_AUTO", "T_REGISTER", "T_CHAR", "T_SHORT", "T_INT", "T_LONG",
  "T_SIGNED", "T_UNSIGNED", "T_FLOAT", "T_DOUBLE", "T_VOLATILE", "T_VOID",
  "T_CONST", "T_ELL", "T_LBRACKET", "T_RBRACKET", "T_LSQBRACKET",
  "T_RSQBRACKET", "T_LCBRACKET", "T_RCBRACKET", "T_CASE", "T_DEFAULT",
  "T_IF", "T_ELSE", "T_SWITCH", "T_WHILE", "T_DO", "T_FOR", "T_GOTO",
  "T_CONTINUE", "T_BREAK", "T_RETURN", "$accept", "ROOT_NODE", "PRI_EXPR",
  "POSTFIX_EXPR", "ARG_EXPR_LIST", "UNARY_EXPR", "UNARY_OP", "CAST_EXPR",
  "MULTIPLICATIVE_EXPR", "ADDITIVE_EXPR", "SHFT_EXPR", "REL_EXPR",
  "EQ_EXPR", "AND_EXPR", "EXCL_OR_EXPR", "INCL_OR_EXPR", "LOGI_AND_EXPR",
  "LOGI_OR_EXPR", "COND_EXPR", "ASSIGN_EXPR", "ASSIGN_OP", "EXPR",
  "CONST_EXPR", "DECL", "DECL_SPECS", "INIT_DECLARATOR_LIST",
  "INIT_DECLARATOR", "STRGE_CLASS_SPEC", "TYPE_SPEC", "SPEC_QUAL_LIST",
  "TYPE_QUAL", "DECLARATOR", "DIREC_DECLARATOR", "PARAM_TYPE_LIST",
  "PARAM_LIST", "PARAM_DECL", "ID_LIST", "TYPE_NAME", "ABST_DECLARATOR",
  "DIR_ABST_DECLARATOR", "INIT", "INIT_LIST", "STMT", "LBL_STMT",
  "COMP_STMT", "DECL_LIST", "STMT_LIST", "EXPR_STMT", "SELEC_STMT",
  "ITER_STMT", "JMP_STMT", "TRANSLATION_UNIT", "EXT_DECL", "FUNC_DEF", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     335,   336
};
# endif

#define YYPACT_NINF -143

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-143)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     914,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,     9,
      14,  -143,    38,  1030,  1030,  1030,   937,   -45,   914,  -143,
    -143,   -29,  -143,  -143,    11,  -143,   607,  -143,  -143,  -143,
     217,  -143,    38,  -143,   937,   761,   480,  -143,  -143,  -143,
       9,   401,  -143,   937,  -143,    10,  -143,  -143,  -143,  -143,
     878,   878,  -143,  -143,  -143,   889,  -143,   738,  -143,   919,
      53,    24,    36,    39,   533,    59,    70,   117,   119,   824,
    -143,   143,  1064,   919,  -143,   155,   108,   169,   153,   170,
     141,   160,   167,   172,    55,  -143,  -143,    78,  -143,  -143,
    -143,   296,   375,  -143,  -143,  -143,  -143,   168,  -143,  -143,
    -143,  -143,    30,   131,   157,  -143,    -2,  -143,  -143,  -143,
    -143,   138,  -143,   401,  -143,  -143,  -143,   533,   919,  -143,
    -143,   738,  -143,    20,   273,    -5,   273,   146,   162,   533,
     919,   919,   919,   142,   835,   171,  -143,  -143,  -143,    79,
     212,  -143,  -143,   214,   697,   919,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,   919,  -143,   919,
     919,   919,   919,   919,   919,   919,   919,   919,   919,   919,
     919,   919,   919,   919,   919,   919,   919,   919,  -143,   919,
    -143,   454,  -143,  -143,   633,   559,  -143,  -143,    25,  -143,
    1006,   223,  -143,  -143,  -143,   -31,  -143,   173,  -143,  -143,
     960,  -143,  -143,   919,   533,  -143,    21,    22,    44,   176,
     835,  -143,  -143,  -143,  -143,  -143,   101,  -143,   -35,  -143,
    -143,  -143,  -143,   155,   155,   108,   108,   169,   169,   169,
     169,   153,   153,   170,   141,   160,   167,   172,    18,  -143,
    -143,  -143,   177,   179,  -143,   174,   983,   612,  -143,  -143,
    -143,    43,  -143,  -143,  -143,  -143,   533,   533,   533,   919,
     708,   919,  -143,  -143,   919,  -143,  -143,  -143,  -143,   181,
    -143,   180,  -143,  -143,   163,  -143,  -143,   103,   533,   104,
    -143,  -143,  -143,  -143,   533,   193,  -143,   533,  -143,  -143,
    -143
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   111,   103,    89,    90,    91,    92,    93,    95,    96,
      97,    98,   101,   102,    99,   100,   109,    94,   108,     0,
       0,   178,     0,    79,    81,    83,     0,   110,     2,   175,
     177,     0,     1,    77,     0,    85,    87,    80,    82,    84,
       0,   157,     0,   182,     0,     0,     0,   176,   112,    78,
       0,     0,   180,     0,     4,     3,     5,    25,    26,    24,
       0,     0,    28,    23,    27,     0,   161,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,    17,    29,     0,    31,    35,    38,    41,    46,    49,
      51,    53,    55,    57,    59,    61,    74,     0,   159,   144,
     145,     0,     0,   146,   147,   148,   149,    87,   158,   181,
     125,   117,   124,     0,   118,   120,     0,     3,   114,    29,
      76,     0,    86,     0,   139,    88,   179,     0,     0,    18,
      19,     0,    21,     0,   105,   127,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   172,   173,     0,
       0,    13,    14,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    63,    72,    73,    71,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   162,     0,
     155,     0,   154,   160,     0,     0,   122,   123,   129,   115,
       0,     0,   116,   113,   142,     0,   150,     0,     6,   104,
       0,   128,   106,     0,     0,   152,     0,     0,     0,     0,
       0,   170,   174,    12,    11,     9,     0,    15,     0,    62,
      33,    32,    34,    36,    37,    39,    40,    43,    45,    42,
      44,    47,    48,    50,    52,    54,    56,    58,     0,    75,
     156,   135,     0,     0,   131,     0,     0,     0,   119,   121,
     126,     0,   140,    22,    30,   151,     0,     0,     0,     0,
       0,     0,    10,     8,     0,   136,   130,   132,   137,     0,
     133,     0,   141,   143,   163,   165,   166,     0,     0,     0,
      16,    60,   138,   134,     0,     0,   168,     0,   164,   167,
     169
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,  -143,  -143,   -43,  -143,   -53,    17,    27,
      -1,    12,    66,    54,    65,    67,    64,  -143,   -42,   -10,
    -143,   -36,   -49,     7,     0,  -143,   203,  -143,   -59,    46,
     -55,   -13,  -143,   -44,  -143,    60,  -143,   123,   -96,  -143,
    -113,  -143,   -69,  -143,    57,   122,   154,  -142,  -143,  -143,
    -143,  -143,   234,  -143
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    80,    81,   226,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
     167,    97,   121,    41,    42,    34,    35,    23,    24,   135,
      25,    26,    27,   252,   114,   115,   116,   137,   253,   198,
     125,   205,    98,    99,   100,    44,   102,   103,   104,   105,
     106,    28,    29,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      22,   113,   220,   119,   120,   143,    31,    21,   134,    36,
     204,   189,   136,     1,    32,   261,   197,   129,   130,    45,
     138,    46,   132,    37,    38,    39,   119,   120,    22,   107,
     168,   133,   273,   193,     1,    21,    48,   107,   262,   211,
     119,   124,     1,   149,   201,   112,    54,   117,    56,    57,
      58,   108,    59,    49,   127,    60,    61,    50,   206,   210,
     108,   195,   274,   202,   189,    62,   189,   189,   189,    63,
     215,    64,   134,    19,   145,   134,   136,   134,   270,   136,
      33,   136,   186,    43,    65,   208,   266,   267,   140,   256,
     189,   257,   133,    52,   194,   133,   195,   139,   187,   196,
     141,   109,    19,   142,   216,   217,   218,    67,   108,   268,
     126,   123,   282,   124,   172,   173,   230,   231,   232,   228,
     188,   222,   193,   144,   189,   189,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   227,   265,   255,   271,   283,   189,
     189,   248,   119,   120,   150,   151,   152,   229,    53,   146,
     264,   147,   101,   169,   170,   171,   272,   182,   295,   297,
     119,   176,   177,   178,   179,   237,   238,   239,   240,   249,
     209,    31,   212,   174,   175,   183,   180,   181,   153,   233,
     234,   184,   241,   242,   112,   185,   199,   284,   285,   286,
     112,   235,   236,   200,    51,   203,   214,   154,   281,   155,
     112,   213,   279,   221,   119,   120,   223,   219,   224,   296,
      54,    55,    56,    57,    58,   298,    59,   260,   300,    60,
      61,   119,   291,   287,   289,   299,   294,   244,   263,    62,
     269,   277,   275,    63,   276,    64,   292,   293,   243,   245,
     247,   124,   246,   122,   207,   191,   112,     2,    65,    66,
     259,   290,    47,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,    67,     0,     0,     0,    40,    68,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    54,
      55,    56,    57,    58,     0,    59,     0,     0,    60,    61,
       0,     0,     0,     2,     0,     0,     0,     0,    62,     0,
       0,     0,    63,     0,    64,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     2,    65,    66,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     0,
      67,     0,     0,     0,    40,   190,    69,    70,    71,     0,
      72,    73,    74,    75,    76,    77,    78,    79,    54,    55,
      56,    57,    58,     0,    59,     0,     0,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
       0,    63,     0,    64,    54,   117,    56,    57,    58,     0,
      59,     0,     0,    60,    61,     0,    65,    66,     0,     0,
       0,     0,     0,    62,     0,     0,     0,    63,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,     0,    65,    40,   192,    69,    70,    71,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    54,    55,    56,
      57,    58,     0,    59,     0,    67,    60,    61,     0,   123,
       0,     0,     0,     0,     0,     0,    62,     0,     0,     0,
      63,     0,    64,    54,   117,    56,    57,    58,     0,    59,
       0,     0,    60,    61,     0,    65,    66,     0,     0,     0,
       0,     0,    62,     0,     0,     0,    63,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
       0,    65,    40,   250,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,    54,    55,    56,    57,
      58,     0,    59,     0,    67,    60,    61,   118,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,     0,    63,
       0,    64,    54,   117,    56,    57,    58,     0,    59,     0,
       0,    60,    61,     0,    65,    66,     0,     0,     0,     0,
       0,    62,     0,     0,     0,    63,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
      65,    40,     0,    69,    70,    71,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    54,   117,    56,    57,    58,
       0,    59,     0,    67,    60,    61,   254,     0,     0,     0,
       0,     0,     0,     0,    62,     0,     0,     1,    63,     0,
      64,     0,     0,    51,     0,     0,     0,     2,     0,     0,
       0,     0,     0,    65,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,     2,     0,    40,    67,     0,     0,   280,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,   194,   251,   195,
      54,   117,    56,    57,    58,     0,    59,     0,     0,    60,
      61,    54,   117,    56,    57,    58,     0,    59,     0,    62,
      60,    61,     0,    63,     0,    64,     0,     0,     0,     0,
      62,     0,     0,     0,    63,     0,    64,     0,    65,     0,
       0,    54,   117,    56,    57,    58,     0,    59,     0,    65,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    67,   225,     0,    63,   110,    64,     0,     0,     0,
       0,     0,    67,   288,     0,     0,     0,     0,     2,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     2,    67,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,     0,   111,    54,   117,    56,
      57,    58,     0,    59,     0,     0,    60,    61,    54,   117,
      56,    57,    58,     0,    59,     0,    62,    60,    61,     0,
      63,     0,    64,     0,     0,     0,     0,    62,     0,     0,
       0,    63,     0,    64,     0,    65,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
       0,    54,   117,    56,    57,    58,     0,    59,    67,     0,
      60,    61,    54,   117,    56,    57,    58,     0,    59,    67,
      62,    60,    61,     0,    63,     0,    64,     0,     0,     0,
       0,    62,     0,     0,     0,    63,     0,    64,     1,    65,
       0,     0,    54,   117,    56,    57,    58,     0,    59,     0,
      65,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,    62,   128,     0,     0,    63,     0,    64,     0,     0,
       0,     0,     0,   131,     2,     0,     0,     0,     0,     0,
      65,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     2,    19,     0,
       0,     0,     0,    67,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       2,     0,     0,     0,     0,    40,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     2,   210,   251,   195,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     2,     0,   278,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   258,
       2,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166
};

static const yytype_int16 yycheck[] =
{
       0,    45,   144,    46,    46,    74,    19,     0,    67,    22,
     123,    46,    67,     4,     0,    46,   112,    60,    61,    64,
      69,    66,    65,    23,    24,    25,    69,    69,    28,    42,
      83,    67,    67,   102,     4,    28,    65,    50,    69,   135,
      83,    51,     4,    79,    46,    45,     3,     4,     5,     6,
       7,    44,     9,    42,    44,    12,    13,    46,   127,    64,
      53,    66,    44,    65,    46,    22,    46,    46,    46,    26,
     139,    28,   131,    64,     4,   134,   131,   136,   220,   134,
      42,   136,    27,    26,    41,    65,    65,    65,    64,    64,
      46,    66,   128,    36,    64,   131,    66,    44,    43,   112,
      64,    44,    64,    64,   140,   141,   142,    64,   101,    65,
      53,    68,    69,   123,     6,     7,   169,   170,   171,   155,
      42,    42,   191,    64,    46,    46,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   154,   214,   195,    46,   261,    46,
      46,   187,   195,   195,    11,    12,    13,   167,    36,    42,
     213,    42,    40,     8,     9,    10,    65,    26,    65,    65,
     213,    18,    19,    20,    21,   176,   177,   178,   179,   189,
     134,   194,   136,    14,    15,    25,    16,    17,    45,   172,
     173,    24,   180,   181,   194,    23,    65,   266,   267,   268,
     200,   174,   175,    46,    36,    67,    44,    64,   257,    66,
     210,    65,   256,    42,   257,   257,     4,    75,     4,   288,
       3,     4,     5,     6,     7,   294,     9,     4,   297,    12,
      13,   274,   274,   269,   270,    42,    73,   183,    65,    22,
      64,    67,    65,    26,    65,    28,    65,    67,   182,   184,
     186,   261,   185,    50,   131,   101,   256,    40,    41,    42,
     200,   271,    28,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    12,    13,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    28,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    40,    41,    42,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    -1,    -1,    -1,    68,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,     3,     4,
       5,     6,     7,    -1,     9,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    28,     3,     4,     5,     6,     7,    -1,
       9,    -1,    -1,    12,    13,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    41,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    81,     3,     4,     5,
       6,     7,    -1,     9,    -1,    64,    12,    13,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    28,     3,     4,     5,     6,     7,    -1,     9,
      -1,    -1,    12,    13,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    41,    68,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,     3,     4,     5,     6,
       7,    -1,     9,    -1,    64,    12,    13,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    28,     3,     4,     5,     6,     7,    -1,     9,    -1,
      -1,    12,    13,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      41,    68,    -1,    70,    71,    72,    -1,    74,    75,    76,
      77,    78,    79,    80,    81,     3,     4,     5,     6,     7,
      -1,     9,    -1,    64,    12,    13,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,     4,    26,    -1,
      28,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    41,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    40,    -1,    68,    64,    -1,    -1,    67,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
       3,     4,     5,     6,     7,    -1,     9,    -1,    -1,    12,
      13,     3,     4,     5,     6,     7,    -1,     9,    -1,    22,
      12,    13,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    28,    -1,    41,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    -1,    41,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    64,    65,    -1,    26,     4,    28,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    40,    64,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    12,    13,     3,     4,
       5,     6,     7,    -1,     9,    -1,    22,    12,    13,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    28,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    64,    -1,
      12,    13,     3,     4,     5,     6,     7,    -1,     9,    64,
      22,    12,    13,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    28,     4,    41,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    -1,
      41,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    64,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    64,    40,    -1,    -1,    -1,    -1,    -1,
      41,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    40,    64,    -1,
      -1,    -1,    -1,    64,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      40,    -1,    -1,    -1,    -1,    68,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    40,    64,    65,    66,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    40,    -1,    65,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    40,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    64,
      83,   105,   106,   109,   110,   112,   113,   114,   133,   134,
     135,   113,     0,    42,   107,   108,   113,   106,   106,   106,
      68,   105,   106,   126,   127,    64,    66,   134,    65,    42,
      46,    36,   126,   127,     3,     4,     5,     6,     7,     9,
      12,    13,    22,    26,    28,    41,    42,    64,    69,    70,
      71,    72,    74,    75,    76,    77,    78,    79,    80,    81,
      84,    85,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   103,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   113,   105,   126,
       4,    65,   106,   115,   116,   117,   118,     4,    67,    87,
     100,   104,   108,    68,   101,   122,   126,    44,    64,    87,
      87,    64,    87,   103,   110,   111,   112,   119,   104,    44,
      64,    64,    64,   124,    64,     4,    42,    42,    42,   103,
      11,    12,    13,    45,    64,    66,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   102,    89,     8,
       9,    10,     6,     7,    14,    15,    18,    19,    20,    21,
      16,    17,    26,    25,    24,    23,    27,    43,    42,    46,
      69,   128,    69,   124,    64,    66,   113,   120,   121,    65,
      46,    46,    65,    67,   122,   123,   124,   119,    65,   111,
      64,   120,   111,    65,    44,   124,   103,   103,   103,    75,
     129,    42,    42,     4,     4,    65,    86,   101,   103,   101,
      89,    89,    89,    90,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    95,    96,    97,    98,   103,   101,
      69,    65,   115,   120,    67,   104,    64,    66,    63,   117,
       4,    46,    69,    65,    89,   124,    65,    65,    65,    64,
     129,    46,    65,    67,    44,    65,    65,    67,    65,   115,
      67,   104,    69,   122,   124,   124,   124,   103,    65,   103,
     101,   100,    65,    67,    73,    65,   124,    65,   124,    42,
     124
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    90,    90,    90,    91,    91,    91,    92,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   105,   105,   106,
     106,   106,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   111,   111,   112,   112,
     113,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   118,   118,   119,   119,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     122,   122,   123,   123,   124,   124,   124,   124,   124,   124,
     125,   125,   125,   126,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   130,   131,   131,   131,   131,
     132,   132,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   135
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     3,
       1,     3,     2,     2,     1,     1,     3,     1,     2,     1,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 73 "src/test_parser.y" /* yacc.c:1646  */
    { g_root=(yyvsp[0].expr); std::cerr<<"fact"<<do_main;}
#line 1711 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new identifier(*(yyvsp[0].string));}
#line 1717 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 78 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new constant((yyvsp[0].number));std::cerr<<(yyvsp[0].number);}
#line 1723 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new str_lit(*(yyvsp[0].string));}
#line 1729 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 80 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[-1].expr);}
#line 1735 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=(yyvsp[0].expr); }
#line 1741 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 85 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new array((yyvsp[-3].expr),(yyvsp[-1].expr)); }
#line 1747 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 86 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new function_name((yyvsp[-2].expr),NULL); }
#line 1753 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 87 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new function_name((yyvsp[-3].expr),(yyvsp[-1].exprlist)); }
#line 1759 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 88 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new member((yyvsp[-2].expr),*(yyvsp[0].string)); }
#line 1765 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 89 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new member((yyvsp[-2].expr),*(yyvsp[0].string)); }
#line 1771 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 90 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=new incr((yyvsp[-1].expr));}
#line 1777 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 91 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=new decr((yyvsp[-1].expr));}
#line 1783 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.exprlist)=new expr_list((yyvsp[0].expr));}
#line 1789 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.exprlist)=(yyvsp[-2].exprlist);(yyvsp[-2].exprlist)->push((yyvsp[0].expr));}
#line 1795 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 100 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1801 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 101 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=new incr((yyvsp[0].expr));}
#line 1807 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=new decr((yyvsp[0].expr));}
#line 1813 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 103 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=new unary_expr((yyvsp[-1].expr),(yyvsp[0].expr));}
#line 1819 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 104 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=new size_of(*(yyvsp[-1].string),(yyvsp[0].expr), "","");}
#line 1825 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 105 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr)=new size_of(*(yyvsp[-3].string),(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 1831 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 109 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new unary_op(*(yyvsp[0].string));}
#line 1837 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 110 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new unary_op(*(yyvsp[0].string)); }
#line 1843 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 111 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new unary_op(*(yyvsp[0].string)); }
#line 1849 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 112 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new unary_op(*(yyvsp[0].string)); }
#line 1855 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 113 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new unary_op(*(yyvsp[0].string));}
#line 1861 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 114 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new unary_op(*(yyvsp[0].string));}
#line 1867 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 118 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1873 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 119 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new cast_expr((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1879 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 123 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1885 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 124 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1891 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 125 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1897 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 126 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1903 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 130 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1909 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 131 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1915 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 132 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1921 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 136 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1927 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 137 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1933 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 138 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1939 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 142 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1945 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 143 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1951 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 144 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1957 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 145 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1963 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 146 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1969 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1975 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 151 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1981 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 152 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1987 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 156 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1993 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 157 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 1999 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 161 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2005 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 162 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 2011 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 166 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2017 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 167 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 2023 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 171 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2029 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 172 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 2035 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 176 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2041 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 177 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 2047 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 181 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2053 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 182 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new cond_expr((yyvsp[-4].expr),(yyvsp[-2].expr),(yyvsp[0].expr));}
#line 2059 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2065 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 2071 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 191 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2077 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 192 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2083 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 193 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2089 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 194 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2095 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 195 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2101 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 196 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2107 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 197 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2113 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 198 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2119 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 199 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2125 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 200 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2131 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 201 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.string)=(yyvsp[0].string);}
#line 2137 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 205 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new expr_list((yyvsp[0].expr));}
#line 2143 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 206 "src/test_parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].expr)->push((yyvsp[-1].string));(yyval.expr)=(yyvsp[-2].expr);}
#line 2149 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 210 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2155 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 214 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new decl_list((yyvsp[-1].expr));}
#line 2161 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 215 "src/test_parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].expr)->push((yyvsp[-1].expr));(yyval.expr)=(yyvsp[-2].expr);}
#line 2167 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 219 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2173 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 220 "src/test_parser.y" /* yacc.c:1646  */
    {}
#line 2179 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 221 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2185 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 223 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2191 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 228 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new decl_list((yyvsp[0].expr));}
#line 2197 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 229 "src/test_parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].expr)->push((yyvsp[0].expr));(yyval.expr)=(yyvsp[-2].expr);}
#line 2203 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 233 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2209 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 234 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new binary_expr((yyvsp[-2].expr),*(yyvsp[-1].string),(yyvsp[0].expr));}
#line 2215 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 238 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2221 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 239 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2227 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 240 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2233 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 241 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2239 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 242 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2245 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 246 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2251 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 247 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2257 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 248 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2263 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 249 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string));std::cerr<<*(yyvsp[0].string);}
#line 2269 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 250 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2275 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 251 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2281 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 252 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2287 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 253 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2293 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 254 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2299 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 255 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string)); }
#line 2305 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 259 "src/test_parser.y" /* yacc.c:1646  */
    {(yyvsp[-1].expr)->push((yyvsp[0].expr));(yyval.expr)=(yyvsp[-1].expr);}
#line 2311 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 260 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)= new decl_list((yyvsp[0].expr));}
#line 2317 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 261 "src/test_parser.y" /* yacc.c:1646  */
    {(yyvsp[-1].expr)->push((yyvsp[0].expr));(yyval.expr)=(yyvsp[-1].expr);}
#line 2323 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 262 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)= new decl_list((yyvsp[0].expr));}
#line 2329 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 265 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string));}
#line 2335 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 266 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_qual(*(yyvsp[0].string));}
#line 2341 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 271 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr); std::cerr<<"DECLARATOR->direc";}
#line 2347 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 275 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new identifier(*(yyvsp[0].string)); if(*(yyvsp[0].string)=="main"){std::cerr<<"fasds";do_main=true;}}
#line 2353 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 276 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-1].expr);}
#line 2359 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 277 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new d_declarator((yyvsp[-3].expr),(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 2365 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 278 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new d_declarator((yyvsp[-2].expr),NULL,*(yyvsp[-1].string),*(yyvsp[0].string));}
#line 2371 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 279 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new d_declarator((yyvsp[-3].expr),(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 2377 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 280 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new d_declarator((yyvsp[-3].expr),(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 2383 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 281 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new d_declarator((yyvsp[-2].expr),NULL,*(yyvsp[-1].string),*(yyvsp[0].string));}
#line 2389 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 291 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)= new para_t_list((yyvsp[0].expr));}
#line 2395 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 292 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)= new para_t_list((yyvsp[-2].expr),*(yyvsp[-1].string),*(yyvsp[0].string));}
#line 2401 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 296 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)= new expr_list((yyvsp[0].expr));}
#line 2407 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 297 "src/test_parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].expr)->push((yyvsp[-1].string));(yyval.expr)=(yyvsp[-2].expr);}
#line 2413 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 301 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new param_decl((yyvsp[-1].expr),(yyvsp[0].expr));}
#line 2419 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 302 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new param_decl((yyvsp[-1].expr),(yyvsp[0].expr));}
#line 2425 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 303 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2431 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 307 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new string_list((yyvsp[0].string));}
#line 2437 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 308 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-2].expr);(yyvsp[-2].expr)->push((yyvsp[0].string));}
#line 2443 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 312 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2449 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 313 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new type_name((yyvsp[-1].expr),(yyvsp[0].expr));}
#line 2455 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 317 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2461 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 321 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator(NULL,(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 2467 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 322 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator(NULL,NULL,*(yyvsp[-1].string),*(yyvsp[0].string));}
#line 2473 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 323 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator(NULL,(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 2479 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 324 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator((yyvsp[-2].expr),NULL,*(yyvsp[-1].string),*(yyvsp[0].string));}
#line 2485 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 325 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator((yyvsp[-3].expr),(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 2491 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 326 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator(NULL,NULL,*(yyvsp[-1].string),*(yyvsp[0].string));}
#line 2497 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 327 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator(NULL,(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 2503 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 328 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator((yyvsp[-2].expr),NULL,*(yyvsp[-1].string),*(yyvsp[0].string));}
#line 2509 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 329 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new dir_abst_declarator((yyvsp[-3].expr),(yyvsp[-1].expr),*(yyvsp[-2].string),*(yyvsp[0].string));}
#line 2515 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 333 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2521 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 334 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new init((yyvsp[-1].expr),*(yyvsp[0].string));}
#line 2527 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 335 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new init((yyvsp[-2].expr), *(yyvsp[-1].string));}
#line 2533 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 339 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new init_list((yyvsp[0].expr));}
#line 2539 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 340 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-2].expr);(yyvsp[-2].expr)->push((yyvsp[0].expr));}
#line 2545 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 344 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2551 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 345 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2557 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 346 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2563 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 347 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2569 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 348 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2575 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 349 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 2581 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 353 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new label_stmt(*(yyvsp[-2].string),(yyvsp[0].expr),NULL);}
#line 2587 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 354 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new label_stmt(*(yyvsp[-3].string),(yyvsp[-2].expr),(yyvsp[0].expr));}
#line 2593 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 355 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new label_stmt(*(yyvsp[-2].string),(yyvsp[0].expr),NULL);}
#line 2599 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 359 "src/test_parser.y" /* yacc.c:1646  */
    {	std::cerr<<"COMP1";(yyval.expr)= new comp_stmt(NULL,NULL);}
#line 2605 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 360 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"COMP2";(yyval.expr)= new comp_stmt((yyvsp[-1].expr),NULL);}
#line 2611 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 361 "src/test_parser.y" /* yacc.c:1646  */
    {	std::cerr<<"COMP3";(yyval.expr)= new comp_stmt((yyvsp[-1].expr),NULL);}
#line 2617 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 362 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"COMP4";(yyval.expr)= new comp_stmt((yyvsp[-2].expr),(yyvsp[-1].expr));}
#line 2623 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 366 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"DL1";(yyval.expr)= new decl_list((yyvsp[0].expr));}
#line 2629 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 367 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"DL2";(yyval.expr)=(yyvsp[-1].expr);(yyvsp[-1].expr)->push((yyvsp[0].expr));}
#line 2635 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 371 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"sl1";(yyval.expr)= new stmt_list((yyvsp[0].expr));}
#line 2641 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 372 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"s2";(yyval.expr)=(yyvsp[-1].expr);(yyvsp[-1].expr)->push((yyvsp[0].expr));}
#line 2647 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 376 "src/test_parser.y" /* yacc.c:1646  */
    {}
#line 2653 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 377 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-1].expr);}
#line 2659 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 381 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new ifelse_stmt((yyvsp[-2].expr), (yyvsp[0].expr), NULL);}
#line 2665 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 382 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new ifelse_stmt((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2671 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 383 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new switch_stmt((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2677 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 387 "src/test_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new while_stmt((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2683 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 388 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new do_stmt((yyvsp[-5].expr), (yyvsp[-2].expr));}
#line 2689 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 389 "src/test_parser.y" /* yacc.c:1646  */
    {}
#line 2695 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 390 "src/test_parser.y" /* yacc.c:1646  */
    {}
#line 2701 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 394 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new jump_stmt(*(yyvsp[-2].string),NULL);}
#line 2707 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 395 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new jump_stmt(*(yyvsp[-1].string),NULL);}
#line 2713 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 396 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new jump_stmt(*(yyvsp[-1].string),NULL);}
#line 2719 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 397 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"return empty";(yyval.expr)=new jump_stmt(*(yyvsp[-1].string),NULL);}
#line 2725 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 398 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"return full";(yyval.expr)=new jump_stmt(*(yyvsp[-2].string),(yyvsp[-1].expr));}
#line 2731 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 402 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2737 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 403 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=new translation_unit((yyvsp[-1].expr),(yyvsp[0].expr));}
#line 2743 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 406 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2749 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 407 "src/test_parser.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2755 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 411 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"FUNC1";(yyval.expr) = new function_definition((yyvsp[-3].expr), (yyvsp[-2].expr), (yyvsp[-1].expr), (yyvsp[0].expr), do_main);}
#line 2761 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 412 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"FUNC2";(yyval.expr) = new function_definition((yyvsp[-2].expr), (yyvsp[-1].expr), NULL, (yyvsp[0].expr),do_main);}
#line 2767 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 413 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"FUNC3";(yyval.expr) = new function_definition(NULL, (yyvsp[-2].expr), (yyvsp[-1].expr), (yyvsp[0].expr),do_main);}
#line 2773 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 414 "src/test_parser.y" /* yacc.c:1646  */
    {std::cerr<<"FUNC4";(yyval.expr) = new function_definition(NULL, (yyvsp[-1].expr), NULL, (yyvsp[0].expr),do_main);}
#line 2779 "src/test_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2783 "src/test_parser.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 417 "src/test_parser.y" /* yacc.c:1906  */


	nodePtr g_root;
	bool do_main;
	extern FILE *yyin;
	const nodePtr parseAST(FILE* src){
	  g_root=0;
		yyin=src;
		do_main=false;
		std::cerr<<"parse in";
	  yyparse();
		std::cerr<<"parse out "<<g_root;
	  return g_root;
	}
