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
#line 2 "includes/parse.y" /* yacc.c:339  */


    #include "includes/ast.h"
    #include <iostream>
    #include <string>
    #include <stack>

	int yylex (void);
	extern char *yytext;
    extern int yylineno;
	void yyerror (const char *);


	PoolOfNodes& pool = PoolOfNodes::getInstance();

       

    void yyerror (const char *s);

#line 86 "parse.tab.c" /* yacc.c:339  */

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
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NAME = 310,
    NEWLINE = 311,
    NOT = 312,
    NOTEQUAL = 313,
    NUMBER = 314,
    OR = 315,
    PASS = 316,
    PERCENT = 317,
    PERCENTEQUAL = 318,
    PLUS = 319,
    PLUSEQUAL = 320,
    PRINT = 321,
    RAISE = 322,
    RBRACE = 323,
    RETURN = 324,
    RIGHTSHIFT = 325,
    RIGHTSHIFTEQUAL = 326,
    RPAR = 327,
    RSQB = 328,
    SEMI = 329,
    SLASH = 330,
    SLASHEQUAL = 331,
    STAR = 332,
    STAREQUAL = 333,
    STRING = 334,
    TILDE = 335,
    TRY = 336,
    VBAREQUAL = 337,
    WHILE = 338,
    WITH = 339,
    YIELD = 340,
    INT = 341,
    FLOAT = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "includes/parse.y" /* yacc.c:355  */

    Node* node;
    int intNumber;
    float fltNumber;
    char op;
    char* str;


#line 223 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 254 "parse.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   921

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  313
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  477

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    63,    69,    74,    85,    86,    89,    90,
      93,    94,    97,    98,   101,   102,   105,   113,   114,   117,
     118,   121,   122,   125,   126,   129,   132,   133,   136,   137,
     140,   141,   144,   145,   148,   149,   152,   153,   156,   157,
     160,   161,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   175,   245,   264,   265,   268,   272,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   289,
     300,   303,   304,   307,   308,   311,   312,   315,   316,   319,
     322,   325,   326,   327,   328,   329,   332,   335,   338,   343,
     350,   353,   354,   357,   358,   361,   362,   365,   366,   369,
     372,   375,   376,   379,   380,   381,   384,   385,   388,   389,
     392,   393,   396,   397,   400,   401,   404,   405,   408,   411,
     412,   415,   416,   419,   420,   423,   424,   425,   426,   427,
     428,   429,   430,   433,   443,   455,   459,   462,   463,   466,
     467,   470,   471,   474,   475,   478,   479,   482,   483,   486,
     489,   490,   493,   494,   497,   498,   501,   502,   505,   506,
     509,   510,   516,   521,   529,   530,   533,   534,   537,   538,
     541,   542,   545,   546,   549,   550,   553,   554,   557,   558,
     561,   562,   565,   566,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   623,   624,   627,   628,   631,
     632,   635,   639,   642,   643,   646,   652,   674,   675,   678,
     679,   715,   716,   717,   718,   721,   742,   745,   746,   747,
     750,   758,   771,   772,   775,   776,   777,   778,   779,   785,
     790,   795,   798,   799,   802,   803,   806,   807,   810,   811,
     814,   815,   818,   819,   822,   823,   826,   827,   830,   841,
     842,   845,   846,   849,   850,   853,   854,   855,   858,   859,
     862,   863,   866,   867,   870,   871,   874,   875,   878,   879,
     882,   883,   886,   887,   890,   891,   894,   895,   898,   899,
     902,   903,   906,   909,   910,   913,   914,   917,   918,   921,
     922,   923,   926,   927,   930,   931,   934,   935,   938,   939,
     942,   943,   946,   947,   950,   951,   954,   955,   958,   959,
     962,   963,   966,   967
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL",
  "NUMBER", "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL",
  "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL",
  "RPAR", "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL",
  "STRING", "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "INT",
  "FLOAT", "$accept", "start", "file_input", "pick_NEWLINE_stmt",
  "star_NEWLINE_stmt", "decorator", "opt_arglist", "decorators",
  "decorated", "funcdef", "parameters", "varargslist", "opt_EQUAL_test",
  "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME", "pick_STAR_DOUBLESTAR",
  "opt_COMMA", "fpdef", "fplist", "star_fpdef_notest", "stmt",
  "simple_stmt", "star_SEMI_small_stmt", "small_stmt", "expr_stmt",
  "pick_yield_expr_testlist", "star_EQUAL", "augassign", "print_stmt",
  "star_COMMA_test", "opt_test", "plus_COMMA_test", "opt_test_2",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "yield_stmt", "raise_stmt", "opt_COMMA_test",
  "opt_test_3", "import_stmt", "import_name", "import_from",
  "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -272

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-272)))

