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
    int complexity = 1;  
    int isfinally = 0;
    int trycomplexity = 0;
    int tmp = 0;

	PoolOfNodes& pool = PoolOfNodes::getInstance();

       
    struct funcInfo
    {
        int line;
        std::string funcname;
        int column;
        int complexity = 1;

    }func;

    void reverse(std::stack<struct funcInfo>);
    void yyerror (const char *s);
    
    std::stack<funcInfo> f;


#line 101 "parse.tab.c" /* yacc.c:339  */

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
#line 38 "includes/parse.y" /* yacc.c:355  */

    Node* node;
    int intNumber;
    float fltNumber;
    char *str;
    char op;


#line 238 "parse.tab.c" /* yacc.c:355  */
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

#line 269 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   961

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

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
       0,    75,    75,    78,    84,    85,    88,    89,    92,    93,
      96,    97,   100,   101,   104,   105,   108,   134,   135,   138,
     139,   142,   143,   146,   147,   150,   151,   154,   155,   158,
     159,   162,   163,   166,   167,   170,   171,   174,   175,   178,
     179,   182,   183,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   197,   267,   277,   278,   281,   282,   285,   297,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   314,   319,   322,   323,   326,   327,   330,   331,
     334,   335,   338,   341,   344,   345,   346,   347,   348,   351,
     354,   357,   358,   361,   364,   365,   368,   369,   372,   373,
     376,   377,   380,   383,   386,   387,   390,   391,   392,   395,
     396,   399,   400,   403,   404,   407,   408,   411,   412,   415,
     416,   419,   422,   423,   426,   427,   430,   431,   434,   435,
     436,   437,   437,   438,   439,   440,   441,   444,   445,   448,
     449,   452,   453,   456,   457,   460,   467,   470,   471,   474,
     475,   478,   482,   485,   488,   489,   492,   493,   496,   497,
     500,   501,   504,   505,   508,   509,   512,   513,   516,   517,
     520,   521,   524,   525,   528,   529,   532,   533,   536,   537,
     540,   541,   544,   545,   548,   549,   552,   553,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   569,
     570,   573,   574,   577,   578,   581,   586,   589,   590,   593,
     599,   621,   622,   625,   626,   662,   663,   664,   665,   668,
     689,   692,   693,   694,   697,   705,   716,   717,   720,   721,
     722,   723,   724,   730,   735,   740,   743,   744,   747,   748,
     751,   752,   755,   756,   759,   760,   763,   764,   767,   768,
     771,   772,   775,   776,   777,   780,   781,   784,   785,   788,
     789,   790,   793,   794,   797,   798,   801,   802,   805,   806,
     809,   810,   813,   814,   817,   818,   821,   822,   825,   826,
     829,   830,   833,   834,   837,   838,   841,   844,   845,   848,
     849,   852,   853,   856,   857,   858,   861,   862,   865,   866,
     869,   870,   873,   874,   877,   878,   881,   882,   885,   886,
     889,   890,   893,   894,   897,   898,   901,   902
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
  "pick_yield_expr_testlist", "star_EQUAL_R", "star_EQUAL", "augassign",
  "print_stmt", "star_COMMA_test", "opt_test", "plus_COMMA_test",
  "opt_test_2", "del_stmt", "pass_stmt", "flow_stmt", "break_stmt",
  "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "opt_COMMA_test", "opt_test_3", "import_stmt", "import_name",
  "import_from", "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "$@1", "if_stmt",
  "star_ELIF", "while_stmt", "for_stmt", "try_stmt", "plus_except",
  "opt_ELSE", "opt_FINALLY", "with_stmt", "star_COMMA_with_item",
  "with_item", "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite",
  "plus_stmt", "testlist_safe", "plus_COMMA_old_test", "old_test",
  "old_lambdef", "test", "opt_IF_ELSE", "or_test", "and_test", "not_test",
  "comparison", "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
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

#define YYPACT_NINF -355

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-355)))

