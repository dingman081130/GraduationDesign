
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "yacc.ypp"

#include"point.h"
#include"line.h"
#include"angle.h"
#include"triangle.h"
#include"quadrangle.h"
#include"polygon.h"
#include"arc.h"
#include"circle.h"
#include"tlist.h"
#include"object.h"
#include"random.h"
#include"relation.h"
#include"utility.h"
#include<string>
#include<iostream>
using namespace std;

#define YYSTYPE char *

extern int yylex();
int yyerror( char * );
List<Object *> * objList;
Random *genCM;
Coord * crd;
List<Point *> * polygon;


/* Line 189 of yacc.c  */
#line 102 "yacc.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 258,
     DOT = 259,
     LP = 260,
     RP = 261,
     OBJECTV = 262,
     POINTV = 263,
     NUM = 264,
     UNIT = 265,
     IS = 266,
     PASS = 267,
     AS = 268,
     DRAW = 269,
     AUXILIARY = 270,
     UP = 271,
     OUT = 272,
     IN = 273,
     AND = 274,
     AT = 275,
     TO = 276,
     POINT = 277,
     MIDPOINT = 278,
     ENDPOINT = 279,
     INTERSECTPOINT = 280,
     TANGENTPOINT = 281,
     INCENTER = 282,
     OUTCENTER = 283,
     GCENTER = 284,
     VCENTER = 285,
     CCENTER = 286,
     ACENTER = 287,
     SEGMENT = 288,
     LINE = 289,
     RAY = 290,
     HEIGHTLINE = 291,
     MIDLINE = 292,
     TANGENTLINE = 293,
     COMMONTANGENTLINE = 294,
     INNERTANGENTLINE = 295,
     OUTERTANGENTLINE = 296,
     RADIUS = 297,
     DIAMETER = 298,
     EXTENDLINE = 299,
     REEXTENDLINE = 300,
     DIAGONAL = 301,
     EDIVISIONLINE = 302,
     PBLINE = 303,
     VERTICALINE = 304,
     PARALLELINE = 305,
     TRIANGLE = 306,
     ISOTRIANGLE = 307,
     EQUTRIANGLE = 308,
     RIGHTTRIANGLE = 309,
     OBTTRIANGLE = 310,
     ACUTRIANGLE = 311,
     INTOUCHTRIANGLE = 312,
     OUTANGENTRIANGLE = 313,
     RIGHTDTRIANGLE = 314,
     RIGHTANGLE = 315,
     ACUTEANGLE = 316,
     OBTUSEANGLE = 317,
     ANGLE = 318,
     QUADRANGLE = 319,
     PARALELLQUADRANGLE = 320,
     RECTANGLE = 321,
     SQUARE = 322,
     DIAMOND = 323,
     LADDER = 324,
     ISOLADDER = 325,
     RIGHTLADDER = 326,
     CIRCLE = 327,
     INTANGENTCIRCLE = 328,
     OUTOUCHCIRCLE = 329,
     ARC = 330,
     EQUAL = 331,
     SMALLER = 332,
     GREATER = 333,
     PLUS = 334,
     MINUS = 335,
     MULTI = 336,
     DIVIDE = 337,
     POWER = 338,
     MOD = 339,
     INTERSECT = 340,
     PERPEND = 341,
     PARALLEL = 342,
     TANGENT = 343,
     EDIVISION = 344,
     LINK = 345,
     PROLONG = 346,
     REPROLONG = 347,
     PEBI = 348,
     INTOUCH = 349,
     INTANGENT = 350,
     OUTOUCH = 351,
     OUTANGENT = 352,
     SAMECENTER = 353,
     POLYGON = 354
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 243 "yacc.tab.cpp"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   354

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  308

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   354

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    35,    43,    51,    60,
      69,    78,    87,    94,   106,   117,   127,   140,   152,   157,
     163,   172,   184,   196,   207,   218,   227,   237,   247,   257,
     265,   273,   284,   297,   303,   310,   316,   325,   334,   341,
     345,   349,   359,   373,   386,   395,   404,   413,   422,   433,
     446,   456,   468,   470,   472,   477,   483,   490,   497,   505,
     511,   519,   528,   537,   547,   554,   555,   558,   560,   562,
     564,   566,   568,   570,   572,   574,   576,   578,   580,   582,
     584,   586,   588,   590,   592,   594,   596,   598,   600,   602,
     604,   606,   608
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     101,     0,    -1,   102,    -1,    -1,   103,   102,    -1,   104,
       3,    -1,     1,    -1,   105,    -1,   106,    -1,   107,    -1,
     108,    -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,
     117,     8,    11,   124,    -1,   117,     8,    20,   118,     8,
       8,    16,    -1,     8,    11,   118,     8,     8,    15,    23,
      -1,     8,    11,   120,     8,     8,     8,    15,    27,    -1,
       8,    11,   120,     8,     8,     8,    15,    28,    -1,     8,
      11,   120,     8,     8,     8,    15,    29,    -1,     8,    11,
     120,     8,     8,     8,    15,    30,    -1,     8,    11,   123,
       7,    15,    31,    -1,     8,    11,   118,     8,     8,    19,
     118,     8,     8,    15,    25,    -1,     8,    11,   118,     8,
       8,    19,   123,     7,    15,    26,    -1,     8,    11,   123,
       7,    19,   123,     7,    15,    26,    -1,     8,    19,     8,
      11,   118,     8,     8,    19,   123,     7,    15,    25,    -1,
       8,    19,     8,    11,   123,     7,    19,   123,     7,    15,
      25,    -1,     8,     8,    11,   118,    -1,   118,     8,     8,
      11,     9,    -1,   118,     8,     8,    19,   118,     8,     8,
      87,    -1,   118,     8,     8,    19,   118,     8,     8,    85,
      20,   117,     8,    -1,   118,     8,     8,    19,   118,     8,
       8,    86,    20,   117,     8,    -1,   118,     8,     8,    93,
     118,     8,     8,    20,   117,     8,    -1,   118,     8,     8,
      89,   118,     8,     8,    20,   117,     8,    -1,   118,     8,
       8,    89,   119,     8,     8,     8,    -1,     8,     8,    11,
     119,     8,     8,     8,    15,    47,    -1,     8,     8,    11,
     120,     8,     8,     8,    15,    37,    -1,     8,     8,    11,
     120,     8,     8,     8,    15,    36,    -1,     8,     8,    11,
     123,     7,    15,    43,    -1,     8,     8,    11,   123,     7,
      15,    42,    -1,   118,     8,     8,    19,   123,     7,    88,
      20,   117,     8,    -1,   118,     8,     8,    19,   123,     7,
      85,    20,   117,     8,     4,     8,    -1,     8,     8,     8,
      11,   119,    -1,   119,     8,     8,     8,    11,     9,    -1,
       8,     8,     8,    11,   120,    -1,     8,     8,     8,    11,
     123,     7,    15,    58,    -1,     8,     8,     8,    11,   123,
       7,    15,    57,    -1,     8,     8,     8,     8,    11,   121,
      -1,   115,    11,   122,    -1,     7,    11,   123,    -1,     7,
      11,    13,     8,     8,    11,    43,    15,   123,    -1,     7,
      11,    13,     8,    11,    31,     4,     8,     8,    11,    42,
      15,   123,    -1,     7,    11,    13,     8,    11,    31,     4,
       9,    11,    42,    15,   123,    -1,     7,    11,   120,     8,
       8,     8,    15,    73,    -1,     7,    11,   120,     8,     8,
       8,    15,    74,    -1,   123,     7,    96,    20,   120,     8,
       8,     8,    -1,   123,     7,    95,    20,   120,     8,     8,
       8,    -1,   123,     7,    19,   118,     8,     8,    88,    20,
     117,     8,    -1,   123,     7,    19,   118,     8,     8,    85,
      20,   117,     8,     4,     8,    -1,   123,     7,    19,   123,
       7,    88,    20,   117,     8,    -1,   123,     7,    19,   123,
       7,    85,    20,   117,     8,     4,     8,    -1,   113,    -1,
     114,    -1,     8,     8,    76,     9,    -1,     8,     8,    76,
       8,     8,    -1,     8,     8,    76,     9,     8,     8,    -1,
       9,     8,     8,    76,     8,     8,    -1,     9,     8,     8,
      76,     9,     8,     8,    -1,     8,     8,     8,    76,     9,
      -1,     8,     8,     8,    76,     8,     8,     8,    -1,     8,
       8,     8,    76,     9,     8,     8,     8,    -1,     9,     8,
       8,     8,    76,     8,     8,     8,    -1,     9,     8,     8,
       8,    76,     9,     8,     8,     8,    -1,     8,     8,     8,
       8,     8,   116,    -1,    -1,     8,   116,    -1,    22,    -1,
      34,    -1,    35,    -1,    33,    -1,    60,    -1,    61,    -1,
      62,    -1,    63,    -1,    51,    -1,    52,    -1,    53,    -1,
      54,    -1,    55,    -1,    56,    -1,    59,    -1,    64,    -1,
      65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    99,    -1,    72,    -1,     5,     9,
       3,     9,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    51,    52,    56,    57,    61,    62,    63,
      64,    65,    66,    68,    69,    73,    77,    82,    87,    92,
      97,   102,   108,   114,   122,   129,   133,   141,   150,   153,
     158,   164,   171,   178,   185,   192,   199,   205,   222,   235,
     240,   248,   255,   267,   270,   277,   280,   285,   291,   295,
     297,   300,   305,   313,   320,   325,   330,   335,   341,   348,
     357,   358,   366,   366,   368,   373,   379,   380,   381,   383,
     384,   385,   386,   387,   390,   391,   392,   395,   396,   396,
     396,   397,   397,   397,   397,   398,   398,   398,   399,   399,
     399,   400,   401,   401,   401,   402,   402,   402,   402,   402,
     403,   404,   407
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "DOT", "LP", "RP", "OBJECTV",
  "POINTV", "NUM", "UNIT", "IS", "PASS", "AS", "DRAW", "AUXILIARY", "UP",
  "OUT", "IN", "AND", "AT", "TO", "POINT", "MIDPOINT", "ENDPOINT",
  "INTERSECTPOINT", "TANGENTPOINT", "INCENTER", "OUTCENTER", "GCENTER",
  "VCENTER", "CCENTER", "ACENTER", "SEGMENT", "LINE", "RAY", "HEIGHTLINE",
  "MIDLINE", "TANGENTLINE", "COMMONTANGENTLINE", "INNERTANGENTLINE",
  "OUTERTANGENTLINE", "RADIUS", "DIAMETER", "EXTENDLINE", "REEXTENDLINE",
  "DIAGONAL", "EDIVISIONLINE", "PBLINE", "VERTICALINE", "PARALLELINE",
  "TRIANGLE", "ISOTRIANGLE", "EQUTRIANGLE", "RIGHTTRIANGLE", "OBTTRIANGLE",
  "ACUTRIANGLE", "INTOUCHTRIANGLE", "OUTANGENTRIANGLE", "RIGHTDTRIANGLE",
  "RIGHTANGLE", "ACUTEANGLE", "OBTUSEANGLE", "ANGLE", "QUADRANGLE",
  "PARALELLQUADRANGLE", "RECTANGLE", "SQUARE", "DIAMOND", "LADDER",
  "ISOLADDER", "RIGHTLADDER", "CIRCLE", "INTANGENTCIRCLE", "OUTOUCHCIRCLE",
  "ARC", "EQUAL", "SMALLER", "GREATER", "PLUS", "MINUS", "MULTI", "DIVIDE",
  "POWER", "MOD", "INTERSECT", "PERPEND", "PARALLEL", "TANGENT",
  "EDIVISION", "LINK", "PROLONG", "REPROLONG", "PEBI", "INTOUCH",
  "INTANGENT", "OUTOUCH", "OUTANGENT", "SAMECENTER", "POLYGON", "$accept",
  "input", "sentences", "sentence", "stmt", "point_stmt", "line_stmt",
  "angle_stmt", "triangle_stmt", "quadrangle_stmt", "polygon_stmt",
  "circle_stmt", "exp_stmt", "line_exp_stmt", "angle_exp_stmt", "pointvs",
  "point_flw", "point_type", "line_type", "angle_type", "triangle_type",
  "quadrangle_type", "polygon_type", "circle_type", "coord", 0
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   108,   108,   109,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   113,   113,   113,   114,
     114,   114,   114,   114,   115,   116,   116,   117,   118,   118,
     118,   119,   119,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     122,   123,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     7,     7,     8,     8,
       8,     8,     6,    11,    10,     9,    12,    11,     4,     5,
       8,    11,    11,    10,    10,     8,     9,     9,     9,     7,
       7,    10,    12,     5,     6,     5,     8,     8,     6,     3,
       3,     9,    13,    12,     8,     8,     8,     8,    10,    12,
       9,    11,     1,     1,     4,     5,     6,     6,     7,     5,
       7,     8,     8,     9,     6,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     0,     0,     0,    77,    80,    78,    79,    81,
      82,    83,    84,   101,     0,     2,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    62,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     4,
       5,     0,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,   100,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,    64,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,    43,    45,     0,
       0,    69,     0,     0,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    74,    92,    93,    94,    95,    96,    97,
      98,    99,    48,     0,     0,     0,     0,     0,     0,    66,
       0,     0,     0,    22,     0,     0,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,    70,
       0,     0,     0,    40,    39,    17,     0,     0,     0,     0,
       0,     0,     0,     0,    68,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    47,    46,    71,     0,     0,     0,
       0,    18,    19,    20,    21,     0,     0,     0,    72,     0,
     102,     0,     0,    30,     0,     0,     0,    35,     0,     0,
       0,     0,     0,    57,    56,    51,     0,     0,    36,    38,
      37,     0,     0,    25,     0,     0,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
      24,     0,     0,     0,     0,     0,    41,    34,    33,     0,
      58,     0,     0,     0,    23,     0,    27,    31,    32,     0,
       0,    61,     0,    53,    26,    42,    59,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   143,    29,    30,    31,
      54,   152,    65,    32,    91
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -146
static const yytype_int16 yypact[] =
{
       6,  -146,     1,    15,    23,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,    58,  -146,     6,    33,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,    41,    57,
      64,    74,    95,    37,    -3,   110,    78,   119,  -146,  -146,
    -146,    51,     7,   159,   177,   -15,   192,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,   193,  -146,     8,    79,    89,   194,
     196,   198,   195,     9,  -146,  -146,   202,    73,   -10,   201,
     -13,   190,   191,    36,   204,    45,   136,   102,  -146,   205,
     206,   208,   209,   210,   211,   212,    14,   -13,   140,   128,
     213,  -146,   215,   216,   -13,    86,    73,   217,   218,   214,
     101,   101,   219,   200,   221,   224,   106,  -146,  -146,   220,
     225,   226,   227,   228,   222,  -146,   230,    27,   231,   223,
     152,   232,   234,   150,   235,   236,   239,   237,  -146,   238,
     240,   241,   242,   243,   244,   247,   -40,   248,   249,   229,
     254,   233,   224,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,   246,   251,   255,   256,   257,    52,  -146,
     245,   -13,   252,  -146,   259,   262,   258,   263,   265,  -146,
     266,   253,   260,   267,   -28,   270,   271,   272,  -146,   -11,
     261,   264,   274,   275,   273,   170,   107,  -146,   126,  -146,
     277,   276,   278,  -146,  -146,  -146,   279,   282,    88,   280,
     281,   152,   284,   286,  -146,   290,  -146,    39,   283,   285,
     287,   289,   288,   291,   292,   268,   268,   293,   294,   152,
     296,   295,  -146,  -146,  -146,  -146,  -146,   269,   157,   301,
     298,  -146,  -146,  -146,  -146,   297,   152,   303,  -146,   306,
    -146,   299,   300,  -146,   268,   268,   268,  -146,   268,   268,
     268,   307,   309,  -146,  -146,  -146,   310,   302,  -146,  -146,
    -146,   311,   304,  -146,   315,   312,  -146,   268,   268,   316,
     317,   320,   321,   323,   324,   314,  -146,   305,   318,   313,
    -146,   319,   325,   327,   328,   333,  -146,  -146,  -146,   335,
    -146,   332,   326,   152,  -146,   329,  -146,  -146,  -146,   334,
     337,  -146,   152,  -146,  -146,  -146,  -146,  -146
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,   330,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,   144,  -145,   -32,   -46,
     -25,  -146,  -146,   -33,  -146
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      55,    93,    61,    59,    70,    56,    -3,     1,    57,    94,
      60,    79,    33,     2,     3,     4,    75,    88,    66,    76,
       6,     7,     8,    34,    81,    78,    35,    67,     5,   119,
     107,    37,    80,   120,    36,    92,    40,    99,    98,     6,
       7,     8,   160,   109,   102,   180,   161,   103,   181,   132,
      46,   108,    41,   105,   122,   121,   106,   208,    38,    13,
     209,   130,   129,   131,   133,    42,     9,    10,    11,    12,
     251,   252,    43,    58,   213,   137,   138,   214,    13,    95,
      71,    72,    44,    96,    77,    89,    62,   164,    47,    48,
      49,    50,    51,    52,   193,   194,    53,    82,    83,   269,
     270,   271,    45,   272,   273,   274,     6,     7,     8,    13,
     110,   111,     6,     7,     8,   231,   232,   233,   234,     6,
       7,     8,   283,   284,   241,   242,   243,    63,   197,   196,
      47,    48,    49,    50,    51,    52,   124,   125,    53,     9,
      10,    11,    12,     6,     7,     8,     9,    10,    11,    12,
      64,    13,    47,    48,    49,    50,    51,    52,   167,   168,
      53,    47,    48,    49,    50,    51,    52,    68,   237,    53,
     144,   145,   146,   147,   148,   149,   150,   151,   220,   221,
     222,   223,    13,   224,   225,    69,   255,    47,    48,    49,
      50,    51,    52,   259,   260,    53,     9,    10,    11,    12,
      73,    74,    84,   264,    85,    86,    87,    90,    13,    97,
     100,   101,   104,   112,   113,   114,   123,   115,   116,   117,
     118,   136,   126,   127,    13,   128,   135,   153,   134,   141,
     139,   140,   142,   154,   155,   156,   157,   158,   159,   162,
     165,   166,   171,   169,   170,   172,   173,   174,   186,   175,
     176,   177,     0,   178,   163,   179,   182,   183,   185,   189,
     303,   188,   205,   190,   191,   192,   199,   198,   195,   307,
     200,   202,   184,   203,   204,   207,   206,   201,   210,   211,
     212,   215,   217,   218,   216,   226,   187,   229,   219,   230,
       5,   227,   238,   228,   239,   235,   240,   247,     0,     0,
     236,   253,   254,   244,   256,   245,   257,   246,   248,   261,
     265,   249,   250,   262,   266,   275,   258,   276,   291,   267,
     268,   277,   281,   263,   285,   286,   279,   282,   287,   288,
     280,   289,   290,   293,   295,   297,   298,   299,   294,   300,
     301,   302,   305,     0,   278,   306,    39,   292,     0,     0,
     296,     0,     0,     0,   304
};