#define YYTABLE_NINF -260

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -272,   126,  -272,   353,  -272,   752,    -6,   752,  -272,    84,
    -272,    86,   834,  -272,   834,   834,  -272,    89,   752,    -6,
     140,   752,   667,   752,  -272,  -272,  -272,   804,  -272,  -272,
     124,   752,   752,  -272,  -272,   149,   752,   752,   752,  -272,
    -272,  -272,  -272,    38,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,    -4,   160,  -272,   296,   156,   159,   168,    -9,
     -13,    43,  -272,   834,  -272,  -272,    95,  -272,    75,  -272,
    -272,   161,  -272,    21,  -272,    94,    15,   131,   156,  -272,
      33,   142,   145,    13,  -272,   175,  -272,   176,    41,   752,
     178,    16,    87,   127,  -272,   163,  -272,   128,  -272,  -272,
     164,   134,  -272,  -272,   752,  -272,  -272,   183,  -272,    28,
     187,  -272,   206,  -272,  -272,  -272,  -272,    50,   197,   804,
     804,  -272,   804,  -272,  -272,  -272,  -272,  -272,   165,  -272,
    -272,   174,  -272,   834,   834,   834,   834,  -272,  -272,   834,
    -272,  -272,   834,  -272,  -272,  -272,  -272,   834,  -272,   110,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   191,   667,   752,   162,   152,  -272,  -272,
     752,    28,   752,   153,   214,   219,   752,   752,     4,   189,
     216,   225,    28,    -6,   188,  -272,   752,   190,     3,  -272,
     193,  -272,   212,   752,   834,   235,  -272,  -272,  -272,   235,
    -272,  -272,   834,   235,  -272,  -272,   236,   235,   752,  -272,
     210,  -272,    68,    28,   101,   834,  -272,   608,   752,    49,
     160,  -272,  -272,  -272,   156,   159,   168,    -9,   -13,    43,
    -272,   199,   834,   152,   714,  -272,   667,  -272,  -272,  -272,
    -272,  -272,   184,  -272,   262,  -272,  -272,  -272,   185,  -272,
     186,    28,   834,   239,   245,   207,   255,  -272,  -272,  -272,
    -272,   208,  -272,  -272,  -272,  -272,  -272,  -272,   194,   251,
     752,   252,   163,   228,   752,  -272,  -272,   231,  -272,   752,
     260,  -272,  -272,   239,   527,   752,   263,   125,   264,   250,
      28,   752,   156,  -272,  -272,  -272,   752,  -272,  -272,   209,
     259,   267,   211,  -272,   268,  -272,   232,   752,   752,   129,
    -272,   271,   275,  -272,  -272,   156,   752,  -272,    28,   220,
     238,   280,  -272,   123,   281,  -272,   274,  -272,  -272,    14,
    -272,   287,  -272,  -272,   804,   790,  -272,   752,  -272,  -272,
    -272,   446,   106,    28,   276,   277,   289,    28,   294,  -272,
    -272,  -272,  -272,   291,  -272,   299,   752,  -272,  -272,  -272,
     752,  -272,  -272,   246,  -272,    28,  -272,   293,  -272,  -272,
     207,   752,   306,     3,   273,   752,  -272,    10,   314,   102,
     316,  -272,   270,  -272,  -272,  -272,  -272,  -272,   752,  -272,
    -272,    28,   321,  -272,    28,  -272,    28,  -272,   646,  -272,
     322,   327,  -272,  -272,   329,  -272,   332,    28,  -272,  -272,
     335,   790,  -272,  -272,  -272,   790,   336,   790,  -272,  -272,
    -272,   790,   339,  -272,  -272,    28,  -272,  -272,  -272,   752,
    -272,  -272,   731,  -272,    28,    28,  -272,   752,   114,  -272,
     790,   102,  -272,   790,  -272,  -272,  -272,   752,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    86,     0,
      87,     0,     0,     3,     0,     0,   313,     0,     0,     0,
      24,   239,   235,   237,   218,   228,     4,     0,    80,   217,
      74,    92,    89,   241,   219,     0,     0,     0,   311,   229,
     230,     6,    13,     0,   132,   130,     5,    36,    41,    42,
      43,    44,    45,    46,    81,    82,    83,    85,    84,    47,
      97,    98,    48,    49,    50,    37,   125,   126,   127,   128,
     129,    72,   175,   176,   178,   181,   182,   195,   197,   199,
     201,   205,   209,     0,   216,   223,   231,   173,    56,   131,
      90,   124,   116,     0,   308,     0,     0,     0,   267,    79,
     122,     0,     0,     0,   120,     0,   114,    99,   109,     0,
       0,     0,    72,     0,   238,    72,   234,     0,   233,   232,
      72,     0,   236,   180,     0,    69,    72,    96,    88,     0,
       0,   151,   153,   310,    12,    15,    14,     0,   269,     0,
       0,   172,     0,   186,   185,   187,   189,   191,   193,   184,
     188,     0,   190,     0,     0,     0,     0,   203,   204,     0,
     208,   207,     0,   214,   213,   212,   211,     0,   215,   221,
     240,    62,    64,    68,    67,    65,    58,    61,    57,    66,
      60,    59,    63,    52,     0,     0,     0,   284,     9,   227,
       0,     0,   281,    24,     0,   265,     0,     0,     0,   312,
     101,   118,     0,     0,     0,   247,     0,     0,     0,    30,
       0,    19,    22,     0,     0,    29,   271,   276,   226,    29,
     244,   224,     0,    29,   242,   225,    78,    29,     0,    91,
       0,   160,     0,     0,     0,     0,    39,     0,   268,     0,
     177,   179,   194,   192,   183,   196,   198,   200,   202,   206,
     210,     0,     0,   284,   259,   222,     0,    51,    54,    53,
     123,   117,     0,    10,     0,   309,   279,   280,     0,    18,
       0,     0,   264,    94,     0,     0,   107,   103,   100,   113,
     105,     0,   136,   115,   108,   246,    27,    35,     0,     0,
       0,    29,   273,     0,    28,   277,   245,     0,   243,     0,
      29,    70,    73,    94,     0,   155,     0,   146,     0,   138,
       0,     0,   152,    38,    40,    71,     0,   250,   220,     0,
       0,   256,     0,   254,     0,    55,     0,     0,     0,   295,
     282,    29,     0,    17,    16,   266,     0,   121,     0,     0,
       0,   111,   119,   134,    33,    31,     0,    26,    21,    23,
      20,    29,   270,   274,     0,     0,    76,    28,    77,    95,
     163,     0,   159,     0,     0,   148,     0,     0,     0,   149,
     150,   174,   248,     0,   249,   252,   259,     8,   291,   286,
       0,   292,   294,   283,   289,     0,    93,   140,   104,   106,
     110,     0,     0,    32,     0,    28,   275,   305,    24,   299,
     165,   169,   168,    75,   161,   162,   156,   157,     0,   154,
     142,     0,     0,   141,     0,   144,     0,   255,   251,   258,
     261,   288,   293,   278,     0,   112,     0,     0,    34,    25,
       0,     0,   304,   302,   303,     0,     0,     0,   298,   296,
     297,     0,    29,   158,   145,     0,   143,   137,   253,   263,
     257,   260,     0,   290,     0,     0,   133,     0,   307,   171,
       0,   301,   167,    28,   164,   147,   262,     0,   285,   139,
     135,   272,   306,   170,   300,   166,   287
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,  -272,  -272,  -272,   313,   104,  -272,  -272,   315,
    -272,  -183,  -272,  -272,  -272,  -272,  -204,  -184,  -272,  -272,
    -271,    -2,  -272,   132,  -272,   107,  -272,  -272,  -272,    17,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,    62,  -272,  -272,  -272,  -272,  -272,  -272,   -22,   171,
      91,  -272,  -272,    22,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,    65,
      70,  -272,  -272,  -180,  -272,  -272,  -272,  -191,  -272,    -5,
    -272,  -136,   240,    -7,  -272,  -272,    -8,   224,   227,   223,
    -272,   233,  -272,   221,  -272,   -56,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,   -34,    19,  -272,  -272,     6,  -272,   -24,  -272,  -272,
    -272,  -272,   348,  -272,  -272,  -272,  -272,  -272,  -272,   -55,
    -272,   -65,   282,  -272,   -58,  -103,  -272,  -272,   -17,  -272
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,     3,    42,   262,    43,    44,    45,
     194,   110,   291,   111,   347,   211,   295,   212,   288,   344,
      46,   231,   137,    48,    49,   257,   183,   184,    50,   138,
     125,   300,   301,    51,    52,    53,    54,    55,    56,    57,
      58,   337,   229,    59,    60,    61,   102,   278,   279,   106,
     280,   341,   107,   108,    62,   201,    63,    64,    65,    66,
     343,    67,    68,    69,   307,   365,   413,    70,   234,   131,
     308,   408,   409,   232,   361,   399,   442,   400,   401,    71,
     141,    72,    73,    74,    75,   153,    76,    77,    78,    79,
     159,    80,   162,    81,   167,    82,    83,    84,   169,    85,
     116,   117,   121,   113,    86,   122,   118,    87,   255,   322,
     375,   323,   324,   450,   451,    99,   195,    88,   114,   351,
     352,   216,    89,   268,   263,   264,   421,   453,   330,   331,
     381,   438,   439,   440,   432,   433,   434,    95,    90,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    47,    94,   239,    98,   119,   100,    98,   128,   217,
     270,   266,   220,   105,   133,   296,   112,   115,   120,   298,
     123,   101,   282,   302,   287,   126,   127,   168,    93,   -28,
     191,   130,   132,   360,   199,     5,   139,     7,   157,     8,
     207,   160,   186,   154,   214,    10,     6,   204,    12,    92,
     431,   161,     9,   309,   208,   275,   140,    11,   209,   276,
      14,   158,   186,    16,    17,   163,   192,   208,    92,    19,
     140,   209,   187,    20,    21,   196,   316,   188,   171,    22,
      23,   277,    24,    25,   230,    27,   -28,   350,   172,    28,
     405,   334,    29,   210,    30,    31,   358,    32,   173,   305,
     174,   306,   213,   189,   205,   164,   236,    33,    34,   140,
     190,   250,   406,    38,    39,    40,   310,   311,   165,   226,
     166,   214,   407,   175,   237,   200,     4,   384,   176,   215,
     369,   251,   219,     7,   252,   241,   222,   223,   177,    96,
     178,    97,   437,   227,   104,   244,   179,   396,   214,   391,
     392,   180,   364,   181,   431,   109,   305,   182,   387,   380,
     258,   253,   254,   214,   129,   142,   154,   259,   267,    20,
      21,   155,   156,   274,   170,    22,    23,   185,    24,    25,
     260,    27,   193,   410,   197,   265,   198,   415,    29,   353,
     202,   273,   203,   206,   124,   218,   318,   214,   222,   228,
     221,   285,   233,    33,    34,   423,    98,   225,   292,   428,
      39,    40,   235,   238,    98,   436,   243,   261,   397,   402,
     293,   256,   242,   303,   -11,   269,   382,   312,   297,   271,
    -102,   444,   258,   315,   446,   272,   447,   186,   464,   259,
     458,   281,   290,   284,   459,   286,   461,   456,   289,   321,
     462,   294,   299,   304,   317,   336,   326,   332,   333,   329,
     338,   340,   276,   342,   335,   465,   345,   346,   349,   473,
     354,     7,   475,   355,   469,   470,   357,   368,   363,   367,
     373,   372,  -258,   376,   374,   348,   327,   383,   377,   315,
     385,   411,   388,   389,   356,   402,   390,   393,   394,   402,
     362,   402,    47,   395,   414,   402,   132,    20,    21,   416,
     412,   371,   417,    22,    23,   418,    24,    25,   -28,    27,
     424,   427,   378,   379,   402,   143,    29,   402,   429,   435,
     140,   386,   441,   144,   145,   146,   445,   449,   147,   328,
     148,    33,    34,   452,   454,   149,   150,   455,    39,    40,
     457,   460,   403,   151,   152,   463,   134,   319,   135,    47,
       5,     6,     7,   325,     8,   359,   339,     9,   425,   314,
      10,   419,    11,    12,   283,   422,   370,   366,   245,   247,
     240,    13,   246,   249,   448,    14,   426,    15,    16,    17,
     430,   136,   248,    18,    19,   420,   474,   468,    20,    21,
     472,     0,   224,   443,    22,    23,     0,    24,    25,    26,
      27,     0,     0,   321,    28,     0,     0,    29,     0,    30,
      31,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,     0,    36,    37,    38,    39,
      40,     0,     0,     0,   466,     0,     0,   329,     0,     0,
       0,     0,   471,     5,     6,     7,     0,     8,     0,     0,
       9,     0,   476,    10,   404,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,    16,    17,     0,     0,     0,    18,    19,     0,     0,
       0,    20,    21,     0,     0,     0,     0,    22,    23,     0,
      24,    25,     0,    27,     0,     0,     0,    28,     0,     0,
      29,     0,    30,    31,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,     0,    36,
      37,    38,    39,    40,     5,     6,     7,     0,     8,     0,
       0,     9,     0,     0,    10,     0,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,    15,    16,    17,     0,     0,     0,    18,    19,     0,
       0,     0,    20,    21,     0,     0,     0,     0,    22,    23,
       0,    24,    25,     0,    27,     0,     0,     0,    28,     0,
       0,    29,     0,    30,    31,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,     0,
      36,    37,    38,    39,    40,     5,     0,     7,     0,     8,
       0,     0,     0,     0,     0,    10,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,    16,    17,     0,     0,     0,     0,    19,
       0,     0,     0,    20,    21,     7,     0,     0,     0,    22,
      23,  -259,    24,    25,   313,    27,     0,   320,     0,    28,
       0,     0,    29,     0,    30,    31,     7,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
       0,    20,    21,    38,    39,    40,     0,    22,    23,     0,
      24,    25,     0,    27,     0,     0,     0,     0,     0,     0,
      29,     0,    20,    21,     0,     0,     0,     0,    22,    23,
       0,    24,    25,     7,    27,    33,    34,     0,     0,     0,
       0,    29,    39,    40,     0,   320,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,    33,    34,     0,     0,
       0,     0,    38,    39,    40,   467,     0,     0,     0,    20,
      21,     7,     0,     0,     0,    22,    23,     0,    24,    25,
       0,    27,     0,     0,     0,     0,    20,    21,    29,     0,
       0,     0,    22,    23,     0,    24,    25,     0,    27,     0,
       0,     0,     0,    33,    34,    29,     0,    20,    21,     7,
      39,    40,     0,    22,    23,     0,    24,    25,     0,    27,
      33,    34,     0,     7,     0,     0,    29,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,   398,    21,     0,    39,    40,
       0,    22,    23,     7,    24,    25,     0,    27,     0,     0,
      21,     0,     0,     0,    29,    22,    23,     0,    24,    25,
       0,    27,     0,     0,     0,     0,     0,     0,    29,    33,
      34,     0,     0,     0,     0,     0,    39,    40,     0,     0,
      21,     0,     0,    33,    34,    22,    23,     0,    24,    25,
      39,    40,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
      39,    40
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   139,    12,    22,    14,    15,    32,   112,
     193,   191,   115,    18,    38,   219,    21,    22,    23,   223,
      27,    15,   202,   227,   208,    30,    31,    83,     6,    15,
      15,    36,    37,   304,    21,     7,    40,     9,    47,    11,
      24,    54,    21,    10,    34,    17,     8,     6,    20,    55,
      40,    64,    14,   233,    51,    51,    60,    19,    55,    55,
      32,    70,    21,    35,    36,    22,    51,    51,    55,    41,
      60,    55,    51,    45,    46,    42,    27,    56,     3,    51,
      52,    77,    54,    55,    56,    57,    72,   291,    13,    61,
     361,   271,    64,    77,    66,    67,   300,    69,    23,    31,
      25,    33,    15,     9,   109,    62,    56,    79,    80,    60,
      16,   167,     6,    85,    86,    87,    15,    16,    75,   124,
      77,    34,    16,    48,    74,   103,     0,   331,    53,   112,
     310,    21,   115,     9,    24,   142,    34,   120,    63,    55,
      65,    55,    40,   126,    55,   153,    71,   351,    34,    26,
      27,    76,    27,    78,    40,    15,    31,    82,   338,    30,
     184,    51,    52,    34,    15,     5,    10,   184,   192,    45,
      46,    12,     4,   197,    79,    51,    52,    16,    54,    55,
     185,    57,    51,   363,    42,   190,    41,   367,    64,   292,
      15,   196,    16,    15,    70,    68,   252,    34,    34,    16,
      72,   206,    15,    79,    80,   385,   214,    73,   213,   393,
      86,    87,     6,    16,   222,   398,    42,    55,   354,   355,
     214,    30,    57,   228,    72,    72,   329,   235,   222,    15,
      41,   411,   256,   238,   414,    16,   416,    21,   442,   256,
     431,    16,    30,    55,   435,    55,   437,   427,    55,   254,
     441,    16,    16,    43,    55,    16,    72,    72,    72,   264,
      15,     6,    55,    55,   272,   445,    72,    16,    16,   460,
      42,     9,   463,    42,   454,   455,    16,    27,    15,    15,
      21,    72,    15,    15,    73,   290,    24,    16,    56,   294,
      15,    15,    72,    55,   299,   431,    16,    16,    24,   435,
     305,   437,   304,    16,    15,   441,   311,    45,    46,    15,
      33,   316,    21,    51,    52,    16,    54,    55,    72,    57,
      27,    15,   327,   328,   460,    29,    64,   463,    55,    15,
      60,   336,    16,    37,    38,    39,    15,    15,    42,    77,
      44,    79,    80,    16,    15,    49,    50,    15,    86,    87,
      15,    15,   357,    57,    58,    16,    43,   253,    43,   361,
       7,     8,     9,   256,    11,   303,   275,    14,   390,   237,
      17,   376,    19,    20,   203,   380,   311,   307,   154,   156,
     140,    28,   155,   162,   418,    32,   391,    34,    35,    36,
     395,    43,   159,    40,    41,   376,   461,   452,    45,    46,
     458,    -1,   120,   408,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,   418,    61,    -1,    -1,    64,    -1,    66,
      67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    -1,    83,    84,    85,    86,
      87,    -1,    -1,    -1,   449,    -1,    -1,   452,    -1,    -1,
      -1,    -1,   457,     7,     8,     9,    -1,    11,    -1,    -1,
      14,    -1,   467,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,
      64,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,
      84,    85,    86,    87,     7,     8,     9,    -1,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    64,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,
      83,    84,    85,    86,    87,     7,    -1,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    46,     9,    -1,    -1,    -1,    51,
      52,    15,    54,    55,    56,    57,    -1,    21,    -1,    61,
      -1,    -1,    64,    -1,    66,    67,     9,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      -1,    45,    46,    85,    86,    87,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,     9,    57,    79,    80,    -1,    -1,    -1,
      -1,    64,    86,    87,    -1,    21,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    85,    86,    87,    24,    -1,    -1,    -1,    45,
      46,     9,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    45,    46,    64,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,
      -1,    -1,    -1,    79,    80,    64,    -1,    45,    46,     9,
      86,    87,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      79,    80,    -1,     9,    -1,    -1,    64,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    45,    46,    -1,    86,    87,
      -1,    51,    52,     9,    54,    55,    -1,    57,    -1,    -1,
      46,    -1,    -1,    -1,    64,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    79,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      46,    -1,    -1,    79,    80,    51,    52,    -1,    54,    55,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,    92,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    28,    32,    34,    35,    36,    40,    41,
      45,    46,    51,    52,    54,    55,    56,    57,    61,    64,
      66,    67,    69,    79,    80,    81,    83,    84,    85,    86,
      87,    91,    93,    95,    96,    97,   108,   109,   111,   112,
     116,   121,   122,   123,   124,   125,   126,   127,   128,   131,
     132,   133,   142,   144,   145,   146,   147,   149,   150,   151,
     155,   167,   169,   170,   171,   172,   174,   175,   176,   177,
     179,   181,   183,   184,   185,   187,   192,   195,   205,   210,
     226,   167,    55,   141,   167,   225,    55,    55,   174,   203,
     174,   203,   134,   227,    55,   167,   137,   140,   141,    15,
      99,   101,   167,   191,   206,   167,   188,   189,   194,   226,
     167,   190,   193,   171,    70,   118,   167,   167,   205,    15,
     167,   157,   167,   205,    93,    97,   210,   110,   117,    40,
      60,   168,     5,    29,    37,    38,    39,    42,    44,    49,
      50,    57,    58,   173,    10,    12,     4,    47,    70,   178,
      54,    64,   180,    22,    62,    75,    77,   182,   183,   186,
      79,     3,    13,    23,    25,    48,    53,    63,    65,    71,
      76,    78,    82,   114,   115,    16,    21,    51,    56,     9,
      16,    15,    51,    51,    98,   204,    42,    42,    41,    21,
     141,   143,    15,    16,     6,   167,    15,    24,    51,    55,
      77,   103,   105,    15,    34,   117,   209,   223,    68,   117,
     223,    72,    34,   117,   220,    73,   167,   117,    16,   130,
      56,   109,   161,    15,   156,     6,    56,    74,    16,   169,
     170,   171,    57,    42,   174,   175,   176,   177,   179,   181,
     183,    21,    24,    51,    52,   196,    30,   113,   205,   226,
     167,    55,    94,   212,   213,   167,   161,   205,   211,    72,
      99,    15,    16,   167,   205,    51,    55,    77,   135,   136,
     138,    16,   161,   137,    55,   167,    55,   105,   106,    55,
      30,   100,   167,   203,    16,   104,   104,   203,   104,    16,
     119,   120,   104,   167,    43,    31,    33,   152,   158,   161,
      15,    16,   174,    56,   111,   167,    27,    55,   183,    94,
      21,   167,   197,   199,   200,   113,    72,    24,    77,   167,
     216,   217,    72,    72,   161,   174,    16,   129,    15,   138,
       6,   139,    55,   148,   107,    72,    16,   102,   167,    16,
     104,   207,   208,   223,    42,    42,   167,    16,   104,   129,
     108,   162,   167,    15,    27,   153,   158,    15,    27,   161,
     157,   167,    72,    21,    73,   198,    15,    56,   167,   167,
      30,   218,   223,    16,   104,    15,   167,   161,    72,    55,
      16,    26,    27,    16,    24,    16,   104,   169,    45,   163,
     165,   166,   169,   167,    18,   108,     6,    16,   159,   160,
     161,    15,    33,   154,    15,   161,    15,    21,    16,   167,
     200,   214,   167,   161,    27,   136,   167,    15,   105,    55,
     167,    40,   222,   223,   224,    15,    99,    40,   219,   220,
     221,    16,   164,   167,   161,    15,   161,   161,   199,    15,
     201,   202,    16,   215,    15,    15,   161,    15,   165,   165,
      15,   165,   165,    16,   104,   161,   167,    24,   217,   161,
     161,   167,   222,   165,   219,   165,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     122,   123,   123,   123,   123,   123,   124,   125,   126,   126,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     133,   134,   134,   135,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   182,   182,   183,   183,   184,   184,   184,
     185,   185,   186,   186,   187,   187,   187,   187,   187,   187,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     196,   197,   197,   198,   198,   199,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   216,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     3,     2,     1,     0,
       1,     3,     3,     2,     3,     0,     1,     1,     4,     3,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     3,     0,     3,     0,     3,     2,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     2,     0,     3,     0,     1,     1,     2,
       4,     2,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     2,     3,     0,     1,     3,     1,     3,     3,     3,
       0,     5,     2,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     5,     5,     0,     7,     4,     9,
       6,     6,     6,     4,     3,     3,     0,     3,     0,     5,
       3,     0,     3,     1,     3,     1,     1,     1,     2,     0,
       1,     4,     2,     1,     3,     1,     3,     2,     1,     1,
       4,     3,     2,     1,     4,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       4,     2,     2,     0,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     1,     0,
       2,     1,     2,     3,     2,     3,     4,     3,     3,     3,
       2,     3,     2,     3,     0,     3,     1,     4,     1,     0,
       1,     0,     2,     1,     3,     2,     3,     0,     3,     2,
       4,     2,     5,     0,     1,     2,     1,     2,     7,     4,
       1,     0,     2,     3,     0,     3,     0,     3,     0,     2,
       4,     2,     2,     3,     1,     0,     1,     1,     5,     4,
       3,     2,     1,     1,     5,     4,     3,     2,     1,     3,
       2,     1,     2,     0
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 64 "includes/parse.y" /* yacc.c:1661  */
    {
		//TableManager::getInstance().display();
	}