#define YYTABLE_NINF -264

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -355,    48,  -355,   404,  -355,   822,    69,   822,  -355,    71,
    -355,    95,   309,  -355,   309,   309,  -355,   103,   822,    69,
      53,   822,   255,   822,  -355,  -355,  -355,   874,  -355,  -355,
     726,   822,   822,  -355,  -355,   822,   822,   822,  -355,  -355,
    -355,  -355,   115,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,    80,  -355,  -355,  -355,  -355,
    -355,    42,   161,  -355,   110,   159,   158,   167,     2,   -12,
      13,  -355,   309,  -355,  -355,    93,  -355,    33,  -355,  -355,
     157,  -355,     8,  -355,    85,     9,   123,   159,  -355,    29,
     134,   136,     7,  -355,   163,  -355,   164,    34,   822,   169,
      10,    82,   111,  -355,   148,  -355,   116,  -355,  -355,   162,
     118,  -355,  -355,   822,  -355,  -355,   179,  -355,   182,  -355,
     194,  -355,  -355,  -355,  -355,    51,   186,  -355,   187,   874,
     874,  -355,   874,  -355,  -355,  -355,  -355,  -355,   149,  -355,
    -355,   171,  -355,   309,   309,   309,   309,  -355,  -355,   309,
    -355,  -355,   309,  -355,  -355,  -355,  -355,   309,  -355,    26,
    -355,  -355,  -355,  -355,  -355,   255,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,   255,   822,   168,   144,  -355,
    -355,   822,   627,   822,   147,   213,   214,   822,   822,    40,
     188,   210,   217,   627,    69,   183,  -355,   822,   184,    59,
    -355,   185,  -355,   204,   822,   309,   221,  -355,  -355,  -355,
     221,  -355,  -355,   309,   221,  -355,  -355,   227,   221,   822,
    -355,   627,   122,   309,  -355,   688,   627,   822,     6,   161,
    -355,  -355,  -355,   159,   158,   167,     2,   -12,    13,  -355,
     191,   309,   144,   770,  -355,   220,  -355,  -355,  -355,  -355,
    -355,   181,  -355,    76,  -355,   208,  -355,  -355,  -355,   195,
    -355,   196,   627,   309,   239,   241,   202,   253,  -355,  -355,
    -355,  -355,   207,  -355,  -355,  -355,  -355,  -355,  -355,   199,
     247,   822,   250,   148,   230,   822,  -355,  -355,   232,  -355,
     822,   259,  -355,  -355,   239,   251,   627,   822,   159,  -355,
    -355,    36,  -355,   822,  -355,  -355,   209,   258,   265,   211,
    -355,   267,  -355,  -355,   229,   822,   822,    23,  -355,   271,
     566,   268,  -355,  -355,   159,   822,  -355,   627,   219,   234,
     277,  -355,   138,   280,  -355,   273,  -355,  -355,    12,  -355,
     283,  -355,  -355,   874,   836,  -355,   822,  -355,  -355,   288,
    -355,  -355,   822,   289,    62,   290,  -355,  -355,   292,  -355,
     295,   822,  -355,  -355,  -355,   822,  -355,  -355,   242,  -355,
    -355,   485,   627,  -355,   297,  -355,  -355,   202,   822,   300,
      59,   261,   822,  -355,    72,   302,    11,   306,  -355,   269,
    -355,   627,    38,   627,   310,   294,   316,   627,  -355,   190,
    -355,   317,   320,  -355,  -355,  -355,  -355,   318,  -355,   322,
     627,  -355,  -355,   323,   836,  -355,  -355,  -355,   836,   324,
     836,  -355,  -355,  -355,   836,   327,  -355,  -355,  -355,   822,
    -355,  -355,   627,   329,  -355,   627,  -355,  -355,   822,  -355,
    -355,   784,  -355,   627,   627,  -355,   822,   102,  -355,   836,
      11,  -355,   836,  -355,  -355,  -355,   627,  -355,  -355,   822,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,   131,     1,     0,     0,     0,    89,     0,
      90,     0,     0,     3,     0,     0,   317,     0,     0,     0,
      24,   243,   239,   241,   222,   232,     4,     0,    83,   221,
      77,    95,    92,   245,   223,     0,     0,   315,   233,   234,
       6,    13,     0,   136,   134,     5,    37,    42,    43,    44,
      45,    46,    47,    84,    85,    86,    88,    87,    48,   100,
     101,    49,    50,    51,    38,     0,   128,   129,   130,   133,
      75,   179,   180,   182,   185,   186,   199,   201,   203,   205,
     209,   213,     0,   220,   227,   235,   177,    59,   135,    93,
     127,   119,     0,   312,     0,     0,     0,   271,    82,   125,
       0,     0,     0,   123,     0,   117,   102,   112,     0,     0,
       0,    75,     0,   242,    75,   238,     0,   237,   236,    75,
       0,   240,   184,     0,    72,    75,    99,    91,     0,   155,
     157,   314,    12,    15,    14,     0,     0,   132,   273,     0,
       0,   176,     0,   190,   189,   191,   193,   195,   197,   188,
     192,     0,   194,     0,     0,     0,     0,   207,   208,     0,
     212,   211,     0,   218,   217,   216,   215,     0,   219,   225,
     244,    65,    67,    71,    70,     0,    68,    61,    64,    60,
      69,    63,    62,    66,    53,     0,     0,     0,   288,     9,
     231,     0,     0,   285,    24,     0,   269,     0,     0,     0,
     316,   104,   121,     0,     0,     0,   251,     0,     0,     0,
      31,     0,    19,    22,     0,     0,    30,   275,   280,   230,
      30,   248,   228,     0,    30,   246,   229,    81,    30,     0,
      94,     0,     0,     0,    40,     0,     0,   272,     0,   181,
     183,   198,   196,   187,   200,   202,   204,   206,   210,   214,
       0,     0,   288,   263,   226,    57,    55,    54,    52,   126,
     120,     0,    10,     0,   313,     0,   164,   283,   284,     0,
      18,     0,     0,   268,    97,     0,     0,   110,   106,   103,
     116,   108,     0,   140,   118,   111,   250,    28,    36,     0,
      26,     0,    30,   277,     0,    29,   281,   249,     0,   247,
       0,    30,    73,    76,    97,   142,     0,     0,   156,    39,
      41,     0,    74,     0,   254,   224,     0,     0,   260,     0,
     258,     0,    58,    56,     0,     0,     0,   299,   286,    30,
     131,     0,    17,    16,   270,     0,   124,     0,     0,     0,
     114,   122,   138,    34,    32,     0,    27,    21,    23,    20,
      30,   274,   278,     0,     0,    79,    29,    80,    98,     0,
     153,   154,   159,     0,   150,     0,   178,   252,     0,   253,
     256,   263,     8,   295,   290,     0,   296,   298,   287,   293,
     167,   131,     0,    96,   144,   107,   109,   113,     0,     0,
      33,     0,    29,   279,   309,    24,   303,   169,   173,   172,
      78,     0,   163,     0,     0,   152,     0,     0,   259,   255,
     262,   265,   292,   297,   165,   166,   282,     0,   115,     0,
       0,    35,    25,     0,     0,   308,   306,   307,     0,     0,
       0,   302,   300,   301,     0,    30,   141,   160,   161,     0,
     158,   146,     0,     0,   145,     0,   148,   257,   267,   261,
     264,     0,   294,     0,     0,   137,     0,   311,   175,     0,
     305,   171,    29,   168,   162,   149,     0,   147,   266,     0,
     289,   143,   139,   276,   310,   174,   304,   170,   151,   291
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -355,  -355,  -355,  -355,  -355,   303,    94,  -355,  -355,   305,
    -355,  -173,  -355,  -355,  -355,  -355,  -209,  -200,  -355,  -355,
    -308,    -2,  -355,   113,  -355,   165,  -355,    97,  -355,  -355,
      32,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,    45,  -355,  -355,  -355,  -355,  -355,  -355,   -34,
     150,    83,  -355,  -355,    17,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,    49,    -6,  -355,  -355,  -193,  -355,  -355,  -355,  -354,
    -355,    -5,  -355,  -136,   222,    -7,  -355,  -355,    -8,   215,
     212,   216,  -355,   206,  -355,   218,  -355,   -68,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,   -41,     3,  -355,  -355,    -3,  -355,     0,
    -355,  -355,  -355,  -355,   333,  -355,  -355,  -355,  -355,  -355,
    -355,   -80,  -355,   -84,   262,  -355,   -79,  -106,  -355,  -355,
      19,  -355
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    40,     3,    41,   261,    42,    43,    44,
     195,   109,   292,   110,   346,   212,   296,   213,   289,   343,
      45,   266,   135,    47,    48,   255,   322,   184,   185,    49,
     138,   124,   301,   302,    50,    51,    52,    53,    54,    55,
      56,    57,   336,   230,    58,    59,    60,   101,   279,   280,
     105,   281,   340,   106,   107,    61,   202,    62,    63,    64,
      65,    66,   342,    67,    68,   137,   364,   405,   444,    69,
     232,   129,   365,   439,   440,   267,   381,   396,   435,   397,
     398,    70,   141,    71,    72,    73,    74,   153,    75,    76,
      77,    78,   159,    79,   162,    80,   167,    81,    82,    83,
     169,    84,   115,   116,   120,   112,    85,   121,   117,    86,
     254,   319,   370,   320,   321,   449,   450,    98,   196,    87,
     113,   350,   351,   217,    88,   269,   262,   263,   412,   452,
     328,   329,   376,   431,   432,   433,   425,   426,   427,    94,
      89,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    46,    93,   238,    97,   218,    99,    97,   221,   288,
     283,   297,   100,   104,   168,   299,   111,   114,   119,   303,
     122,   271,   380,    92,   192,   125,   126,   -29,   200,   187,
     128,   130,   127,   313,   208,   163,   171,   131,   305,   154,
     205,   118,   160,   311,   437,   223,   172,   250,     4,   157,
     251,   430,   161,   375,   438,   187,   173,   215,   174,   188,
     193,   209,    91,   175,   189,   210,   140,   362,   108,   363,
     457,   197,   158,   415,   458,   164,   460,   252,   253,   333,
     461,   176,   139,   349,   -29,     7,   177,   211,   165,   404,
     166,   276,   357,   362,   190,   277,   178,   214,   179,   249,
     325,   191,   140,   206,   180,   475,   215,   234,   477,   181,
     209,   182,   424,   360,   210,   183,   215,   278,   227,   201,
     379,    20,    21,     6,    91,   235,    95,    22,    23,     9,
      24,    25,   140,    27,    11,   240,   215,   306,   307,   143,
      29,   393,   424,   216,   384,   243,   220,   144,   145,   146,
      96,   224,   147,   326,   148,    33,    34,   228,   103,   149,
     150,   136,    38,    39,   388,   389,   142,   151,   152,   154,
     155,   156,   170,   186,   194,   256,   198,   199,   203,   219,
     204,   259,   215,   315,   207,   256,   264,   352,   222,   416,
     421,   226,   274,   268,   257,   229,   223,   231,   275,     7,
     233,   236,   286,   237,   257,  -263,   241,    97,   436,   293,
     441,   317,   294,   242,   446,    97,   -11,   394,   399,   270,
     298,   377,   429,   260,   304,   308,   463,   455,   272,  -105,
     273,   187,   312,   282,   291,    20,    21,   295,   285,   287,
     290,    22,    23,   300,    24,    25,   314,    27,   318,   465,
     175,   330,   467,   324,    29,   335,   337,   277,   327,   339,
     471,   472,   341,   345,     7,   334,   348,   331,   332,    33,
      34,   344,   353,   478,   354,   356,    38,    39,   359,   368,
    -262,   367,   371,   382,   369,   372,   347,   378,   399,   386,
     312,   385,   399,   387,   399,   355,   390,   391,   399,   392,
      20,    21,   130,   401,   403,   407,    22,    23,   366,    24,
      25,   409,    27,   408,   -29,   420,   422,   428,     7,    29,
     373,   374,   434,   399,   417,   442,   399,   443,    46,   140,
     383,   445,   448,   453,    33,    34,   451,   454,   456,   459,
      37,    38,    39,   462,   466,   132,   316,   133,   310,   358,
     258,   400,   323,   418,   284,    21,   361,   402,   406,   338,
      22,    23,   239,    24,    25,   247,   410,   245,   447,   244,
     413,   470,   246,    29,   411,   134,   476,     0,   474,    46,
     248,   225,     0,   419,     0,     0,     0,   423,    33,    34,
       0,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,     0,     0,   318,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     0,     0,     9,     0,
       0,    10,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     0,    13,     0,   464,     0,    14,     0,    15,    16,
      17,     0,     0,   468,    18,    19,   327,     0,     0,    20,
      21,   473,     0,     0,     0,    22,    23,     0,    24,    25,
      26,    27,     0,     0,   479,    28,     0,     0,    29,     0,
      30,    31,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,    35,    36,    37,
      38,    39,     5,     6,     7,     0,     8,     0,     0,     9,
       0,     0,    10,   414,    11,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,    15,
      16,    17,     0,     0,     0,    18,    19,     0,     0,     0,
      20,    21,     0,     0,     0,     0,    22,    23,     0,    24,
      25,     0,    27,     0,     0,     0,    28,     0,     0,    29,
       0,    30,    31,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,     0,     0,    35,    36,
      37,    38,    39,     5,     6,     7,     0,     8,     0,     0,
       9,     0,     0,    10,     0,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,    16,    17,     0,     0,     0,    18,    19,     0,     0,
       0,    20,    21,     0,     0,     0,     0,    22,    23,     0,
      24,    25,     0,    27,     0,     0,     0,    28,     0,     0,
      29,     0,    30,    31,     5,    32,     7,     0,     8,     0,
       0,     0,     0,     0,    10,    33,    34,    12,     0,    35,
      36,    37,    38,    39,     0,     0,     0,     0,     0,    14,
       0,     0,    16,    17,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,     0,     0,     0,     0,    22,    23,
       0,    24,    25,   265,    27,     0,     0,     0,    28,     0,
       0,    29,     0,    30,    31,     5,    32,     7,     0,     8,
       0,     0,     0,     0,     0,    10,    33,    34,    12,     0,
       0,     0,    37,    38,    39,     0,     0,     0,     0,     0,
      14,     0,     0,    16,    17,     0,     0,     0,     0,    19,
       0,     0,     0,    20,    21,     7,     0,     0,     0,    22,
      23,     0,    24,    25,   309,    27,     0,     0,     0,    28,
       0,     0,    29,     0,    30,    31,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
       0,    20,    21,    37,    38,    39,     0,    22,    23,     7,
      24,    25,     0,    27,     0,     0,     0,     0,     0,     0,
      29,   317,     0,     7,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,   469,     0,
       0,     0,    38,    39,     0,    20,    21,     0,     0,     0,
       0,    22,    23,     0,    24,    25,     0,    27,     0,    20,
      21,     7,     0,     0,    29,    22,    23,     0,    24,    25,
       0,    27,     0,     0,     0,     7,     0,     0,    29,    33,
      34,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    33,    34,     0,     0,    20,    21,     0,
      38,    39,     0,    22,    23,     0,    24,    25,     0,    27,
       0,   395,    21,     7,     0,     0,    29,    22,    23,     0,
      24,    25,     0,    27,     0,     0,     0,     0,     0,     0,
      29,    33,    34,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    33,    34,     0,     0,     0,
      21,     0,    38,    39,     0,    22,    23,     0,    24,    25,
       0,    27,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
      38,    39
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   139,    12,   111,    14,    15,   114,   209,
     203,   220,    15,    18,    82,   224,    21,    22,    23,   228,
      27,   194,   330,     6,    15,    30,    31,    15,    21,    21,
      35,    36,    32,    27,    24,    22,     3,    37,   231,    10,
       6,    22,    54,   236,     6,    34,    13,    21,     0,    47,
      24,    40,    64,    30,    16,    21,    23,    34,    25,    51,
      51,    51,    55,    30,    56,    55,    60,    31,    15,    33,
     424,    42,    70,   381,   428,    62,   430,    51,    52,   272,
     434,    48,    40,   292,    72,     9,    53,    77,    75,    27,
      77,    51,   301,    31,     9,    55,    63,    15,    65,   167,
      24,    16,    60,   108,    71,   459,    34,    56,   462,    76,
      51,    78,    40,   306,    55,    82,    34,    77,   123,   102,
     329,    45,    46,     8,    55,    74,    55,    51,    52,    14,
      54,    55,    60,    57,    19,   142,    34,    15,    16,    29,
      64,   350,    40,   111,   337,   153,   114,    37,    38,    39,
      55,   119,    42,    77,    44,    79,    80,   125,    55,    49,
      50,    81,    86,    87,    26,    27,     5,    57,    58,    10,
      12,     4,    79,    16,    51,   175,    42,    41,    15,    68,
      16,   186,    34,   251,    15,   185,   191,   293,    72,   382,
     390,    73,   197,   193,   175,    16,    34,    15,   198,     9,
       6,    15,   207,    16,   185,    15,    57,   215,   401,   214,
     403,    21,   215,    42,   407,   223,    72,   353,   354,    72,
     223,   327,   395,    55,   229,   233,   435,   420,    15,    41,
      16,    21,   237,    16,    30,    45,    46,    16,    55,    55,
      55,    51,    52,    16,    54,    55,    55,    57,   253,   442,
      30,    43,   445,    72,    64,    16,    15,    55,   263,     6,
     453,   454,    55,    16,     9,   273,    16,    72,    72,    79,
      80,    72,    42,   466,    42,    16,    86,    87,    27,    21,
      15,    72,    15,    15,    73,    56,   291,    16,   424,    55,
     295,    72,   428,    16,   430,   300,    16,    24,   434,    16,
      45,    46,   307,    15,    15,    15,    51,    52,   313,    54,
      55,    16,    57,    21,    72,    15,    55,    15,     9,    64,
     325,   326,    16,   459,    27,    15,   462,    33,   330,    60,
     335,    15,    15,    15,    79,    80,    16,    15,    15,    15,
      85,    86,    87,    16,    15,    42,   252,    42,   235,   304,
     185,   356,   255,   387,   204,    46,   307,   362,   364,   276,
      51,    52,   140,    54,    55,   159,   371,   155,   409,   154,
     375,   451,   156,    64,   371,    42,   460,    -1,   457,   381,
     162,   119,    -1,   388,    -1,    -1,    -1,   392,    79,    80,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,
      -1,     7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,   439,    -1,    32,    -1,    34,    35,
      36,    -1,    -1,   448,    40,    41,   451,    -1,    -1,    45,
      46,   456,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,   469,    61,    -1,    -1,    64,    -1,
      66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,
      86,    87,     7,     8,     9,    -1,    11,    -1,    -1,    14,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    64,
      -1,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    86,    87,     7,     8,     9,    -1,    11,    -1,    -1,
      14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,
      64,    -1,    66,    67,     7,    69,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    79,    80,    20,    -1,    83,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      -1,    64,    -1,    66,    67,     7,    69,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    79,    80,    20,    -1,
      -1,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    46,     9,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    -1,    64,    -1,    66,    67,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      -1,    45,    46,    85,    86,    87,    -1,    51,    52,     9,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    21,    -1,     9,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    24,    -1,
      -1,    -1,    86,    87,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,    45,
      46,     9,    -1,    -1,    64,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,     9,    -1,    -1,    64,    79,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    -1,    45,    46,    -1,
      86,    87,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    45,    46,     9,    -1,    -1,    64,    51,    52,    -1,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,
      46,    -1,    86,    87,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
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
      66,    67,    69,    79,    80,    83,    84,    85,    86,    87,
      91,    93,    95,    96,    97,   108,   109,   111,   112,   117,
     122,   123,   124,   125,   126,   127,   128,   129,   132,   133,
     134,   143,   145,   146,   147,   148,   149,   151,   152,   157,
     169,   171,   172,   173,   174,   176,   177,   178,   179,   181,
     183,   185,   186,   187,   189,   194,   197,   207,   212,   228,
     169,    55,   142,   169,   227,    55,    55,   176,   205,   176,
     205,   135,   229,    55,   169,   138,   141,   142,    15,    99,
     101,   169,   193,   208,   169,   190,   191,   196,   228,   169,
     192,   195,   173,    70,   119,   169,   169,   207,   169,   159,
     169,   207,    93,    97,   212,   110,    81,   153,   118,    40,
      60,   170,     5,    29,    37,    38,    39,    42,    44,    49,
      50,    57,    58,   175,    10,    12,     4,    47,    70,   180,
      54,    64,   182,    22,    62,    75,    77,   184,   185,   188,
      79,     3,    13,    23,    25,    30,    48,    53,    63,    65,
      71,    76,    78,    82,   115,   116,    16,    21,    51,    56,
       9,    16,    15,    51,    51,    98,   206,    42,    42,    41,
      21,   142,   144,    15,    16,     6,   169,    15,    24,    51,
      55,    77,   103,   105,    15,    34,   118,   211,   225,    68,
     118,   225,    72,    34,   118,   222,    73,   169,   118,    16,
     131,    15,   158,     6,    56,    74,    15,    16,   171,   172,
     173,    57,    42,   176,   177,   178,   179,   181,   183,   185,
      21,    24,    51,    52,   198,   113,   207,   228,   113,   169,
      55,    94,   214,   215,   169,    56,   109,   163,   207,   213,
      72,    99,    15,    16,   169,   207,    51,    55,    77,   136,
     137,   139,    16,   163,   138,    55,   169,    55,   105,   106,
      55,    30,   100,   169,   205,    16,   104,   104,   205,   104,
      16,   120,   121,   104,   169,   163,    15,    16,   176,    56,
     111,   163,   169,    27,    55,   185,    94,    21,   169,   199,
     201,   202,   114,   115,    72,    24,    77,   169,   218,   219,
      43,    72,    72,   163,   176,    16,   130,    15,   139,     6,
     140,    55,   150,   107,    72,    16,   102,   169,    16,   104,
     209,   210,   225,    42,    42,   169,    16,   104,   130,    27,
     163,   159,    31,    33,   154,   160,   169,    72,    21,    73,
     200,    15,    56,   169,   169,    30,   220,   225,    16,   104,
     108,   164,    15,   169,   163,    72,    55,    16,    26,    27,
      16,    24,    16,   104,   171,    45,   165,   167,   168,   171,
     169,    15,   169,    15,    27,   155,   160,    15,    21,    16,
     169,   202,   216,   169,    18,   108,   163,    27,   137,   169,
      15,   105,    55,   169,    40,   224,   225,   226,    15,    99,
      40,   221,   222,   223,    16,   166,   163,     6,    16,   161,
     162,   163,    15,    33,   156,    15,   163,   201,    15,   203,
     204,    16,   217,    15,    15,   163,    15,   167,   167,    15,
     167,   167,    16,   104,   169,   163,    15,   163,   169,    24,
     219,   163,   163,   169,   224,   167,   221,   167,   163,   169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   123,   124,   124,   124,   124,   124,   125,
     126,   127,   127,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   134,   135,   135,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     147,   148,   147,   147,   147,   147,   147,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   183,   183,   184,   184,   184,   184,   185,
     185,   186,   186,   186,   187,   187,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   198,   198,   198,   199,   199,   200,   200,   201,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   214,   215,   215,   216,
     216,   217,   217,   218,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     1,     0,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     0,     3,     0,     3,     2,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     0,     3,     0,
       1,     1,     2,     4,     2,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     2,     3,     0,     1,     3,     1,
       3,     3,     3,     0,     5,     2,     4,     2,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     8,     5,     5,
       0,     7,     4,     9,     6,     6,     6,     4,     3,     3,
       0,     3,     0,     5,     3,     0,     3,     1,     3,     1,
       1,     1,     2,     0,     1,     4,     2,     1,     3,     1,
       3,     2,     1,     1,     4,     3,     2,     1,     4,     0,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     4,     2,     2,     0,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1,     0,     2,     1,     2,     3,     2,     3,
       4,     3,     3,     3,     2,     3,     2,     3,     0,     3,
       1,     4,     1,     0,     1,     0,     2,     1,     3,     2,
       3,     0,     3,     2,     4,     2,     5,     0,     1,     2,
       1,     2,     7,     4,     1,     0,     2,     3,     0,     3,
       0,     3,     0,     2,     4,     2,     2,     3,     1,     0,
       1,     1,     5,     4,     3,     2,     1,     1,     5,     4,
       3,     2,     1,     3,     2,     1,     2,     0
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
#line 79 "includes/parse.y" /* yacc.c:1661  */
    {
            reverse(f);
        }
