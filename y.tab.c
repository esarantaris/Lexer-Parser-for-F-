/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "calc.y" /* yacc.c:339  */

void yyerror (char *s);
#include <stdio.h>     /*-- C declarations used in actions --*/
#include <stdlib.h>
#include <string.h>

char* s1;
int ff=0;

extern int yylineno;

extern int exists_while;
extern int return_keyword;
extern int main_declaration;


#line 83 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    number = 258,
    identifier = 259,
    REAL_POSITIVES = 260,
    ART_OPERATORS = 261,
    RATIONAL_OPERATORS = 262,
    EQUAL_OPERATOR = 263,
    LOGICAL_OPERATORS = 264,
    ACT_OPERATORS = 265,
    ART_NEG = 266,
    BOOLEAN_CONSTANTS = 267,
    DATA_TYPES = 268,
    COLON = 269,
    COMMA = 270,
    LEFT_SQUARE_PAR = 271,
    RIGHT_SQUARE_PAR = 272,
    LEFT_PAR = 273,
    RIGHT_PAR = 274,
    STATIC = 275,
    VOID = 276,
    BEG = 277,
    END = 278,
    ART1_OPERATORS = 279,
    RETURN_KEYWORD = 280,
    IFS = 281,
    EIS = 282,
    ELS = 283,
    WHILE_KWD = 284,
    DO = 285,
    BRK = 286,
    CONT = 287,
    FOR_LOOP = 288,
    CONSTANT_CHARACTERS = 289,
    CONSTANT_STRINGS = 290,
    CLASS = 291,
    PUBLIC = 292,
    PRIVATE = 293,
    NEW = 294,
    DOT = 295,
    MAIN = 296,
    EXCLAMATION_MARK = 297
  };
#endif
/* Tokens.  */
#define number 258
#define identifier 259
#define REAL_POSITIVES 260
#define ART_OPERATORS 261
#define RATIONAL_OPERATORS 262
#define EQUAL_OPERATOR 263
#define LOGICAL_OPERATORS 264
#define ACT_OPERATORS 265
#define ART_NEG 266
#define BOOLEAN_CONSTANTS 267
#define DATA_TYPES 268
#define COLON 269
#define COMMA 270
#define LEFT_SQUARE_PAR 271
#define RIGHT_SQUARE_PAR 272
#define LEFT_PAR 273
#define RIGHT_PAR 274
#define STATIC 275
#define VOID 276
#define BEG 277
#define END 278
#define ART1_OPERATORS 279
#define RETURN_KEYWORD 280
#define IFS 281
#define EIS 282
#define ELS 283
#define WHILE_KWD 284
#define DO 285
#define BRK 286
#define CONT 287
#define FOR_LOOP 288
#define CONSTANT_CHARACTERS 289
#define CONSTANT_STRINGS 290
#define CLASS 291
#define PUBLIC 292
#define PRIVATE 293
#define NEW 294
#define DOT 295
#define MAIN 296
#define EXCLAMATION_MARK 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 20 "calc.y" /* yacc.c:355  */
int num; char* id; char* art_op; char* ra_op; char* eq_op; char* log_op;
        char* act_op; char* bln_const; float re; char* data_tp; char* cln; char* art1_op;
        char* cm; char* LS; char* RS; char* LP; char* RP; char * stk; char* vd; char* bg;
        char* en; char* rek; char* ifs; char* eis; char* els; char* whl; char* dwhl; 
        char* brk; char* cont; char* art_neg; char* for_loop; char* cnst_strings; char* cnst_char;
        char* class; char* public; char* private; char* new; char* dot; char* main; char* ex_mark;

#line 215 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   915

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   104,   107,   108,   111,
     112,   115,   116,   119,   120,   123,   124,   130,   133,   136,
     139,   142,   146,   147,   150,   151,   152,   153,   157,   158,
     159,   160,   163,   164,   165,   169,   170,   171,   172,   173,
     174,   175,   178,   179,   180,   181,   182,   188,   189,   192,
     193,   196,   199,   202,   203,   204,   205,   209,   210,   211,
     213,   215,   217,   221,   222,   225,   226,   227,   230,   231,
     232,   235,   236,   237,   239,   240,   241,   242,   244,   246,
     250,   251,   252,   254,   256,   258,   262,   263,   264,   265,
     266,   267,   268,   271,   272,   278,   279,   280,   281,   284,
     285,   288,   289,   290,   291,   292,   293,   296,   297,   298,
     299,   300,   301,   304,   305,   308,   309,   310,   311,   312,
     313,   316,   317,   318,   319,   320,   321,   322,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   337,   343,
     344,   347,   348,   351,   354,   355,   358,   359,   360,   363,
     368,   369,   372,   373,   374,   377,   383,   384,   387,   388,
     391,   392,   395,   396,   397,   399,   400,   402,   403,   405,
     406,   408,   409,   410,   413,   414,   415,   416,   419,   420,
     421,   422,   423,   424,   427,   428,   431,   432,   435,   436,
     437,   438,   439,   440,   441,   446,   447
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "number", "identifier", "REAL_POSITIVES",
  "ART_OPERATORS", "RATIONAL_OPERATORS", "EQUAL_OPERATOR",
  "LOGICAL_OPERATORS", "ACT_OPERATORS", "ART_NEG", "BOOLEAN_CONSTANTS",
  "DATA_TYPES", "COLON", "COMMA", "LEFT_SQUARE_PAR", "RIGHT_SQUARE_PAR",
  "LEFT_PAR", "RIGHT_PAR", "STATIC", "VOID", "BEG", "END",
  "ART1_OPERATORS", "RETURN_KEYWORD", "IFS", "EIS", "ELS", "WHILE_KWD",
  "DO", "BRK", "CONT", "FOR_LOOP", "CONSTANT_CHARACTERS",
  "CONSTANT_STRINGS", "CLASS", "PUBLIC", "PRIVATE", "NEW", "DOT", "MAIN",
  "EXCLAMATION_MARK", "$accept", "line", "classes", "class_body",
  "class_functions", "func_or_funz", "funz", "public_or_private",
  "functions", "void_func", "func_ids", "MAIN_BODY", "BODY", "func_stmts",
  "func_return", "for_loop_statement", "for_loop_body",
  "do_while_statement", "while_statement", "if_statement", "structure",
  "long_or_short", "stmt", "multiple_else_if", "if_body_short", "if_body",
  "possible_stmts", "if_par", "calculations", "call_function",
  "func_arguments", "single_calc", "one_or_more", "signed_value",
  "variables_with_art1", "to_calc_with", "calc_par", "with_exclamation",
  "boolean_exp", "boolean_for_if", "boolean_if_par", "inner_boolean",
  "boolean_par", "boolean_calc", "more_logical", "more_par", "variables",
  "more_class_copies", "declaration", "multiple", "mtrx", "no", "par",
  "with_id", "Mtrx_size_values", "operators", YY_NULLPTR
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
     295,   296,   297
};
# endif