#line 1921 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 4:
#line 70 "includes/parse.y" /* yacc.c:1661  */
    {
		(yyval.node) = new PrintNode(0); 
		pool.add((yyval.node));
	}
#line 1930 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 5:
#line 75 "includes/parse.y" /* yacc.c:1661  */
    {	
		if ((yyvsp[0].node)) {
			(yyvsp[0].node)->eval();
		}
		else{
			std::cout << "Can't evaluate the whole program" << std::endl;
		}
	}
#line 1943 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 7:
#line 86 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 1949 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 93 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1955 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 11:
#line 94 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 1961 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 14:
#line 101 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 1967 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 15:
#line 102 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 1973 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 16:
#line 106 "includes/parse.y" /* yacc.c:1661  */
    {
        	(yyval.node) = new FuncNode((yyvsp[-3].str),(yyvsp[0].node));
        	pool.add((yyval.node));
        	delete[] (yyvsp[-3].str);
        }
#line 1983 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 17:
#line 113 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 1989 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 18:
#line 114 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 1995 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 25:
#line 129 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2001 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 26:
#line 132 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-1].str);}
#line 2007 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 27:
#line 133 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2013 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 30:
#line 140 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2019 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 36:
#line 152 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2025 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 37:
#line 153 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2031 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 38:
#line 156 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[-3].node);}
#line 2037 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 39:
#line 157 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[-2].node);}
#line 2043 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 42:
#line 164 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2049 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 43:
#line 165 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2055 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 44:
#line 166 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 2061 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 45:
#line 167 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 2067 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 46:
#line 168 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2073 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 47:
#line 169 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 2079 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 48:
#line 170 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 2085 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 49:
#line 171 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 2091 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 50:
#line 172 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 2097 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 51:
#line 176 "includes/parse.y" /* yacc.c:1661  */
    { 
			if((yyvsp[-2].node) && (yyvsp[0].node))
			{
			switch((yyvsp[-1].op))
			{
				case '0':
					{
						Node* temp = new AddBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break;
					}
				case '1':
					{
						Node* temp = new SubBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break;					
					}
				case '2':
					{
						Node* temp = new MulBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break; 
					}
				case '3':
				{
						Node* temp = new DivBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break; 
				}
				case '4':
				{
						Node* temp = new PctBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node),temp);
						pool.add((yyvsp[-2].node));
						delete temp;
						//($$)->eval()->print();
						break; 
				}
				case 11:
				{
					Node* temp = new DbStarBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
					(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), temp);
					pool.add((yyvsp[-2].node));
					delete temp;
					break;
				}
				case 12:
				{
					Node* temp = new DbSlashBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
					(yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), temp);
					pool.add((yyvsp[-2].node));
					delete temp;
					break;		         
				}
			}
			}
		}