#line 1946 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 96 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1952 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 11:
#line 97 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 1958 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 16:
#line 109 "includes/parse.y" /* yacc.c:1661  */
    {
            func.line = (yylsp[-4]).first_line;
            func.column = (yylsp[-4]).first_column - 1;
            func.funcname = (yyvsp[-3].str);
            if (isfinally)
            {   
                func.complexity = complexity;
            }
            else
            {   func.complexity = complexity + trycomplexity;}
            
            if (func.column == 0) 
            {    
                f.push(func);
                trycomplexity = 0;
                complexity = 1;
            }
            else
                complexity++;

            delete[] (yyvsp[-3].str);

        }
#line 1986 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 17:
#line 134 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 1992 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 18:
#line 135 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 1998 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 25:
#line 150 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2004 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 27:
#line 154 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-1].str);}
#line 2010 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 28:
#line 155 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2016 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 31:
#line 162 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2022 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 52:
#line 198 "includes/parse.y" /* yacc.c:1661  */
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
#line 2096 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 268 "includes/parse.y" /* yacc.c:1661  */
    {
			if((yyvsp[0].node) != 0)
			{
				(yyval.node) = new AsgBinaryNode((yyvsp[-1].node),(yyvsp[0].node));
				pool.add((yyval.node));
			}
		}