#define YYPACT_NINF -316

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-316)))

#define YYTABLE_NINF -163

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     640,   159,  -316,    84,  -316,     7,     7,   685,    24,  -316,
    -316,    59,   591,  -316,  -316,    10,  -316,  -316,  -316,  -316,
      87,  -316,    93,   117,   102,    81,   290,    29,   418,  -316,
    -316,  -316,    21,  -316,  -316,    23,   685,   685,   126,   766,
     216,   116,   137,  -316,  -316,  -316,  -316,  -316,   152,  -316,
     141,   176,   199,   204,   190,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,   184,   217,   214,   236,  -316,  -316,
     249,  -316,   257,  -316,    82,  -316,   182,   256,   244,  -316,
    -316,   262,   391,   246,   265,  -316,  -316,   167,   252,   274,
    -316,  -316,  -316,   275,  -316,   290,  -316,  -316,    -3,    29,
    -316,    64,  -316,  -316,   281,   284,   271,   308,   414,  -316,
    -316,   439,   309,  -316,   274,  -316,   312,   323,  -316,   195,
    -316,   326,   327,  -316,  -316,  -316,  -316,  -316,   314,   780,
     328,   331,    48,   332,   337,   338,   339,  -316,  -316,     7,
    -316,  -316,   138,   383,   340,  -316,   273,  -316,  -316,    99,
     336,   566,   199,   225,   341,  -316,  -316,   356,   343,  -316,
      50,  -316,  -316,   345,   349,   358,  -316,  -316,  -316,  -316,
    -316,   290,  -316,   512,   244,   345,   374,   218,   365,   368,
     167,    73,   674,   674,  -316,   674,   363,  -316,  -316,   439,
       7,   685,   848,   871,  -316,   372,   375,  -316,  -316,  -316,
     290,  -316,  -316,  -316,  -316,   384,   290,   204,  -316,  -316,
    -316,  -316,    83,   388,   378,   407,   390,   399,   409,   133,
     419,  -316,   416,   426,   199,   142,   422,  -316,  -316,   450,
    -316,  -316,  -316,  -316,  -316,   358,  -316,  -316,   436,  -316,
     365,  -316,  -316,    22,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,   430,  -316,   699,  -316,  -316,   437,  -316,   438,   882,
     882,   445,  -316,  -316,   448,   447,    32,    71,  -316,  -316,
     453,   532,   442,   297,   532,   199,   199,   199,   199,   532,
     455,  -316,  -316,  -316,   358,  -316,  -316,  -316,   468,  -316,
     685,   882,   452,  -316,  -316,  -316,  -316,  -316,   476,   685,
     233,  -316,  -316,   122,   273,  -316,  -316,   803,  -316,  -316,
    -316,  -316,  -316,   470,   471,   532,   151,   454,   814,  -316,
     837,  -316,  -316,  -316,  -316,  -316,   532,   358,  -316,  -316,
    -316,   463,     7,   181,   469,  -316,   467,   477,   480,   483,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,   151,  -316,  -316,
    -316,  -316,  -316,   472,  -316,   729,   685,   532,   473,   484,
    -316,     7,   882,  -316,  -316,   532,  -316,   743,  -316,  -316,
     882,  -316
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   180,     0,    42,     0,     0,     0,     0,     7,
       8,     0,     0,     6,     9,     0,     5,     4,     3,     2,
      13,   117,    12,     0,   178,     0,     0,     0,     0,   131,
     115,   177,     0,   181,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    97,    96,    95,    94,     0,    77,
       0,     0,     0,     0,     0,     1,    19,    20,    14,    21,
      18,    17,    16,    15,    25,    24,     0,     0,    11,    10,
     182,   176,     0,   148,   150,   149,     0,   174,     0,   129,
     130,     0,     0,   157,   127,   151,   155,   134,   152,     0,
     159,   172,   128,   171,   173,     0,   132,   198,   199,     0,
     203,     0,   200,   120,   125,   126,     0,   121,     0,   116,
     162,     0,     0,   161,   167,   166,     0,   165,   168,    73,
      72,     0,     0,   108,   112,   111,   110,   109,     0,   100,
       0,     0,   150,     0,     0,   161,     0,    98,    99,     0,
      92,    91,   182,     0,     0,    70,     0,    23,    22,     0,
       0,     0,     0,     0,   191,   179,   141,     0,   156,   135,
     137,   136,   140,   161,     0,     0,   118,   160,   146,   215,
     216,     0,   147,     0,     0,     0,     0,     0,   194,     0,
     206,     0,     0,     0,   119,     0,     0,   114,   113,     0,
       0,     0,     0,     0,    78,     0,     0,   101,   107,   106,
       0,    65,    66,    62,    64,     0,     0,     0,    35,    36,
      26,    28,     0,     0,     0,     0,     0,   186,   188,   193,
     190,   183,     0,     0,     0,   153,   154,   145,   142,     0,
     158,   175,   133,   163,   170,   201,   202,   204,     0,   195,
     196,   207,   208,   209,   214,   211,   123,   124,   122,   169,
     164,    75,    83,     0,    74,    79,     0,    81,     0,   102,
     104,     0,    71,    69,     0,    70,     0,     0,    32,    31,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,   192,   143,   144,   138,   139,   205,   197,     0,   210,
       0,     0,    85,    80,    82,   103,   105,    63,     0,     0,
       0,    29,    30,     0,     0,    54,    39,     0,    61,    60,
      59,    58,    57,     0,     0,     0,     0,    46,     0,    41,
       0,   185,   187,   184,   189,    37,     0,   212,   213,    76,
      84,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      27,    52,    53,    56,    55,    40,    45,     0,    51,    50,
      48,    49,    38,    88,    86,     0,     0,     0,     0,     0,
      47,     0,     0,    67,    33,     0,    90,     0,    87,    34,
       0,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -316,  -316,   491,   200,   239,  -316,  -316,   258,     1,  -316,
    -151,  -138,  -255,  -251,   248,    43,   304,   113,   156,     9,
     -17,  -316,  -315,  -200,  -231,   -34,  -316,    -2,     0,   465,
      58,   496,    33,  -316,  -316,  -316,   456,   -28,   449,   -32,
    -100,  -316,  -316,   -24,  -316,  -316,    18,   457,   194,  -144,
     -64,   434,   353,    37,  -316,   451
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,   210,   211,   267,   268,   212,   305,    15,
     214,   319,   306,   307,    43,    44,   144,    45,    46,    47,
      48,   251,   252,   330,    49,   331,   129,    36,    50,    21,
     106,    30,   113,    85,    86,    87,    88,    89,    90,    91,
     116,   117,   118,    92,    93,    94,    51,    31,    52,    71,
      32,   101,   102,   179,   180,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    14,   223,   115,    37,   128,   154,   114,   221,    19,
     158,   186,    64,    59,    66,    28,   136,   354,    22,   119,
     120,    63,   292,   320,   325,    35,    73,    74,    75,   108,
      65,    26,    97,    98,    76,   110,    24,   176,    27,   130,
      28,   111,    53,    16,   112,    29,   366,    99,   127,     5,
     300,    67,   342,   145,   164,    60,   200,   131,    84,    96,
     345,   107,   288,    54,    27,    82,    28,   320,   158,   320,
     169,   352,   156,   135,   228,   170,   242,   243,   154,   115,
     281,   178,   124,   114,    73,    74,    75,   266,   157,   250,
     229,    99,    76,    77,   301,   197,     2,    33,    27,    78,
      28,    68,   364,     3,     4,    34,   156,    69,   208,   209,
     369,   163,     2,    17,   239,    79,    80,    72,   213,    38,
      81,    70,   157,    82,   292,    61,   338,   220,   175,   130,
     137,   321,   322,   323,   324,     2,   292,   205,   127,    33,
    -161,    84,     3,     4,   163,   233,   151,   131,   277,   337,
     234,   138,   125,   152,    27,   140,    18,   115,   256,   258,
      28,   114,   368,    24,     2,   346,   282,    25,    62,    26,
     371,    38,   124,   169,   254,    27,   287,    28,   170,   289,
     349,   139,   351,    29,   219,   159,   160,   161,   253,    25,
     141,    26,   130,   130,    23,   126,   360,    27,   147,    28,
      95,   127,   127,   142,   232,    29,    23,   265,   143,   317,
     131,   131,   146,   269,   238,   107,   107,   241,   107,    73,
     132,    75,   190,   191,   169,   295,   296,    76,    77,   170,
     270,   148,   149,   261,    78,   124,   124,   237,     2,   263,
     246,   247,   125,   248,   222,    38,     2,    73,    74,    75,
     133,   134,   336,    38,   150,    76,    77,   151,    82,   130,
     130,    24,    78,  -162,   152,    27,   165,   153,   127,   127,
     168,   313,  -161,   329,   313,   318,   172,   131,   131,   313,
     312,   173,   335,   312,   174,   126,    82,   123,   312,   314,
     184,   130,   314,    73,    74,    75,   182,   314,   334,   183,
     127,    76,   124,   124,   269,   125,   125,   313,    95,   131,
     208,   209,   316,    27,   309,   313,   312,   309,   313,   318,
     313,   318,   309,   185,   312,   314,   313,   312,   187,   312,
     355,   188,   189,   314,   124,   312,   314,   194,   314,   363,
     192,   193,   198,   215,   314,   199,   201,   215,   126,   126,
     309,   202,   203,   204,   207,   216,   224,   313,   309,   367,
     225,   309,   130,   309,   230,   313,   312,   227,   231,   309,
     130,   127,   125,   125,   312,   314,    28,   123,   235,   127,
     131,    27,   249,   314,   310,   240,   259,   310,   131,   260,
     206,    25,   310,    26,    73,    74,    75,   272,   262,    27,
     309,    28,    76,   110,   125,   124,    23,    29,   309,    95,
     271,   273,   274,   124,   275,   126,   126,    73,    74,    75,
     310,    73,    74,    75,   276,    76,    77,   311,   310,    76,
     311,   310,    78,   310,   278,   311,    95,   103,   279,   310,
     123,   123,    73,    74,    75,   280,   283,   126,    79,    80,
      76,   110,   104,   105,   284,   286,    82,   111,   290,   297,
     293,   294,   298,   311,   315,    23,   299,   304,    23,   347,
     310,   311,   327,    23,   311,   125,   311,   326,   310,   332,
     333,    82,   311,   125,   343,   344,   353,   359,   356,   357,
      83,    83,   100,    83,   215,   365,   358,   339,   300,   361,
      83,    23,   153,    58,   340,    83,   302,   123,   123,    23,
     215,   264,    23,   311,    23,    73,    74,    75,   126,   308,
      23,   311,   308,    76,   110,   303,   126,   308,   109,   155,
      95,   167,   162,   177,   245,     0,     1,     0,   171,   123,
       0,   215,     0,    83,     0,     2,   166,    83,     0,     0,
       0,    23,     3,     4,    82,   308,     0,    40,     5,    23,
      83,     6,     7,   308,   100,     8,   308,     0,   308,    73,
      74,    75,     0,    83,   308,     0,    83,    76,    77,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     1,     0,     0,     0,     0,
     217,   218,     0,     0,     2,   308,     0,     0,    82,     0,
     123,     3,     4,   308,     0,     0,    83,     5,   123,     0,
       6,     7,   226,     0,     8,    56,    57,    11,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,    83,    83,
       0,   236,     0,     0,     1,     0,   244,    83,    83,     0,
      83,     0,     0,     2,    83,     0,     0,     0,     0,     0,
       3,     4,     0,     0,     0,    83,     5,     0,     0,     6,
       7,    83,     0,     8,     9,    10,    11,    73,    74,    75,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     1,
       0,     0,    95,     0,   285,     0,     0,     0,     2,     0,
       0,     0,     0,     1,     0,    38,     0,    39,   104,   105,
      40,     5,     2,     0,     6,     7,    41,    42,     8,    38,
       0,   291,     0,     0,    40,     5,     0,     0,     6,     7,
      41,    42,     8,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     1,     0,    38,
       0,   362,     0,   328,    40,     5,     2,     0,     6,     7,
      41,    42,     8,    38,     0,   370,     0,     0,    40,     5,
       1,     0,     6,     7,    41,    42,     8,     0,     0,     2,
       0,     0,     0,     0,     1,     0,    38,     0,     0,     0,
       0,    40,     5,     2,     0,     6,     7,   121,   122,     8,
      38,     0,     0,     0,     0,    40,     5,     1,     0,     6,
       7,   195,   196,     8,     0,     0,     2,     0,     1,     0,
       0,     0,     0,     3,     4,     0,   341,     2,    40,     5,
       0,     0,     6,     7,     3,     4,     8,   348,     0,    40,
       5,     1,     0,     6,     7,     0,     0,     8,     0,     0,
       2,     0,     1,     0,     0,     0,     0,     3,     4,     0,
     350,     2,    40,     5,     0,     0,     6,     7,    38,     0,
       8,   255,     0,    40,     5,     1,     0,     6,     7,     0,
       0,     8,     0,     0,     2,     0,     1,     0,     0,     0,
       0,    38,     0,     0,   257,     2,    40,     5,     0,     0,
       6,     7,    38,     0,     8,     0,     0,    40,     5,     0,
       0,     6,     7,     0,     0,     8
};