#line 2171 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 52:
#line 246 "includes/parse.y" /* yacc.c:1661  */
    {
			//std::cout<<"AsgBinaryNode "<<$1<<","<<$2<<std::endl;

			if((yyvsp[0].node))
			{
				(yyval.node) = new AsgBinaryNode((yyvsp[-1].node),(yyvsp[0].node));
				pool.add((yyval.node));
				//($$)->eval()->print();
			}
			else 
			{
				(yyval.node) = (yyvsp[-1].node);
				//if ($1)
					//($$)->eval()->print();
			}
		}
#line 2192 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 264 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2198 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 265 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2204 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 55:
#line 269 "includes/parse.y" /* yacc.c:1661  */
    {
			(yyval.node) = (yyvsp[0].node);
		}
#line 2212 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 56:
#line 272 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2218 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 275 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '0';}
#line 2224 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 58:
#line 276 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '1';}
#line 2230 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 59:
#line 277 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '2';}
#line 2236 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 60:
#line 278 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '3';}
#line 2242 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 61:
#line 279 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '4';}
#line 2248 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 62:
#line 280 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2254 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 63:
#line 281 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2260 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 64:
#line 282 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2266 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 65:
#line 283 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2272 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 66:
#line 284 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2278 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 67:
#line 285 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 11;}
#line 2284 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 286 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 12;}
#line 2290 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 290 "includes/parse.y" /* yacc.c:1661  */
    {
			if ((yyvsp[0].node))
				{
					(yyval.node) = new PrintNode((yyvsp[0].node));
					pool.add((yyval.node));
				}
			else 
				(yyval.node) = nullptr;

		}