#line 2108 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 277 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2114 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 55:
#line 278 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2120 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 56:
#line 281 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2126 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 282 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2132 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 58:
#line 286 "includes/parse.y" /* yacc.c:1661  */
    {
			if ((yyvsp[0].node) == 0)
			{
				(yyval.node) = (yyvsp[-1].node);
			}
			else
			{
				(yyval.node) = new AsgBinaryNode((yyvsp[-1].node),(yyvsp[0].node));
				pool.add((yyval.node));
			}
		}
#line 2148 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 59:
#line 297 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2154 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 60:
#line 300 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '0';}
#line 2160 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 61:
#line 301 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '1';}
#line 2166 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 62:
#line 302 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '2';}
#line 2172 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 63:
#line 303 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '3';}
#line 2178 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 64:
#line 304 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '4';}
#line 2184 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 65:
#line 305 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2190 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 66:
#line 306 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2196 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 67:
#line 307 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2202 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 308 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2208 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 309 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 0;}
#line 2214 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 70:
#line 310 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 11;}
#line 2220 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 71:
#line 311 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = 12;}
#line 2226 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 72:
#line 315 "includes/parse.y" /* yacc.c:1661  */
    {
			(yyval.node) = (yyvsp[0].node);
			(yyvsp[0].node)->eval()->print();
		}