static const yytype_int16 yycheck[] =
{
       0,     0,   153,    35,     6,    39,    70,    35,   152,     0,
      74,   111,    12,    12,     4,    18,    40,   332,     0,    36,
      37,    12,   253,   274,   279,    18,     3,     4,     5,     8,
      12,    10,     3,     4,    11,    12,     4,    40,    16,    39,
      18,    18,    18,     0,    35,    24,   361,    18,    39,    26,
      18,    41,   307,    53,    78,    12,     8,    39,    25,    26,
     315,    28,    40,     4,    16,    42,    18,   318,   132,   320,
       6,   326,    24,    40,    24,    11,     3,     4,   142,   111,
     224,    17,    39,   111,     3,     4,     5,     4,    40,   189,
      40,    18,    11,    12,    23,   129,    13,    13,    16,    18,
      18,    14,   357,    20,    21,    21,    24,    14,    37,    38,
     365,    78,    13,     0,   178,    34,    35,    15,    19,    20,
      39,     4,    40,    42,   355,    12,     4,   151,    95,   129,
      14,   275,   276,   277,   278,    13,   367,   139,   129,    13,
       7,   108,    20,    21,   111,   173,     8,   129,    15,   300,
     174,    14,    39,    15,    16,    14,     0,   189,   192,   193,
      18,   189,   362,     4,    13,   316,    24,     8,    12,    10,
     370,    20,   129,     6,   191,    16,   240,    18,    11,   243,
     318,    29,   320,    24,   151,     3,     4,     5,   190,     8,
      14,    10,   192,   193,     0,    39,   347,    16,    14,    18,
      18,   192,   193,     4,   171,    24,    12,   207,     4,   273,
     192,   193,    22,   212,   177,   182,   183,   180,   185,     3,
       4,     5,    27,    28,     6,   259,   260,    11,    12,    11,
     212,    14,    18,   200,    18,   192,   193,    19,    13,   206,
     182,   183,   129,   185,    19,    20,    13,     3,     4,     5,
      34,    35,    19,    20,    18,    11,    12,     8,    42,   259,
     260,     4,    18,     7,    15,    16,     4,    18,   259,   260,
      24,   271,     7,   290,   274,   274,    24,   259,   260,   279,
     271,     7,   299,   274,     9,   129,    42,    39,   279,   271,
      19,   291,   274,     3,     4,     5,    15,   279,   298,    15,
     291,    11,   259,   260,   303,   192,   193,   307,    18,   291,
      37,    38,    15,    16,   271,   315,   307,   274,   318,   318,
     320,   320,   279,    15,   315,   307,   326,   318,    19,   320,
     332,    19,     9,   315,   291,   326,   318,    23,   320,   356,
      14,    14,    14,   149,   326,    14,    14,   153,   192,   193,
     307,    14,    14,    14,    14,    19,    15,   357,   315,   361,
       4,   318,   362,   320,    19,   365,   357,    24,    19,   326,
     370,   362,   259,   260,   365,   357,    18,   129,     4,   370,
     362,    16,    19,   365,   271,    17,    14,   274,   370,    14,
       7,     8,   279,    10,     3,     4,     5,    19,    14,    16,
     357,    18,    11,    12,   291,   362,   212,    24,   365,    18,
      22,     4,    22,   370,    15,   259,   260,     3,     4,     5,
     307,     3,     4,     5,    15,    11,    12,   271,   315,    11,
     274,   318,    18,   320,    15,   279,    18,    19,    22,   326,
     192,   193,     3,     4,     5,    19,    24,   291,    34,    35,
      11,    12,    34,    35,     4,    19,    42,    18,    28,    14,
      23,    23,    14,   307,    22,   271,    19,    14,   274,    15,
     357,   315,     4,   279,   318,   362,   320,    22,   365,    27,
       4,    42,   326,   370,    14,    14,    23,     4,    19,    22,
      25,    26,    27,    28,   300,    22,    19,   303,    18,    27,
      35,   307,    18,    12,   304,    40,   267,   259,   260,   315,
     316,   207,   318,   357,   320,     3,     4,     5,   362,   271,
     326,   365,   274,    11,    12,   267,   370,   279,    32,    72,
      18,    82,    76,    99,   181,    -1,     4,    -1,    87,   291,
      -1,   347,    -1,    78,    -1,    13,    81,    82,    -1,    -1,
      -1,   357,    20,    21,    42,   307,    -1,    25,    26,   365,
      95,    29,    30,   315,    99,    33,   318,    -1,   320,     3,
       4,     5,    -1,   108,   326,    -1,   111,    11,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,     0,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      34,    35,    -1,    -1,    13,   357,    -1,    -1,    42,    -1,
     362,    20,    21,   365,    -1,    -1,   151,    26,   370,    -1,
      29,    30,   157,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,   174,
      -1,   176,    -1,    -1,     4,    -1,   181,   182,   183,    -1,
     185,    -1,    -1,    13,   189,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,   200,    26,    -1,    -1,    29,
      30,   206,    -1,    33,    34,    35,    36,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,     4,
      -1,    -1,    18,    -1,   229,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,     4,    -1,    20,    -1,    22,    34,    35,
      25,    26,    13,    -1,    29,    30,    31,    32,    33,    20,
      -1,    22,    -1,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    32,    33,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    -1,     4,    -1,    20,
      -1,    22,    -1,   288,    25,    26,    13,    -1,    29,    30,
      31,    32,    33,    20,    -1,    22,    -1,    -1,    25,    26,
       4,    -1,    29,    30,    31,    32,    33,    -1,    -1,    13,
      -1,    -1,    -1,    -1,     4,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    13,    -1,    29,    30,    31,    32,    33,
      20,    -1,    -1,    -1,    -1,    25,    26,     4,    -1,    29,
      30,    31,    32,    33,    -1,    -1,    13,    -1,     4,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    13,    25,    26,
      -1,    -1,    29,    30,    20,    21,    33,    23,    -1,    25,
      26,     4,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,
      13,    -1,     4,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    13,    25,    26,    -1,    -1,    29,    30,    20,    -1,
      33,    23,    -1,    25,    26,     4,    -1,    29,    30,    -1,
      -1,    33,    -1,    -1,    13,    -1,     4,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    23,    13,    25,    26,    -1,    -1,
      29,    30,    20,    -1,    33,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    13,    20,    21,    26,    29,    30,    33,    34,
      35,    36,    44,    45,    51,    52,    58,    60,    61,    62,
      71,    72,    89,    91,     4,     8,    10,    16,    18,    24,
      74,    90,    93,    13,    21,    18,    70,    70,    20,    22,
      25,    31,    32,    57,    58,    60,    61,    62,    63,    67,
      71,    89,    91,    18,     4,     0,    34,    35,    45,    51,
      58,    60,    61,    62,    71,    89,     4,    41,    14,    14,
       4,    92,    15,     3,     4,     5,    11,    12,    18,    34,
      35,    39,    42,    72,    75,    76,    77,    78,    79,    80,
      81,    82,    86,    87,    88,    18,    75,     3,     4,    18,
      72,    94,    95,    19,    34,    35,    73,    75,     8,    74,
      12,    18,    62,    75,    80,    82,    83,    84,    85,    63,
      63,    31,    32,    57,    58,    60,    61,    62,    68,    69,
      71,    89,     4,    34,    35,    75,    86,    14,    14,    29,
      14,    14,     4,     4,    59,    71,    22,    14,    14,    18,
      18,     8,    15,    18,    93,    90,    24,    40,    93,     3,
       4,     5,    79,    75,    86,     4,    72,    81,    24,     6,
      11,    98,    24,     7,     9,    75,    40,    94,    17,    96,
      97,    98,    15,    15,    19,    15,    83,    19,    19,     9,
      27,    28,    14,    14,    23,    31,    32,    68,    14,    14,
       8,    14,    14,    14,    14,    70,     7,    14,    37,    38,
      46,    47,    50,    19,    53,    91,    19,    34,    35,    75,
      86,    92,    19,    53,    15,     4,    72,    24,    24,    40,
      19,    19,    75,    80,    86,     4,    72,    19,    96,    93,
      17,    96,     3,     4,    72,    95,    73,    73,    73,    19,
      83,    64,    65,    70,    63,    23,    68,    23,    68,    14,
      14,    75,    14,    75,    59,    71,     4,    48,    49,    51,
      89,    22,    19,     4,    22,    15,    15,    15,    15,    22,
      19,    92,    24,    24,     4,    72,    19,    93,    40,    93,
      28,    22,    67,    23,    23,    68,    68,    14,    14,    19,
      18,    23,    47,    50,    14,    51,    55,    56,    57,    58,
      60,    61,    62,    71,    89,    22,    15,    93,    51,    54,
      56,    92,    92,    92,    92,    55,    22,     4,    72,    63,
      66,    68,    27,     4,    71,    63,    19,    53,     4,    91,
      46,    23,    55,    14,    14,    55,    53,    15,    23,    54,
      23,    54,    55,    23,    65,    70,    19,    22,    19,     4,
      53,    27,    22,    63,    55,    22,    65,    70,    66,    55,
      22,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    52,    52,    53,    53,    53,    53,    54,    54,
      54,    54,    55,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    57,    57,    57,    58,    58,    59,
      59,    60,    61,    62,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    65,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    71,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    80,
      80,    81,    81,    82,    83,    83,    84,    84,    84,    85,
      86,    86,    87,    87,    87,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     2,     2,     4,     4,     1,     3,
       3,     1,     1,     5,     6,     1,     1,     6,     7,     6,
       7,     6,     1,     2,     2,     4,     3,     5,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     3,     5,     3,     3,     3,     9,     7,     3,
       1,     5,     3,     3,     5,     5,     7,     1,     3,     4,
       5,     4,     5,     1,     3,     2,     4,     6,     2,     6,
       4,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     3,     4,     3,     4,     2,     2,     1,     1,
       1,     1,     1,     3,     3,     2,     3,     1,     4,     4,
       3,     1,     3,     3,     3,     1,     1,     2,     2,     2,
       2,     1,     2,     3,     1,     2,     2,     2,     4,     4,
       2,     2,     3,     4,     4,     3,     2,     2,     1,     1,
       1,     1,     1,     3,     3,     1,     2,     1,     3,     1,
       2,     1,     1,     3,     3,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     3,     2,     2,     1,     3,
       1,     2,     1,     3,     5,     5,     3,     5,     3,     5,
       3,     2,     4,     3,     3,     4,     4,     5,     1,     1,
       1,     3,     3,     1,     3,     4,     1,     2,     2,     2,
       3,     2,     4,     4,     2,     1,     1
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
#line 75 "calc.y" /* yacc.c:1646  */
    {;}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "calc.y" /* yacc.c:1646  */
    {;}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 77 "calc.y" /* yacc.c:1646  */
    {;}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 78 "calc.y" /* yacc.c:1646  */
    {;}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "calc.y" /* yacc.c:1646  */
    {;}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 80 "calc.y" /* yacc.c:1646  */
    {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 81 "calc.y" /* yacc.c:1646  */
    {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 82 "calc.y" /* yacc.c:1646  */
    {;}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 83 "calc.y" /* yacc.c:1646  */
    {;}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 84 "calc.y" /* yacc.c:1646  */
    {;}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 85 "calc.y" /* yacc.c:1646  */
    {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 86 "calc.y" /* yacc.c:1646  */
    {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "calc.y" /* yacc.c:1646  */
    {;}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 88 "calc.y" /* yacc.c:1646  */
    {;}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 89 "calc.y" /* yacc.c:1646  */
    {;}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 90 "calc.y" /* yacc.c:1646  */
    {;}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 91 "calc.y" /* yacc.c:1646  */
    {;}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 92 "calc.y" /* yacc.c:1646  */
    {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 93 "calc.y" /* yacc.c:1646  */
    {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 94 "calc.y" /* yacc.c:1646  */
    {;}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 95 "calc.y" /* yacc.c:1646  */
    {;}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 96 "calc.y" /* yacc.c:1646  */
    {;}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 97 "calc.y" /* yacc.c:1646  */
    {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 98 "calc.y" /* yacc.c:1646  */
    {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 104 "calc.y" /* yacc.c:1646  */
    {;}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "calc.y" /* yacc.c:1646  */
    {;}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "calc.y" /* yacc.c:1646  */
    {;}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 111 "calc.y" /* yacc.c:1646  */
    {;}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 112 "calc.y" /* yacc.c:1646  */
    {;}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "calc.y" /* yacc.c:1646  */
    {;}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "calc.y" /* yacc.c:1646  */
    {;}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "calc.y" /* yacc.c:1646  */
    {;}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "calc.y" /* yacc.c:1646  */
    {;}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 123 "calc.y" /* yacc.c:1646  */
    {;}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "calc.y" /* yacc.c:1646  */
    {;}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 130 "calc.y" /* yacc.c:1646  */
    {if(return_keyword<1){printf("\nMissing Return Value");
                                                                  printf("\nIn Line: %d\n", yylineno); return;}
                                                                  else {return_keyword=0;}}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 133 "calc.y" /* yacc.c:1646  */
    {if(return_keyword<1){printf("\nMissing Return Value");
                                                                           printf("\nIn Line: %d\n", yylineno); return;}
                                                                           else {return_keyword=0;}}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "calc.y" /* yacc.c:1646  */
    {if(return_keyword>0){printf("\nA Void Function Cannot Return Value ");
                                                                printf("\nIn Line: %d\n", yylineno); return;}
                                                                else {return_keyword=0;}}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 139 "calc.y" /* yacc.c:1646  */
    {if(return_keyword>0){printf("\nA Void Function Cannot Return Value ");
                                                                         printf("\nIn Line: %d\n", yylineno); return;}
                                                                         else {return_keyword=0;}}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 142 "calc.y" /* yacc.c:1646  */
    {if(main_declaration>1){printf("\nMain Function Cannot Be Redeclared ");
                                                               printf("\nIn Line: %d\n", yylineno); return;}}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 146 "calc.y" /* yacc.c:1646  */
    {;}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 147 "calc.y" /* yacc.c:1646  */
    {;}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 150 "calc.y" /* yacc.c:1646  */
    {;}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 151 "calc.y" /* yacc.c:1646  */
    {;}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 152 "calc.y" /* yacc.c:1646  */
    {;}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 153 "calc.y" /* yacc.c:1646  */
    {;}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 157 "calc.y" /* yacc.c:1646  */
    {;}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 158 "calc.y" /* yacc.c:1646  */
    {;}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 159 "calc.y" /* yacc.c:1646  */
    {;}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 160 "calc.y" /* yacc.c:1646  */
    {;}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 163 "calc.y" /* yacc.c:1646  */
    {;}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 164 "calc.y" /* yacc.c:1646  */
    {;}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 165 "calc.y" /* yacc.c:1646  */
    {printf("\nCannot Declare Function Inside Another Function ");
                               printf("In Line: %d\n", yylineno); return;}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 169 "calc.y" /* yacc.c:1646  */
    {;}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 170 "calc.y" /* yacc.c:1646  */
    {;}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 171 "calc.y" /* yacc.c:1646  */
    {;}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 172 "calc.y" /* yacc.c:1646  */
    {;}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 173 "calc.y" /* yacc.c:1646  */
    {;}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 174 "calc.y" /* yacc.c:1646  */
    {;}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 175 "calc.y" /* yacc.c:1646  */
    {;}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 178 "calc.y" /* yacc.c:1646  */
    {;}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 179 "calc.y" /* yacc.c:1646  */
    {;}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 180 "calc.y" /* yacc.c:1646  */
    {;}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 181 "calc.y" /* yacc.c:1646  */
    {;}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 182 "calc.y" /* yacc.c:1646  */
    {;}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 188 "calc.y" /* yacc.c:1646  */
    {exists_while=exists_while-1;}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 189 "calc.y" /* yacc.c:1646  */
    {exists_while=exists_while-1;}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 192 "calc.y" /* yacc.c:1646  */
    {;}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 193 "calc.y" /* yacc.c:1646  */
    {;}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 196 "calc.y" /* yacc.c:1646  */
    {exists_while=exists_while-2;}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 199 "calc.y" /* yacc.c:1646  */
    {exists_while=exists_while-1;}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 202 "calc.y" /* yacc.c:1646  */
    {;}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 203 "calc.y" /* yacc.c:1646  */
    {;}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 204 "calc.y" /* yacc.c:1646  */
    {;}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 205 "calc.y" /* yacc.c:1646  */
    {;}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 209 "calc.y" /* yacc.c:1646  */
    {;}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 210 "calc.y" /* yacc.c:1646  */
    {;}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 211 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 213 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 215 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 217 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 221 "calc.y" /* yacc.c:1646  */
    {;}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 222 "calc.y" /* yacc.c:1646  */
    {;}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 225 "calc.y" /* yacc.c:1646  */
    {;}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 226 "calc.y" /* yacc.c:1646  */
    {;}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 227 "calc.y" /* yacc.c:1646  */
    {;}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 230 "calc.y" /* yacc.c:1646  */
    {;}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 231 "calc.y" /* yacc.c:1646  */
    {;}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "calc.y" /* yacc.c:1646  */
    {;}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 235 "calc.y" /* yacc.c:1646  */
    {;}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 236 "calc.y" /* yacc.c:1646  */
    {;}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 237 "calc.y" /* yacc.c:1646  */
    {;}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 239 "calc.y" /* yacc.c:1646  */
    {;}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 240 "calc.y" /* yacc.c:1646  */
    {;}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 241 "calc.y" /* yacc.c:1646  */
    {;}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 242 "calc.y" /* yacc.c:1646  */
    {;}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 244 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 246 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 250 "calc.y" /* yacc.c:1646  */
    {;}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 251 "calc.y" /* yacc.c:1646  */
    {;}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 252 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 254 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 256 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 258 "calc.y" /* yacc.c:1646  */
    {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 262 "calc.y" /* yacc.c:1646  */
    {;}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 263 "calc.y" /* yacc.c:1646  */
    {;}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 264 "calc.y" /* yacc.c:1646  */
    {;}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 265 "calc.y" /* yacc.c:1646  */
    {;}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 266 "calc.y" /* yacc.c:1646  */
    {;}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 267 "calc.y" /* yacc.c:1646  */
    {;}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 268 "calc.y" /* yacc.c:1646  */
    {;}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 271 "calc.y" /* yacc.c:1646  */
    {;}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 272 "calc.y" /* yacc.c:1646  */
    {;}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 278 "calc.y" /* yacc.c:1646  */
    {;}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 279 "calc.y" /* yacc.c:1646  */
    {;}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 280 "calc.y" /* yacc.c:1646  */
    {;}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 281 "calc.y" /* yacc.c:1646  */
    {;}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 284 "calc.y" /* yacc.c:1646  */
    {;}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 285 "calc.y" /* yacc.c:1646  */
    {;}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 288 "calc.y" /* yacc.c:1646  */
    {;}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 289 "calc.y" /* yacc.c:1646  */
    {;}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 290 "calc.y" /* yacc.c:1646  */
    {;}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 291 "calc.y" /* yacc.c:1646  */
    {;}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 292 "calc.y" /* yacc.c:1646  */
    {;}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 293 "calc.y" /* yacc.c:1646  */
    {;}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 296 "calc.y" /* yacc.c:1646  */
    {;}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 297 "calc.y" /* yacc.c:1646  */
    {;}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 298 "calc.y" /* yacc.c:1646  */
    {;}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 299 "calc.y" /* yacc.c:1646  */
    {;}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 300 "calc.y" /* yacc.c:1646  */
    {;}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 301 "calc.y" /* yacc.c:1646  */
    {;}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 304 "calc.y" /* yacc.c:1646  */
    {;}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 305 "calc.y" /* yacc.c:1646  */
    {;}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 308 "calc.y" /* yacc.c:1646  */
    {;}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 309 "calc.y" /* yacc.c:1646  */
    {;}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 310 "calc.y" /* yacc.c:1646  */
    {;}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 311 "calc.y" /* yacc.c:1646  */
    {;}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 312 "calc.y" /* yacc.c:1646  */
    {;}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 313 "calc.y" /* yacc.c:1646  */
    {;}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 316 "calc.y" /* yacc.c:1646  */
    {;}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 317 "calc.y" /* yacc.c:1646  */
    {;}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 318 "calc.y" /* yacc.c:1646  */
    {;}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 319 "calc.y" /* yacc.c:1646  */
    {;}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 320 "calc.y" /* yacc.c:1646  */
    {;}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 321 "calc.y" /* yacc.c:1646  */
    {;}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 322 "calc.y" /* yacc.c:1646  */
    {;}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 325 "calc.y" /* yacc.c:1646  */
    {;}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 326 "calc.y" /* yacc.c:1646  */
    {;}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 327 "calc.y" /* yacc.c:1646  */
    {;}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 328 "calc.y" /* yacc.c:1646  */
    {;}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 329 "calc.y" /* yacc.c:1646  */
    {;}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 330 "calc.y" /* yacc.c:1646  */
    {;}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 331 "calc.y" /* yacc.c:1646  */
    {;}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 332 "calc.y" /* yacc.c:1646  */
    {;}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 333 "calc.y" /* yacc.c:1646  */
    {;}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 334 "calc.y" /* yacc.c:1646  */
    {;}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 337 "calc.y" /* yacc.c:1646  */
    {;}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 343 "calc.y" /* yacc.c:1646  */
    {;}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 344 "calc.y" /* yacc.c:1646  */
    {;}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 347 "calc.y" /* yacc.c:1646  */
    {;}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 348 "calc.y" /* yacc.c:1646  */
    {;}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 351 "calc.y" /* yacc.c:1646  */
    {;}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 354 "calc.y" /* yacc.c:1646  */
    {;}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 355 "calc.y" /* yacc.c:1646  */
    {;}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 358 "calc.y" /* yacc.c:1646  */
    {;}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 359 "calc.y" /* yacc.c:1646  */
    {;}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 360 "calc.y" /* yacc.c:1646  */
    {;}
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 363 "calc.y" /* yacc.c:1646  */
    {;}
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 368 "calc.y" /* yacc.c:1646  */
    {;}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 369 "calc.y" /* yacc.c:1646  */
    {;}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 372 "calc.y" /* yacc.c:1646  */
    {;}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 373 "calc.y" /* yacc.c:1646  */
    {;}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 374 "calc.y" /* yacc.c:1646  */
    {;}
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 377 "calc.y" /* yacc.c:1646  */
    {;}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 383 "calc.y" /* yacc.c:1646  */
    {;}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 384 "calc.y" /* yacc.c:1646  */
    {;}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 387 "calc.y" /* yacc.c:1646  */
    {;}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 388 "calc.y" /* yacc.c:1646  */
    {;}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 391 "calc.y" /* yacc.c:1646  */
    {;}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 392 "calc.y" /* yacc.c:1646  */
    {;}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 395 "calc.y" /* yacc.c:1646  */
    {;}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 396 "calc.y" /* yacc.c:1646  */
    {;}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 397 "calc.y" /* yacc.c:1646  */
    {;}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 399 "calc.y" /* yacc.c:1646  */
    {;}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 400 "calc.y" /* yacc.c:1646  */
    {;}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 402 "calc.y" /* yacc.c:1646  */
    {;}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 403 "calc.y" /* yacc.c:1646  */
    {;}
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 405 "calc.y" /* yacc.c:1646  */
    {;}
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 406 "calc.y" /* yacc.c:1646  */
    {;}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 408 "calc.y" /* yacc.c:1646  */
    {;}
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 409 "calc.y" /* yacc.c:1646  */
    {;}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 410 "calc.y" /* yacc.c:1646  */
    {;}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 413 "calc.y" /* yacc.c:1646  */
    {;}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 414 "calc.y" /* yacc.c:1646  */
    {;}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 415 "calc.y" /* yacc.c:1646  */
    {;}
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 416 "calc.y" /* yacc.c:1646  */
    {;}
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 419 "calc.y" /* yacc.c:1646  */
    {;}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 420 "calc.y" /* yacc.c:1646  */
    {;}
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 421 "calc.y" /* yacc.c:1646  */
    {;}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 422 "calc.y" /* yacc.c:1646  */
    {;}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 423 "calc.y" /* yacc.c:1646  */
    {;}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 424 "calc.y" /* yacc.c:1646  */
    {;}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 427 "calc.y" /* yacc.c:1646  */
    {;}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 428 "calc.y" /* yacc.c:1646  */
    {;}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 431 "calc.y" /* yacc.c:1646  */
    {;}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 432 "calc.y" /* yacc.c:1646  */
    {;}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 435 "calc.y" /* yacc.c:1646  */
    {;}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 436 "calc.y" /* yacc.c:1646  */
    {;}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 437 "calc.y" /* yacc.c:1646  */
    {;}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 438 "calc.y" /* yacc.c:1646  */
    {;}
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 439 "calc.y" /* yacc.c:1646  */
    {;}
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 440 "calc.y" /* yacc.c:1646  */
    {;}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 441 "calc.y" /* yacc.c:1646  */
    {;}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 446 "calc.y" /* yacc.c:1646  */
    {;}
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 447 "calc.y" /* yacc.c:1646  */
    {;}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2996 "y.tab.c" /* yacc.c:1646  */
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
#line 451 "calc.y" /* yacc.c:1906  */
                     /* ----- C code ----- */

int main (void) {

if (yyparse() == 0){
    if (main_declaration==0)
    {
         printf("\n------------ Rejected! -------------------------------------------\n");
         printf("----- Main Function Does Not Exist -------------------------------\n\n");
    }
    else
    {
        printf("\n----- Accepted! --------------------------------------------------\n\n");
    }
    }
else {
    printf("\n----- Rejected! --------------------------------------------------\n\n");
    }

}

void yyerror (char *s) {printf("Parse Error in Line: %d\n", yylineno); return;} 