#line 2305 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 70:
#line 300 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2311 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 71:
#line 303 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2317 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 72:
#line 304 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2323 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 307 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2329 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 74:
#line 308 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 2335 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 81:
#line 325 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2341 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 82:
#line 326 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2347 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 83:
#line 327 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2353 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 84:
#line 328 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2359 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 85:
#line 329 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2365 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 88:
#line 339 "includes/parse.y" /* yacc.c:1661  */
    { 
		(yyval.node) = new ReturnNode((yyvsp[0].node));
		pool.add((yyval.node));
	}
#line 2374 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 89:
#line 344 "includes/parse.y" /* yacc.c:1661  */
    { 
		(yyval.node) = new ReturnNode(nullptr);
		pool.add((yyval.node));
	}
#line 2383 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 106:
#line 384 "includes/parse.y" /* yacc.c:1661  */
    {delete [] (yyvsp[-2].str); delete[] (yyvsp[0].str);}
#line 2389 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 107:
#line 385 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2395 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 108:
#line 388 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2401 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 116:
#line 404 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2407 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 117:
#line 405 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2413 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 118:
#line 408 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-1].str);}
#line 2419 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 119:
#line 411 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2425 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 121:
#line 415 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = nullptr;}
#line 2431 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 122:
#line 416 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2437 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 123:
#line 419 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2443 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 124:
#line 420 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2449 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 125:
#line 423 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2455 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 126:
#line 424 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2461 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 127:
#line 425 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2467 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 128:
#line 426 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2473 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 129:
#line 427 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2479 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 130:
#line 428 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2485 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 131:
#line 429 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2491 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 132:
#line 430 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2497 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 133:
#line 434 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[-6].node)){
			//std::cout << "get IfNode() with else statement" << std::endl;
			(yyval.node) = new IfNode((yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[0].node));
			pool.add((yyval.node));
		}
		else
			(yyval.node) = nullptr;
	}