#line 2235 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 319 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2241 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 74:
#line 322 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2247 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 75:
#line 323 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2253 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 76:
#line 326 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2259 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 77:
#line 327 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2265 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 109:
#line 395 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-2].str); delete[] (yyvsp[0].str);}
#line 2271 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 110:
#line 396 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2277 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 111:
#line 399 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2283 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 119:
#line 415 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2289 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 120:
#line 416 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2295 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 121:
#line 419 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-1].str);}
#line 2301 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 122:
#line 422 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[0].str);}
#line 2307 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 129:
#line 435 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2313 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 130:
#line 436 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2319 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 131:
#line 437 "includes/parse.y" /* yacc.c:1661  */
    {tmp = complexity; }
#line 2325 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 137:
#line 444 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2331 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 138:
#line 445 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2337 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 139:
#line 448 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2343 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 145:
#line 461 "includes/parse.y" /* yacc.c:1661  */
    {
		if(isfinally == 0) 
			complexity++;  
		else 
			complexity = tmp;  
	}
#line 2354 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 146:
#line 467 "includes/parse.y" /* yacc.c:1661  */
    {trycomplexity++;}
#line 2360 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 151:
#line 479 "includes/parse.y" /* yacc.c:1661  */
    {	
		isfinally = 1;
	}