static const yytype_int16 yycheck[] =
{
      33,    11,    35,    35,    19,     8,     0,     1,    11,    19,
      35,    57,    11,     7,     8,     9,     8,     8,    11,    11,
      33,    34,    35,     8,    57,    57,    11,    20,    22,    15,
      76,     8,    57,    19,    19,    67,     3,    70,    70,    33,
      34,    35,    15,    76,     8,    85,    19,    11,    88,    95,
      13,    76,    11,     8,    87,    87,    11,    85,     0,    72,
      88,    94,    94,    95,    96,     8,    60,    61,    62,    63,
     215,   216,     8,    76,    85,   100,   101,    88,    72,    89,
      95,    96,     8,    93,    76,    76,     8,   120,    51,    52,
      53,    54,    55,    56,    42,    43,    59,     8,     9,   244,
     245,   246,     7,   248,   249,   250,    33,    34,    35,    72,
       8,     9,    33,    34,    35,    27,    28,    29,    30,    33,
      34,    35,   267,   268,    85,    86,    87,     8,   161,   161,
      51,    52,    53,    54,    55,    56,     8,     9,    59,    60,
      61,    62,    63,    33,    34,    35,    60,    61,    62,    63,
      99,    72,    51,    52,    53,    54,    55,    56,     8,     9,
      59,    51,    52,    53,    54,    55,    56,     8,   201,    59,
      64,    65,    66,    67,    68,    69,    70,    71,     8,     9,
      73,    74,    72,    57,    58,     8,   219,    51,    52,    53,
      54,    55,    56,    36,    37,    59,    60,    61,    62,    63,
       8,     8,     8,   236,     8,     7,    11,     5,    72,     8,
      20,    20,     8,     8,     8,     7,    76,     8,     8,     8,
       8,     7,     9,     8,    72,     9,     8,     7,    11,     8,
      11,    31,     8,     8,     8,     8,     8,    15,     8,     8,
       8,     7,     3,     8,     8,     8,     8,     7,    15,     8,
       8,     8,    -1,     9,    31,     8,     8,     8,     4,     8,
     293,    15,     9,     8,     8,     8,     7,    15,    23,   302,
       8,     8,    43,     8,     8,     8,    16,    19,     8,     8,
       8,    20,     8,     8,    20,     8,   142,     8,    15,     7,
      22,    15,     8,    15,     8,    15,     6,     8,    -1,    -1,
      19,     8,     8,    20,     8,    20,    11,    20,    20,     8,
       7,    20,    20,    15,     8,     8,    47,     8,     4,    20,
      20,    11,     7,    26,     8,     8,    15,    15,     8,     8,
      26,     8,     8,    15,    15,     8,     8,     4,    25,     4,
       8,    15,     8,    -1,    42,     8,    16,    42,    -1,    -1,
      25,    -1,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,     8,     9,    22,    33,    34,    35,    60,
      61,    62,    63,    72,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   117,
     118,   119,   123,    11,     8,    11,    19,     8,     0,   102,
       3,    11,     8,     8,     8,     7,    13,    51,    52,    53,
      54,    55,    56,    59,   120,   123,     8,    11,    76,   118,
     120,   123,     8,     8,    99,   122,    11,    20,     8,     8,
      19,    95,    96,     8,     8,     8,    11,    76,   118,   119,
     120,   123,     8,     9,     8,     8,     7,    11,     8,    76,
       5,   124,   118,    11,    19,    89,    93,     8,   118,   123,
      20,    20,     8,    11,     8,     8,    11,   119,   120,   123,
       8,     9,     8,     8,     7,     8,     8,     8,     8,    15,
      19,   118,   123,    76,     8,     9,     9,     8,     9,   118,
     123,   118,   119,   118,    11,     8,     7,   120,   120,    11,
      31,     8,     8,   116,    64,    65,    66,    67,    68,    69,
      70,    71,   121,     7,     8,     8,     8,     8,    15,     8,
      15,    19,     8,    31,   123,     8,     7,     8,     9,     8,
       8,     3,     8,     8,     7,     8,     8,     8,     9,     8,
      85,    88,     8,     8,    43,     4,    15,   116,    15,     8,
       8,     8,     8,    42,    43,    23,   118,   123,    15,     7,
       8,    19,     8,     8,     8,     9,    16,     8,    85,    88,
       8,     8,     8,    85,    88,    20,    20,     8,     8,    15,
       8,     9,    73,    74,    57,    58,     8,    15,    15,     8,
       7,    27,    28,    29,    30,    15,    19,   123,     8,     8,
       6,    85,    86,    87,    20,    20,    20,     8,    20,    20,
      20,   117,   117,     8,     8,   123,     8,    11,    47,    36,
      37,     8,    15,    26,   123,     7,     8,    20,    20,   117,
     117,   117,   117,   117,   117,     8,     8,    11,    42,    15,
      26,     7,    15,   117,   117,     8,     8,     8,     8,     8,
       8,     4,    42,    15,    25,    15,    25,     8,     8,     4,
       4,     8,    15,   123,    25,     8,     8,   123
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 44 "yacc.ypp"
    {
			tkzStart();
			objList->prePrint();
			objList->print();
			tkzEnd();
		;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 73 "yacc.ypp"
    {
				Point * p = addPIntoL( (yyvsp[(2) - (4)]) );
				p->setCoord( crd );
			;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 77 "yacc.ypp"
    {													/*点在线上*/
				Point * p1 = addPIntoL( (yyvsp[(2) - (7)]) );
				Line * l = addLIntoL( (yyvsp[(5) - (7)]), (yyvsp[(6) - (7)]), (yyvsp[(4) - (7)]) );
				l->addPoint( p1 );
			;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 82 "yacc.ypp"
    {												/*点是线的中点*/
				Point * p1 = addPIntoL( (yyvsp[(1) - (7)]) );
				Line * l = addLIntoL( (yyvsp[(4) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(3) - (7)]) );
				l->setMidP( p1 );
			;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 87 "yacc.ypp"
    {									/*点是三角形的内心*/
				Triangle * tri = addTIntoL( (yyvsp[(4) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(3) - (8)]) );
				Point * p1 = addPIntoL( (yyvsp[(1) - (8)]) );
				tri->setInCenter( p1 );
			;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 92 "yacc.ypp"
    {									/*点是三角形的外心*/
				Triangle * tri = addTIntoL( (yyvsp[(4) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(3) - (8)]) );
				Point * p1 = addPIntoL( (yyvsp[(1) - (8)]) );
				tri->setCircumCenter( p1 );
			;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 97 "yacc.ypp"
    {										/*点是三角形的重心*/
				Triangle * tri = addTIntoL( (yyvsp[(4) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(3) - (8)]) );
				Point * p1 = addPIntoL( (yyvsp[(1) - (8)]) );
				tri->setGCenter( p1 );
			;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 102 "yacc.ypp"
    {										/*点是三角形的垂心*/
				Triangle * tri = addTIntoL( (yyvsp[(4) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(3) - (8)]) );
				Point * p1 = addPIntoL( (yyvsp[(1) - (8)]) );
				tri->setOrthCenter( p1 );
			;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 108 "yacc.ypp"
    {													/*点是圆的圆心*/
				Point * p = addPIntoL( (yyvsp[(1) - (6)]) );
				Circle * c = addCIntoL( (yyvsp[(4) - (6)]) );
				c->setC( p );
			;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 114 "yacc.ypp"
    {				/*点是线与线的交点*/
				Line * l1 = addLIntoL( (yyvsp[(4) - (11)]), (yyvsp[(5) - (11)]), (yyvsp[(3) - (11)]) );
				Line * l2 = addLIntoL( (yyvsp[(8) - (11)]), (yyvsp[(9) - (11)]), (yyvsp[(7) - (11)]) );
				Point * p = addPIntoL( (yyvsp[(1) - (11)]) );
				LLRelationInt * r = new LLRelationInt( l1, l2, p );
				l1->addRelation( r );l2->addRelation( r );
			;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 122 "yacc.ypp"
    {					/*点是线与圆的切点*/
				Circle * c = addCIntoL( (yyvsp[(8) - (10)]) );
				Line * l = addLIntoL( (yyvsp[(4) - (10)]), (yyvsp[(5) - (10)]), (yyvsp[(3) - (10)]) );
				Point * p = addPIntoL( (yyvsp[(1) - (10)]) );
				LCRelationTg * r = new LCRelationTg( l, c, p );
				l->addRelation( r );
			;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 129 "yacc.ypp"
    {						/*点是圆与圆的切点*/
				/*can not finish*/
			;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 133 "yacc.ypp"
    {		/*两点是线与圆的交点*/
				Line * l = addLIntoL( (yyvsp[(6) - (12)]), (yyvsp[(7) - (12)]), (yyvsp[(5) - (12)]) );
				Point * p1 = addPIntoL( (yyvsp[(1) - (12)]) );
				Point * p2 = addPIntoL( (yyvsp[(3) - (12)]) );
				Circle * c = addCIntoL( (yyvsp[(10) - (12)]) );
				LCRelationInt * r = new LCRelationInt( l, c, p1, p2 );
				c->addRelation( r );
			;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 141 "yacc.ypp"
    {			/*两点是圆与圆的交点*/
				Point * p1 = addPIntoL( (yyvsp[(1) - (11)]) );Point * p2 = addPIntoL( (yyvsp[(3) - (11)]) );
				Circle * c1 = addCIntoL( (yyvsp[(6) - (11)]) );Circle * c2 = addCIntoL( (yyvsp[(9) - (11)]) );
				CCRelationInt * r = new CCRelationInt( c1, c2, p1, p2 );
				c2->addRelation( r );	
			;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 150 "yacc.ypp"
    {
					Line * l = addLIntoL( (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]) );
				;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 153 "yacc.ypp"
    {
					double d = sToD( (yyvsp[(5) - (5)]) );
					Line * l = addLIntoL( (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(1) - (5)]) );
					l->setLength( d );
				;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 158 "yacc.ypp"
    {									/*线与线的平行关系*/
				Line * l1 = addLIntoL( (yyvsp[(2) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]) );
				Line * l2 = addLIntoL( (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]), (yyvsp[(5) - (8)]) );
				LLRelationPara * r = new LLRelationPara( l1, l2 );
				l2->addRelation( r );
			;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 164 "yacc.ypp"
    {				/*线与线的相交关系*/
				Point * p = addPIntoL( (yyvsp[(11) - (11)]) );
				Line * l1 = addLIntoL( (yyvsp[(2) - (11)]), (yyvsp[(3) - (11)]), (yyvsp[(1) - (11)]) );
				Line * l2 = addLIntoL( (yyvsp[(6) - (11)]), (yyvsp[(7) - (11)]), (yyvsp[(5) - (11)]) );
				LLRelationInt * r = new LLRelationInt( l1, l2, p );
				l2->addRelation( r );
			;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 171 "yacc.ypp"
    {				/*线与线的垂直关系*/
				Point * p = addPIntoL( (yyvsp[(11) - (11)]) );
				Line * l1 = addLIntoL( (yyvsp[(2) - (11)]), (yyvsp[(3) - (11)]), (yyvsp[(1) - (11)]) );
				Line * l2 = addLIntoL( (yyvsp[(6) - (11)]), (yyvsp[(7) - (11)]), (yyvsp[(5) - (11)]) );
				LLRelationOrth * r = new LLRelationOrth( l1, l2, p );
				l2->addRelation( r );
			;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 178 "yacc.ypp"
    {						/*线垂直平分线于点*/
				Line * l2 = addLIntoL( (yyvsp[(6) - (10)]), (yyvsp[(7) - (10)]), (yyvsp[(5) - (10)]) );
				Line * l1 = addLIntoL( (yyvsp[(2) - (10)]), (yyvsp[(3) - (10)]), (yyvsp[(1) - (10)]) );
				Point * p =addPIntoL( (yyvsp[(10) - (10)]) );
				l2->setMidP( p );
				l2->setMidOrthL( l1 );
			;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 185 "yacc.ypp"
    {					/*线平分线于点*/
				Line * l2 = addLIntoL( (yyvsp[(6) - (10)]), (yyvsp[(7) - (10)]), (yyvsp[(5) - (10)]) );
				Line * l1 = addLIntoL( (yyvsp[(2) - (10)]), (yyvsp[(3) - (10)]), (yyvsp[(1) - (10)]) );
				Point * p = addPIntoL( (yyvsp[(10) - (10)]) );
				l2->setMidP( p );
			;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 192 "yacc.ypp"
    {								/*线平分角*/
				Line * l = addLIntoL( (yyvsp[(2) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]) );
				Angle * an = addAnIntoL( (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]), (yyvsp[(8) - (8)]), (yyvsp[(5) - (8)]) );
				Point * p = addPIntoL( (yyvsp[(3) - (8)]) );
				an->setBisector( l );
				
			;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 199 "yacc.ypp"
    {						/*线是角的平分线*/
				Line * l = addLIntoL( (yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(9) - (9)]) );
				Angle * an = addAnIntoL( (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(4) - (9)]) );
				an->setBisector( l );
			;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 205 "yacc.ypp"
    {							/*线是三角形的中线*/
				Point * p = addPIntoL( (yyvsp[(2) - (9)]) );
				Line * l = addLIntoL( (yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(9) - (9)]) );
				Triangle * tri = addTIntoL( (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(4) - (9)]) );
				Line * l1 = findLInL( (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]) );Line * l2 = findLInL( (yyvsp[(6) - (9)]), (yyvsp[(7) - (9)]) );Line * l3 = findLInL( (yyvsp[(5) - (9)]), (yyvsp[(7) - (9)]) );
				if( strcmp( (yyvsp[(1) - (9)]), (yyvsp[(5) - (9)]) ) == 0 ){
					tri->setMedian( l, 1 );
					l2->setMidP( p );
				}else if( strcmp( (yyvsp[(1) - (9)]), (yyvsp[(6) - (9)]) ) == 0 ){
					tri->setMedian( l, 2 );
					l3->setMidP( p );
				}else if( strcmp( (yyvsp[(1) - (9)]), (yyvsp[(7) - (9)]) ) == 0 ){
					tri->setMedian( l, 3 );
					l1->setMidP( p );
				}
				else ;
			;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 222 "yacc.ypp"
    {						/*线是三角形的高*/
				Line * l = addLIntoL( (yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(9) - (9)]) );
				Triangle * tri = addTIntoL( (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(4) - (9)]) );
				if( strcmp( (yyvsp[(1) - (9)]), (yyvsp[(5) - (9)]) ) == 0 )
					tri->setAltitude( l, 1 );
				else if( strcmp( (yyvsp[(1) - (9)]), (yyvsp[(6) - (9)]) ) == 0 )
					tri->setAltitude( l, 2 );
				else if( strcmp( (yyvsp[(1) - (9)]), (yyvsp[(7) - (9)]) ) == 0 )
					tri->setAltitude( l, 3 );
				else ;
				
			;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 235 "yacc.ypp"
    {										/*线是圆的直径*/
				Line * l = addLIntoL( (yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(7) - (7)]) );
				Circle * c = addCIntoL( (yyvsp[(5) - (7)]) );
				c->setDiameter( l );
			;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 240 "yacc.ypp"
    {											/*线是圆的半径*/
				Line * l = addLIntoL( (yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(7) - (7)]) );
				Circle * c = addCIntoL( (yyvsp[(5) - (7)]) );
				Point * p1 = findPInL( (yyvsp[(1) - (7)]) );
				Point * p2 = findPInL( (yyvsp[(2) - (7)]) );
				c->setC( p1 );
				c->addPoint( p2 );
			;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 248 "yacc.ypp"
    {					/*线与圆相切于点*/
				Circle * c = addCIntoL( (yyvsp[(6) - (10)]) );
				Line * l = addLIntoL( (yyvsp[(2) - (10)]), (yyvsp[(3) - (10)]), (yyvsp[(1) - (10)]) );
				Point * p = addPIntoL( (yyvsp[(10) - (10)]) );
				LCRelationTg * r = new LCRelationTg( l, c, p );
				l->addRelation( r );
			;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 255 "yacc.ypp"
    {		/*线与圆相交于两点*/
				Line * l = addLIntoL( (yyvsp[(2) - (12)]), (yyvsp[(3) - (12)]), (yyvsp[(1) - (12)]) );
				Point * p1 = addPIntoL( (yyvsp[(10) - (12)]) );
				Point * p2 = addPIntoL( (yyvsp[(12) - (12)]) );
				Circle * c = addCIntoL( (yyvsp[(6) - (12)]) );
				LCRelationInt * r = new LCRelationInt( l, c, p1, p2 );
				c->addRelation( r );
			;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 267 "yacc.ypp"
    {
			Angle * an = addAnIntoL( (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]) );
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 270 "yacc.ypp"
    {
			double d = sToD( (yyvsp[(6) - (6)]) );
			Angle * an = addAnIntoL( (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(1) - (6)]) );
			an->setD( d );
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 277 "yacc.ypp"
    {										/*点点点是三角形*/
				addTIntoL( (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]) );
			;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 280 "yacc.ypp"
    {		/*点点点是圆的外切三角形*/
				Triangle * tri = addTIntoL( (yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(8) - (8)]) );
				Circle * c = addCIntoL( (yyvsp[(6) - (8)]) );
				tri->setCircumC( c );
			;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 285 "yacc.ypp"
    {		/*点点点是圆的内接三角形*/
				Triangle * tri = addTIntoL( (yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(8) - (8)]) );
				Circle * c = addCIntoL( (yyvsp[(6) - (8)]) );
				tri->setInC( c );
			;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 291 "yacc.ypp"
    {
				addQIntoL( (yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)]) );
			;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 297 "yacc.ypp"
    {																/*o是圆*/
				addCIntoL( (yyvsp[(1) - (3)]) );
			;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 300 "yacc.ypp"
    {						/*圆是以点点为直径的圆*/
				Circle * c = addCIntoL( (yyvsp[(1) - (9)]) );
				Line * l = addLIntoL( (yyvsp[(4) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(7) - (9)]) );
				c->setDiameter( l );
			;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 305 "yacc.ypp"
    {	/*圆是以点为圆心、线为半径的圆*/
				Point * p1 = addPIntoL( (yyvsp[(4) - (13)]) );
				Point * p2 = addPIntoL( (yyvsp[(9) - (13)]) );
				Line * l = addLIntoL( (yyvsp[(8) - (13)]), (yyvsp[(9) - (13)]), (yyvsp[(11) - (13)]) );
				Circle * c = addCIntoL( (yyvsp[(1) - (13)]) );
				c->addPoint( p2 );
				c->setC( p1 );
			;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 313 "yacc.ypp"
    {	/*圆是以点为圆心、线为半径的圆*/
				Point * p = addPIntoL( (yyvsp[(4) - (12)]) );
				double r = sToD( (yyvsp[(8) - (12)]) );
				Circle * c = addCIntoL( (yyvsp[(1) - (12)]) );
				c->setC( p );
				c->setRadius( r );
			;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 320 "yacc.ypp"
    {			/*圆是三角形的内切圆*/
				Circle * c = addCIntoL( (yyvsp[(1) - (8)]) );
				Triangle * tri = addTIntoL( (yyvsp[(4) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(3) - (8)]) );
				tri->setInC( c );
			;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 325 "yacc.ypp"
    {				/*圆是三角形的外接圆*/
				Circle * c = addCIntoL( (yyvsp[(1) - (8)]) );
				Triangle * tri = addTIntoL( (yyvsp[(4) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(3) - (8)]) );
				tri->setCircumC( c );
			;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 330 "yacc.ypp"
    {					/*圆外接于三角形*/
				Circle * c = addCIntoL( (yyvsp[(2) - (8)]) );
				Triangle * tri = addTIntoL( (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]), (yyvsp[(8) - (8)]), (yyvsp[(5) - (8)]) );
				tri->setCircumC( c );
			;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 335 "yacc.ypp"
    {				/*圆内切于三角形*/
				Circle * c = addCIntoL( (yyvsp[(2) - (8)]) );
				Triangle * tri = addTIntoL( (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]), (yyvsp[(8) - (8)]), (yyvsp[(5) - (8)]) );
				tri->setInC( c );
			;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 341 "yacc.ypp"
    {		/*圆与线相切于点*/
				Circle * c = addCIntoL( (yyvsp[(2) - (10)]) );
				Line * l = addLIntoL( (yyvsp[(5) - (10)]), (yyvsp[(6) - (10)]), (yyvsp[(4) - (10)]) );
				Point * p = addPIntoL( (yyvsp[(10) - (10)]) );
				LCRelationTg * r = new LCRelationTg( l, c, p );
				l->addRelation( r );
			;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 348 "yacc.ypp"
    {		/*圆与线相交于两点*/
				Line * l = addLIntoL( (yyvsp[(5) - (12)]), (yyvsp[(6) - (12)]), (yyvsp[(4) - (12)]) );
				Point * p1 = addPIntoL( (yyvsp[(10) - (12)]) );
				Point * p2 = addPIntoL( (yyvsp[(12) - (12)]) );
				Circle * c = addCIntoL( (yyvsp[(2) - (12)]) );
				LCRelationInt * r = new LCRelationInt( l, c, p1, p2 );
				c->addRelation( r );
			;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 358 "yacc.ypp"
    {		/*圆与圆相交于两点*/
				Point * p1 = addPIntoL( (yyvsp[(9) - (11)]) );Point * p2 = addPIntoL( (yyvsp[(11) - (11)]) );
				Circle * c1 = addCIntoL( (yyvsp[(2) - (11)]) );Circle * c2 = addCIntoL( (yyvsp[(5) - (11)]) );
				CCRelationInt * r = new CCRelationInt( c1, c2, p1, p2 );
				c2->addRelation( r );
			;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 368 "yacc.ypp"
    {
				double d = sToD( (yyvsp[(4) - (4)]) );
				Line * l = addLIntoL( (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), "线段" );
				l->setLength( d );
			;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 373 "yacc.ypp"
    {
				Line * l1 = addLIntoL( (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), "线段" );
				Line * l2 = addLIntoL( (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]), "线段" );
				LLNumRelation * r = new LLNumRelation( l1, l2, 1.0 );
				l2->addRelation(r);
			;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 395 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 396 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 396 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 396 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 397 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 397 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 397 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 397 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 398 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 398 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 398 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 399 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 399 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 399 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 400 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 401 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 401 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 401 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 402 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 402 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 402 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 402 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 402 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 403 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 404 "yacc.ypp"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 407 "yacc.ypp"
    {
			double x = sToD( (yyvsp[(2) - (5)]) );
			double y = sToD( (yyvsp[(4) - (5)]) );
			crd = new Coord( x, y );
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2483 "yacc.tab.cpp"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 412 "yacc.ypp"

void main()
{
	init();
	yyparse();
}
int yyerror( char * s )
{
	fprintf( stderr,"%s\n", s );
	return 0;
}