#line 2511 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 134:
#line 444 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[-3].node)){
			//std::cout << "get IfNode() without else" << std::endl;
			(yyval.node) = new IfNode((yyvsp[-3].node),(yyvsp[-1].node),nullptr);
			pool.add((yyval.node));
		}
		else 
			(yyval.node) = nullptr;
	}
#line 2525 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 135:
#line 456 "includes/parse.y" /* yacc.c:1661  */
    {
			(yyval.node) = nullptr;
		}
#line 2533 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 136:
#line 459 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = nullptr;}
#line 2539 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 160:
#line 509 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2545 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 161:
#line 511 "includes/parse.y" /* yacc.c:1661  */
    {
			(yyval.node) = (yyvsp[-1].node);
		}
#line 2553 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 162:
#line 517 "includes/parse.y" /* yacc.c:1661  */
    {
			(yyval.node) = (yyvsp[-1].node);
			dynamic_cast<SuiteNode*>((yyval.node))->insert((yyvsp[0].node));
		}
#line 2562 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 163:
#line 522 "includes/parse.y" /* yacc.c:1661  */
    {
			(yyval.node) = new SuiteNode();
			dynamic_cast<SuiteNode*>((yyval.node))->insert((yyvsp[0].node));
			pool.add((yyval.node));
		}