#line 2368 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 158:
#line 496 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2374 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 159:
#line 497 "includes/parse.y" /* yacc.c:1661  */
    {complexity++;}
#line 2380 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 176:
#line 532 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2386 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 177:
#line 533 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2392 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 178:
#line 536 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2398 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 179:
#line 537 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2404 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 180:
#line 540 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2410 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 181:
#line 541 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2416 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 182:
#line 544 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2422 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 183:
#line 545 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2428 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 184:
#line 548 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2434 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 185:
#line 549 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2440 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 186:
#line 552 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2446 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 187:
#line 553 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2452 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 199:
#line 569 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2458 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 200:
#line 570 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2464 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 201:
#line 573 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2470 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 202:
#line 574 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2476 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 203:
#line 577 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2482 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 204:
#line 578 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2488 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 205:
#line 582 "includes/parse.y" /* yacc.c:1661  */
    {
		(yyval.node) = (yyvsp[0].node);
		//$1->eval()->print();
	}
#line 2497 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 206:
#line 586 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2503 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 209:
#line 594 "includes/parse.y" /* yacc.c:1661  */
    { 
			(yyval.node) = (yyvsp[0].node); 
			//pool.add($$); 
			//($$)->eval()->print();
		}
#line 2513 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 210:
#line 600 "includes/parse.y" /* yacc.c:1661  */
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
#line 2537 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 211:
#line 621 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '+';}
#line 2543 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 212:
#line 622 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '-';}
#line 2549 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 213:
#line 625 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2555 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 214:
#line 627 "includes/parse.y" /* yacc.c:1661  */
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
#line 2593 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 215:
#line 662 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '*';}
#line 2599 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 216:
#line 663 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '/';}
#line 2605 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 217:
#line 664 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.op) = '%';}
#line 2611 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 218:
#line 665 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '1';}
#line 2617 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 219:
#line 669 "includes/parse.y" /* yacc.c:1661  */
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
#line 2642 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 220:
#line 689 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2648 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 221:
#line 692 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '+';}
#line 2654 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 222:
#line 693 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '-';}
#line 2660 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 223:
#line 694 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.op) = '~';}
#line 2666 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 224:
#line 698 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[-3].node) && (yyvsp[0].node))
		{
			(yyval.node) = new DbStarBinaryNode((yyvsp[-3].node),(yyvsp[0].node));
			pool.add((yyval.node));
		}
	}
#line 2678 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 225:
#line 706 "includes/parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[0].node)) 
		{

		}
		else 
			(yyval.node) = (yyvsp[-1].node);
	}
#line 2691 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 227:
#line 717 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2697 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 228:
#line 720 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2703 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 229:
#line 721 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2709 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 230:
#line 722 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2715 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 231:
#line 723 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2721 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 232:
#line 725 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new IdentNode((yyvsp[0].str));
				delete[] (yyvsp[0].str);
				pool.add((yyval.node));
			}
#line 2731 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 233:
#line 731 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new IntLiteral((yyvsp[0].intNumber));
				pool.add((yyval.node));
			}
#line 2740 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 234:
#line 736 "includes/parse.y" /* yacc.c:1661  */
    {
				(yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
				pool.add((yyval.node));
			}
#line 2749 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 235:
#line 740 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2755 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 236:
#line 743 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2761 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 237:
#line 744 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2767 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 238:
#line 747 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2773 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 239:
#line 748 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2779 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 248:
#line 767 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2785 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 249:
#line 768 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-2].node);}
#line 2791 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 252:
#line 775 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2797 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 253:
#line 776 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = 0;}
#line 2803 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 254:
#line 777 "includes/parse.y" /* yacc.c:1661  */
    { (yyval.node) = 0; delete[] (yyvsp[0].str);}
#line 2809 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 282:
#line 833 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-5].str);}
#line 2815 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 283:
#line 834 "includes/parse.y" /* yacc.c:1661  */
    {delete[] (yyvsp[-2].str);}
#line 2821 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 286:
#line 841 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2827 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 293:
#line 856 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2833 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 294:
#line 857 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2839 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 295:
#line 858 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = 0;}
#line 2845 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 296:
#line 861 "includes/parse.y" /* yacc.c:1661  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2851 "parse.tab.c" /* yacc.c:1661  */
    break;


#line 2855 "parse.tab.c" /* yacc.c:1661  */
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
#line 905 "includes/parse.y" /* yacc.c:1906  */


#include <stdio.h>

void reverse(std::stack<struct funcInfo> f)
{
    while(!f.empty())
    {
        std::cout << "(\"" << f.top().line << ":" << f.top().column << ": "
                      <<  "'" << f.top().funcname << "'\", "  
                      << f.top().complexity << ")" << std::endl;

        f.pop();
    }

}
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