#line 2572 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 172:
#line 545 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2578 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 173:
#line 546 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2584 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 174:
#line 549 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2590 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 175:
#line 550 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2596 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 176:
#line 553 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2602 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 177:
#line 554 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2608 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 178:
#line 557 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2614 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 179:
#line 558 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2620 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 180:
#line 561 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2626 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 181:
#line 562 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2632 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 182:
#line 565 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2638 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 183:
#line 567 "includes/parse.y" /* yacc.c:1661  */
    {
		switch ((yyvsp[-1].op))
		{
			case 1 : 
			{
				(yyval.node) = new LessBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				break;
			}
			case 2 :
			{
				(yyval.node) = new GrBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				break;
			}
			case 3 :
			{
				(yyval.node) = new EqeqBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				break;
			}
			case 4 :
			{
				(yyval.node) = new GreqBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				break;
			}
			case 5 :
			{
				(yyval.node) = new LesseqBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				break;
			}
			case 6 :
			{
				(yyval.node) = new NoteqBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				break;
			}
		}
	}
#line 2684 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 184:
#line 610 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 1;}
#line 2690 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 185:
#line 611 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 2;}
#line 2696 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 186:
#line 612 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 3;}
#line 2702 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 187:
#line 613 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 4;}
#line 2708 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 188:
#line 614 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 5;}
#line 2714 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 189:
#line 615 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2720 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 190:
#line 616 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 6;}
#line 2726 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 191:
#line 617 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2732 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 192:
#line 618 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2738 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 193:
#line 619 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2744 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 194:
#line 620 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2750 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 195:
#line 623 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2756 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 196:
#line 624 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2762 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 197:
#line 627 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2768 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 198:
#line 628 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2774 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 199:
#line 631 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2780 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 200:
#line 632 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2786 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 201:
#line 636 "includes/parse.y" /* yacc.c:1661  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2794 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 202:
#line 639 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2800 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 205:
#line 647 "includes/parse.y" /* yacc.c:1661  */
    { 
			(yyval.node) = (yyvsp[0].node); 
			//pool.add($$); 
			//($$)->eval()->print();
		}
#line 2810 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 206:
#line 653 "includes/parse.y" /* yacc.c:1661  */
    {
			switch((yyvsp[-1].op))
			{
				case '+':
					{
						(yyval.node) = new AddBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval();
						break;
					}
				case '-':
					{
						(yyval.node) = new SubBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval();
						break;
					}
			}
		}
#line 2834 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 207:
#line 674 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '+';}
#line 2840 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 208:
#line 675 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '-';}
#line 2846 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 209:
#line 678 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2852 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 210:
#line 680 "includes/parse.y" /* yacc.c:1661  */
    {
			switch ((yyvsp[-1].op))
			{
				case '*' : 
					{
						(yyval.node) = new MulBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval()->print();
						break;
					}
				case '/' : 
					{
						(yyval.node) = new DivBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval()->print();
						break;
					}
				case '%' :
					{
						(yyval.node) = new PctBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval()->print();
						break;
					}
				case '1' :
					{
						(yyval.node) = new DbSlashBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
						pool.add((yyval.node));
						break;
					}
			}

		}
#line 2890 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 211:
#line 715 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '*';}
#line 2896 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 212:
#line 716 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '/';}
#line 2902 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 213:
#line 717 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.op) = '%';}
#line 2908 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 214:
#line 718 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '1';}
#line 2914 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 215:
#line 722 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[0].node))
		{
			switch((yyvsp[-1].op))
			{
				case '+': 
					{
						(yyval.node) = (yyvsp[0].node);
						break;
					}
				case '-':
					{
						(yyval.node) = new UnaryNode((yyvsp[0].node));
						pool.add((yyval.node));
						//($$)->eval();
						break;
					}
			}
		}		
	}
#line 2939 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 216:
#line 742 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2945 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 217:
#line 745 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '+';}
#line 2951 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 218:
#line 746 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '-';}
#line 2957 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 219:
#line 747 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '~';}
#line 2963 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 220:
#line 751 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[-3].node) && (yyvsp[0].node))
		{
			(yyval.node) = new DbStarBinaryNode((yyvsp[-3].node),(yyvsp[0].node));
			pool.add((yyval.node));
		}
	}
#line 2975 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 221:
#line 759 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[0].node)) 
		{
			std::string funcname = reinterpret_cast<IdentNode*>((yyvsp[-1].node))->getIdent();
			(yyval.node) = new CallNode(funcname);
			pool.add((yyval.node));
		}
		else 
			(yyval.node) = (yyvsp[-1].node);
	}
#line 2990 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 222:
#line 771 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2996 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 223:
#line 772 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3002 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 224:
#line 775 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 3008 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 225:
#line 776 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3014 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 226:
#line 777 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3020 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 227:
#line 778 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3026 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 228:
#line 780 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new IdentNode((yyvsp[0].str));
				delete[] (yyvsp[0].str);
				pool.add((yyval.node));
			}
#line 3036 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 229:
#line 786 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new IntLiteral((yyvsp[0].intNumber));
				pool.add((yyval.node));
			}
#line 3045 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 230:
#line 791 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
				pool.add((yyval.node));
			}
#line 3054 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 231:
#line 795 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3060 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 232:
#line 798 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3066 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 233:
#line 799 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 3072 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 234:
#line 802 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 3078 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 235:
#line 803 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3084 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 244:
#line 822 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3090 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 245:
#line 823 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 3096 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 248:
#line 831 "includes/parse.y" /* yacc.c:1661  */
    {
	/*
		if($2)
			$$ = $2;
		else
			$$ = new IdentNode("NULL");

		pool.add($$);
	*/
	}
#line 3111 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 249:
#line 841 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = 0;}
#line 3117 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 250:
#line 842 "includes/parse.y" /* yacc.c:1661  */
    { delete[] (yyvsp[0].str);}
#line 3123 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 269:
#line 879 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 3129 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 278:
#line 898 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-5].str);}
#line 3135 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 279:
#line 899 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-2].str);}
#line 3141 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 282:
#line 906 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 3147 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 289:
#line 921 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 3153 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 290:
#line 922 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3159 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 291:
#line 923 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 3165 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 292:
#line 926 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 3171 "parse.tab.c" /* yacc.c:1661  */
    break;


#line 3175 "parse.tab.c" /* yacc.c:1661  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 970 "includes/parse.y" /* yacc.c:1906  */


#include <stdio.h>

void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
