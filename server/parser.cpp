/* A Bison parser, made by GNU Bison 2.2.  */

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
#define YYBISON_VERSION "2.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse eqLoader_parse
#define yylex   eqLoader_lex
#define yyerror eqLoader_error
#define yylval  eqLoader_lval
#define yychar  eqLoader_char
#define yydebug eqLoader_debug
#define yynerrs eqLoader_nerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EQTOKEN_GLOBAL = 258,
     EQTOKEN_CONNECTION_SATTR_HOSTNAME = 259,
     EQTOKEN_CONNECTION_SATTR_LAUNCH_COMMAND = 260,
     EQTOKEN_CONNECTION_IATTR_TYPE = 261,
     EQTOKEN_CONNECTION_IATTR_TCPIP_PORT = 262,
     EQTOKEN_CONNECTION_IATTR_LAUNCH_TIMEOUT = 263,
     EQTOKEN_CONFIG_FATTR_EYE_BASE = 264,
     EQTOKEN_WINDOW_IATTR_HINTS_STEREO = 265,
     EQTOKEN_WINDOW_IATTR_HINTS_DOUBLEBUFFER = 266,
     EQTOKEN_WINDOW_IATTR_HINTS_FULLSCREEN = 267,
     EQTOKEN_WINDOW_IATTR_HINTS_DECORATION = 268,
     EQTOKEN_WINDOW_IATTR_PLANES_COLOR = 269,
     EQTOKEN_WINDOW_IATTR_PLANES_ALPHA = 270,
     EQTOKEN_WINDOW_IATTR_PLANES_DEPTH = 271,
     EQTOKEN_WINDOW_IATTR_PLANES_STENCIL = 272,
     EQTOKEN_SERVER = 273,
     EQTOKEN_CONFIG = 274,
     EQTOKEN_APPNODE = 275,
     EQTOKEN_NODE = 276,
     EQTOKEN_PIPE = 277,
     EQTOKEN_WINDOW = 278,
     EQTOKEN_ATTRIBUTES = 279,
     EQTOKEN_HINTS = 280,
     EQTOKEN_STEREO = 281,
     EQTOKEN_DOUBLEBUFFER = 282,
     EQTOKEN_FULLSCREEN = 283,
     EQTOKEN_DECORATION = 284,
     EQTOKEN_PLANES = 285,
     EQTOKEN_COLOR = 286,
     EQTOKEN_ALPHA = 287,
     EQTOKEN_DEPTH = 288,
     EQTOKEN_STENCIL = 289,
     EQTOKEN_ON = 290,
     EQTOKEN_OFF = 291,
     EQTOKEN_AUTO = 292,
     EQTOKEN_CHANNEL = 293,
     EQTOKEN_COMPOUND = 294,
     EQTOKEN_CONNECTION = 295,
     EQTOKEN_NAME = 296,
     EQTOKEN_TYPE = 297,
     EQTOKEN_TCPIP = 298,
     EQTOKEN_HOSTNAME = 299,
     EQTOKEN_COMMAND = 300,
     EQTOKEN_TIMEOUT = 301,
     EQTOKEN_TASK = 302,
     EQTOKEN_EYE = 303,
     EQTOKEN_EYE_BASE = 304,
     EQTOKEN_FORMAT = 305,
     EQTOKEN_CLEAR = 306,
     EQTOKEN_DRAW = 307,
     EQTOKEN_READBACK = 308,
     EQTOKEN_CYCLOP = 309,
     EQTOKEN_LEFT = 310,
     EQTOKEN_RIGHT = 311,
     EQTOKEN_VIEWPORT = 312,
     EQTOKEN_RANGE = 313,
     EQTOKEN_DISPLAY = 314,
     EQTOKEN_SCREEN = 315,
     EQTOKEN_WALL = 316,
     EQTOKEN_BOTTOM_LEFT = 317,
     EQTOKEN_BOTTOM_RIGHT = 318,
     EQTOKEN_TOP_LEFT = 319,
     EQTOKEN_SYNC = 320,
     EQTOKEN_LATENCY = 321,
     EQTOKEN_SWAPBARRIER = 322,
     EQTOKEN_OUTPUTFRAME = 323,
     EQTOKEN_INPUTFRAME = 324,
     EQTOKEN_STRING = 325,
     EQTOKEN_FLOAT = 326,
     EQTOKEN_INTEGER = 327,
     EQTOKEN_UNSIGNED = 328
   };
#endif
/* Tokens.  */
#define EQTOKEN_GLOBAL 258
#define EQTOKEN_CONNECTION_SATTR_HOSTNAME 259
#define EQTOKEN_CONNECTION_SATTR_LAUNCH_COMMAND 260
#define EQTOKEN_CONNECTION_IATTR_TYPE 261
#define EQTOKEN_CONNECTION_IATTR_TCPIP_PORT 262
#define EQTOKEN_CONNECTION_IATTR_LAUNCH_TIMEOUT 263
#define EQTOKEN_CONFIG_FATTR_EYE_BASE 264
#define EQTOKEN_WINDOW_IATTR_HINTS_STEREO 265
#define EQTOKEN_WINDOW_IATTR_HINTS_DOUBLEBUFFER 266
#define EQTOKEN_WINDOW_IATTR_HINTS_FULLSCREEN 267
#define EQTOKEN_WINDOW_IATTR_HINTS_DECORATION 268
#define EQTOKEN_WINDOW_IATTR_PLANES_COLOR 269
#define EQTOKEN_WINDOW_IATTR_PLANES_ALPHA 270
#define EQTOKEN_WINDOW_IATTR_PLANES_DEPTH 271
#define EQTOKEN_WINDOW_IATTR_PLANES_STENCIL 272
#define EQTOKEN_SERVER 273
#define EQTOKEN_CONFIG 274
#define EQTOKEN_APPNODE 275
#define EQTOKEN_NODE 276
#define EQTOKEN_PIPE 277
#define EQTOKEN_WINDOW 278
#define EQTOKEN_ATTRIBUTES 279
#define EQTOKEN_HINTS 280
#define EQTOKEN_STEREO 281
#define EQTOKEN_DOUBLEBUFFER 282
#define EQTOKEN_FULLSCREEN 283
#define EQTOKEN_DECORATION 284
#define EQTOKEN_PLANES 285
#define EQTOKEN_COLOR 286
#define EQTOKEN_ALPHA 287
#define EQTOKEN_DEPTH 288
#define EQTOKEN_STENCIL 289
#define EQTOKEN_ON 290
#define EQTOKEN_OFF 291
#define EQTOKEN_AUTO 292
#define EQTOKEN_CHANNEL 293
#define EQTOKEN_COMPOUND 294
#define EQTOKEN_CONNECTION 295
#define EQTOKEN_NAME 296
#define EQTOKEN_TYPE 297
#define EQTOKEN_TCPIP 298
#define EQTOKEN_HOSTNAME 299
#define EQTOKEN_COMMAND 300
#define EQTOKEN_TIMEOUT 301
#define EQTOKEN_TASK 302
#define EQTOKEN_EYE 303
#define EQTOKEN_EYE_BASE 304
#define EQTOKEN_FORMAT 305
#define EQTOKEN_CLEAR 306
#define EQTOKEN_DRAW 307
#define EQTOKEN_READBACK 308
#define EQTOKEN_CYCLOP 309
#define EQTOKEN_LEFT 310
#define EQTOKEN_RIGHT 311
#define EQTOKEN_VIEWPORT 312
#define EQTOKEN_RANGE 313
#define EQTOKEN_DISPLAY 314
#define EQTOKEN_SCREEN 315
#define EQTOKEN_WALL 316
#define EQTOKEN_BOTTOM_LEFT 317
#define EQTOKEN_BOTTOM_RIGHT 318
#define EQTOKEN_TOP_LEFT 319
#define EQTOKEN_SYNC 320
#define EQTOKEN_LATENCY 321
#define EQTOKEN_SWAPBARRIER 322
#define EQTOKEN_OUTPUTFRAME 323
#define EQTOKEN_INPUTFRAME 324
#define EQTOKEN_STRING 325
#define EQTOKEN_FLOAT 326
#define EQTOKEN_INTEGER 327
#define EQTOKEN_UNSIGNED 328




/* Copy the first part of user declarations.  */


#include "loader.h"

#include "compound.h"
#include "frame.h"
#include "global.h"
#include "pipe.h"
#include "server.h"
#include "swapBarrier.h"
#include "window.h"

#include <eq/base/base.h>
#include <string>

    namespace eqLoader
    {
        static eqs::Loader* loader = NULL;
        static std::string  stringBuf;
        
        static eqs::Server*      server;
        static eqs::Config*      config;
        static eqs::Node*        node;
        static eqs::Pipe*        eqPipe; // avoid name clash with pipe()
        static eqs::Window*      window;
        static eqs::Channel*     channel;
        static eqs::Compound*    eqCompound; // avoid name clash on Darwin
        static eqs::SwapBarrier* swapBarrier;
        static eqs::Frame*       frame;
        static eqBase::RefPtr<eqNet::ConnectionDescription> 
            connectionDescription;
    }

    using namespace std;
    using namespace eqLoader;
    using namespace eqBase;

    int eqLoader_lex();

    #define yylineno eqLoader_lineno
    void yyerror( char *errmsg );
    extern char* yytext;
    extern FILE* yyin;
    extern int yylineno;


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

{
    const char*             _string;
    int                     _int;
    unsigned                _unsigned;
    float                   _float;
    eqNet::Connection::Type _connectionType;
    float                   _viewport[4];
}
/* Line 193 of yacc.c.  */

	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   326

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNRULES -- Number of states.  */
#define YYNSTATES  296

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

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
       2,    76,     2,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    75,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    11,    12,    14,    17,    20,    23,
      26,    29,    32,    35,    38,    41,    44,    47,    50,    53,
      56,    59,    61,    62,    68,    70,    73,    74,    82,    83,
      85,    88,    91,    96,    97,    99,   102,   105,   107,   110,
     112,   114,   115,   123,   124,   132,   133,   135,   138,   139,
     140,   142,   145,   146,   152,   153,   155,   158,   161,   164,
     167,   170,   172,   175,   176,   183,   184,   186,   189,   192,
     195,   198,   200,   203,   204,   211,   212,   214,   217,   222,
     225,   228,   229,   231,   234,   239,   244,   245,   247,   250,
     253,   256,   259,   262,   263,   265,   268,   271,   274,   277,
     280,   282,   285,   286,   292,   293,   295,   298,   301,   304,
     306,   309,   310,   318,   319,   321,   322,   324,   327,   330,
     333,   334,   340,   341,   347,   348,   354,   357,   363,   365,
     367,   369,   371,   372,   374,   377,   379,   381,   383,   384,
     386,   389,   391,   393,   395,   396,   398,   401,   403,   405,
     427,   428,   434,   435,   437,   440,   443,   444,   450,   451,
     457,   458,   460,   463,   466,   473,   475,   477,   479,   481,
     483,   485,   487,   489,   491
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      79,     0,    -1,    80,    83,    -1,     3,    74,    81,    75,
      -1,    -1,    80,    -1,    81,    80,    -1,     4,   154,    -1,
       5,   154,    -1,     6,    82,    -1,     7,   157,    -1,     8,
     157,    -1,    10,   153,    -1,    11,   153,    -1,    12,   153,
      -1,    13,   153,    -1,    14,   153,    -1,    15,   153,    -1,
      16,   153,    -1,    17,   153,    -1,     9,   155,    -1,    43,
      -1,    -1,    18,    74,    84,    85,    75,    -1,    86,    -1,
      85,    86,    -1,    -1,    19,    74,    87,    88,    92,   126,
      75,    -1,    -1,    89,    -1,    88,    89,    -1,    66,   157,
      -1,    24,    74,    90,    75,    -1,    -1,    91,    -1,    90,
      91,    -1,    49,   155,    -1,    93,    -1,    92,    93,    -1,
      96,    -1,    94,    -1,    -1,    21,    74,    95,   100,    98,
     105,    75,    -1,    -1,    20,    74,    97,   100,    98,   105,
      75,    -1,    -1,    99,    -1,    98,    99,    -1,    -1,    -1,
     101,    -1,   100,   101,    -1,    -1,    40,    74,   102,   103,
      75,    -1,    -1,   104,    -1,   103,   104,    -1,    42,    82,
      -1,    44,   154,    -1,    45,   154,    -1,    46,   157,    -1,
     106,    -1,   105,   106,    -1,    -1,    22,    74,   107,   108,
     110,    75,    -1,    -1,   109,    -1,   108,   109,    -1,    59,
     157,    -1,    60,   157,    -1,    57,   152,    -1,   111,    -1,
     110,   111,    -1,    -1,    23,    74,   112,   113,   121,    75,
      -1,    -1,   114,    -1,   113,   114,    -1,    24,    74,   115,
      75,    -1,    41,   154,    -1,    57,   152,    -1,    -1,   116,
      -1,   115,   116,    -1,    25,    74,   117,    75,    -1,    30,
      74,   119,    75,    -1,    -1,   118,    -1,   117,   118,    -1,
      26,   153,    -1,    27,   153,    -1,    28,   153,    -1,    29,
     153,    -1,    -1,   120,    -1,   119,   120,    -1,    31,   153,
      -1,    32,   153,    -1,    33,   153,    -1,    34,   153,    -1,
     122,    -1,   121,   122,    -1,    -1,    38,    74,   123,   124,
      75,    -1,    -1,   125,    -1,   124,   125,    -1,    41,   154,
      -1,    57,   152,    -1,   127,    -1,   126,   127,    -1,    -1,
      39,    74,   128,   130,   129,   130,    75,    -1,    -1,   126,
      -1,    -1,   131,    -1,   130,   131,    -1,    41,   154,    -1,
      38,   154,    -1,    -1,    47,    76,   132,   135,    77,    -1,
      -1,    48,    76,   133,   137,    77,    -1,    -1,    50,    76,
     134,   139,    77,    -1,    57,   152,    -1,    58,    76,   155,
     155,    77,    -1,   141,    -1,   142,    -1,   146,    -1,   148,
      -1,    -1,   136,    -1,   135,   136,    -1,    51,    -1,    52,
      -1,    53,    -1,    -1,   138,    -1,   137,   138,    -1,    54,
      -1,    55,    -1,    56,    -1,    -1,   140,    -1,   139,   140,
      -1,    31,    -1,    33,    -1,    61,    74,    62,    76,   155,
     155,   155,    77,    63,    76,   155,   155,   155,    77,    64,
      76,   155,   155,   155,    77,    75,    -1,    -1,    67,    74,
     143,   144,    75,    -1,    -1,   145,    -1,   144,   145,    -1,
      41,   154,    -1,    -1,    68,    74,   147,   150,    75,    -1,
      -1,    69,    74,   149,   150,    75,    -1,    -1,   151,    -1,
     150,   151,    -1,    41,   154,    -1,    76,   155,   155,   155,
     155,    77,    -1,    35,    -1,    36,    -1,    37,    -1,   156,
      -1,    70,    -1,    71,    -1,   156,    -1,    72,    -1,   157,
      -1,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   143,   144,   147,   147,   150,   155,   160,
     165,   170,   175,   180,   185,   190,   195,   200,   205,   210,
     215,   221,   223,   223,   226,   226,   227,   227,   230,   230,
     230,   232,   233,   234,   234,   234,   236,   239,   239,   240,
     240,   241,   241,   245,   245,   249,   249,   249,   250,   253,
     257,   257,   259,   258,   265,   265,   266,   268,   269,   270,
     271,   274,   274,   275,   275,   278,   278,   278,   280,   281,
     282,   288,   288,   289,   289,   292,   292,   292,   294,   296,
     297,   305,   305,   305,   307,   308,   309,   309,   309,   311,
     313,   315,   317,   319,   319,   319,   321,   323,   325,   327,
     330,   330,   331,   331,   334,   335,   335,   337,   338,   348,
     348,   350,   349,   363,   363,   365,   365,   366,   368,   369,
     377,   377,   379,   379,   381,   381,   383,   385,   387,   388,
     389,   390,   392,   392,   392,   394,   395,   396,   398,   398,
     398,   400,   401,   402,   404,   404,   404,   406,   407,   409,
     430,   430,   436,   436,   437,   439,   441,   441,   447,   447,
     453,   453,   453,   455,   457,   466,   467,   468,   469,   471,
     476,   477,   479,   480,   481
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EQTOKEN_GLOBAL",
  "EQTOKEN_CONNECTION_SATTR_HOSTNAME",
  "EQTOKEN_CONNECTION_SATTR_LAUNCH_COMMAND",
  "EQTOKEN_CONNECTION_IATTR_TYPE", "EQTOKEN_CONNECTION_IATTR_TCPIP_PORT",
  "EQTOKEN_CONNECTION_IATTR_LAUNCH_TIMEOUT",
  "EQTOKEN_CONFIG_FATTR_EYE_BASE", "EQTOKEN_WINDOW_IATTR_HINTS_STEREO",
  "EQTOKEN_WINDOW_IATTR_HINTS_DOUBLEBUFFER",
  "EQTOKEN_WINDOW_IATTR_HINTS_FULLSCREEN",
  "EQTOKEN_WINDOW_IATTR_HINTS_DECORATION",
  "EQTOKEN_WINDOW_IATTR_PLANES_COLOR", "EQTOKEN_WINDOW_IATTR_PLANES_ALPHA",
  "EQTOKEN_WINDOW_IATTR_PLANES_DEPTH",
  "EQTOKEN_WINDOW_IATTR_PLANES_STENCIL", "EQTOKEN_SERVER",
  "EQTOKEN_CONFIG", "EQTOKEN_APPNODE", "EQTOKEN_NODE", "EQTOKEN_PIPE",
  "EQTOKEN_WINDOW", "EQTOKEN_ATTRIBUTES", "EQTOKEN_HINTS",
  "EQTOKEN_STEREO", "EQTOKEN_DOUBLEBUFFER", "EQTOKEN_FULLSCREEN",
  "EQTOKEN_DECORATION", "EQTOKEN_PLANES", "EQTOKEN_COLOR", "EQTOKEN_ALPHA",
  "EQTOKEN_DEPTH", "EQTOKEN_STENCIL", "EQTOKEN_ON", "EQTOKEN_OFF",
  "EQTOKEN_AUTO", "EQTOKEN_CHANNEL", "EQTOKEN_COMPOUND",
  "EQTOKEN_CONNECTION", "EQTOKEN_NAME", "EQTOKEN_TYPE", "EQTOKEN_TCPIP",
  "EQTOKEN_HOSTNAME", "EQTOKEN_COMMAND", "EQTOKEN_TIMEOUT", "EQTOKEN_TASK",
  "EQTOKEN_EYE", "EQTOKEN_EYE_BASE", "EQTOKEN_FORMAT", "EQTOKEN_CLEAR",
  "EQTOKEN_DRAW", "EQTOKEN_READBACK", "EQTOKEN_CYCLOP", "EQTOKEN_LEFT",
  "EQTOKEN_RIGHT", "EQTOKEN_VIEWPORT", "EQTOKEN_RANGE", "EQTOKEN_DISPLAY",
  "EQTOKEN_SCREEN", "EQTOKEN_WALL", "EQTOKEN_BOTTOM_LEFT",
  "EQTOKEN_BOTTOM_RIGHT", "EQTOKEN_TOP_LEFT", "EQTOKEN_SYNC",
  "EQTOKEN_LATENCY", "EQTOKEN_SWAPBARRIER", "EQTOKEN_OUTPUTFRAME",
  "EQTOKEN_INPUTFRAME", "EQTOKEN_STRING", "EQTOKEN_FLOAT",
  "EQTOKEN_INTEGER", "EQTOKEN_UNSIGNED", "'{'", "'}'", "'['", "']'",
  "$accept", "file", "global", "globals", "connectionType", "server", "@1",
  "configs", "config", "@2", "configFields", "configField",
  "configAttributes", "configAttribute", "nodes", "node", "otherNode",
  "@3", "appNode", "@4", "nodeFields", "nodeField", "connections",
  "connection", "@5", "connectionFields", "connectionField", "pipes",
  "pipe", "@6", "pipeFields", "pipeField", "windows", "window", "@7",
  "windowFields", "windowField", "windowAttributes", "windowAttribute",
  "windowHints", "windowHint", "windowPlanes", "windowPlane", "channels",
  "channel", "@8", "channelFields", "channelField", "compounds",
  "compound", "@9", "compoundChildren", "compoundFields", "compoundField",
  "@10", "@11", "@12", "compoundTasks", "compoundTask", "compoundEyes",
  "compoundEye", "compoundFormats", "compoundFormat", "wall",
  "swapBarrier", "@13", "swapBarrierFields", "swapBarrierField",
  "outputFrame", "@14", "inputFrame", "@15", "frameFields", "frameField",
  "viewport", "IATTR", "STRING", "FLOAT", "INTEGER", "UNSIGNED", 0
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
     325,   326,   327,   328,   123,   125,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    80,    80,    81,    81,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    82,    84,    83,    85,    85,    87,    86,    88,    88,
      88,    89,    89,    90,    90,    90,    91,    92,    92,    93,
      93,    95,    94,    97,    96,    98,    98,    98,    99,   100,
     100,   100,   102,   101,   103,   103,   103,   104,   104,   104,
     104,   105,   105,   107,   106,   108,   108,   108,   109,   109,
     109,   110,   110,   112,   111,   113,   113,   113,   114,   114,
     114,   115,   115,   115,   116,   116,   117,   117,   117,   118,
     118,   118,   118,   119,   119,   119,   120,   120,   120,   120,
     121,   121,   123,   122,   124,   124,   124,   125,   125,   126,
     126,   128,   127,   129,   129,   130,   130,   130,   131,   131,
     132,   131,   133,   131,   134,   131,   131,   131,   131,   131,
     131,   131,   135,   135,   135,   136,   136,   136,   137,   137,
     137,   138,   138,   138,   139,   139,   139,   140,   140,   141,
     143,   142,   144,   144,   144,   145,   147,   146,   149,   148,
     150,   150,   150,   151,   152,   153,   153,   153,   153,   154,
     155,   155,   156,   156,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     0,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     0,     5,     1,     2,     0,     7,     0,     1,
       2,     2,     4,     0,     1,     2,     2,     1,     2,     1,
       1,     0,     7,     0,     7,     0,     1,     2,     0,     0,
       1,     2,     0,     5,     0,     1,     2,     2,     2,     2,
       2,     1,     2,     0,     6,     0,     1,     2,     2,     2,
       2,     1,     2,     0,     6,     0,     1,     2,     4,     2,
       2,     0,     1,     2,     4,     4,     0,     1,     2,     2,
       2,     2,     2,     0,     1,     2,     2,     2,     2,     2,
       1,     2,     0,     5,     0,     1,     2,     2,     2,     1,
       2,     0,     7,     0,     1,     0,     1,     2,     2,     2,
       0,     5,     0,     5,     0,     5,     2,     5,     1,     1,
       1,     1,     0,     1,     2,     1,     1,     1,     0,     1,
       2,     1,     1,     1,     0,     1,     2,     1,     1,    21,
       0,     5,     0,     1,     2,     2,     0,     5,     0,     5,
       0,     1,     2,     2,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,   169,
       7,     8,    21,     9,   174,    10,    11,   170,   172,    20,
     171,   173,   165,   166,   167,    12,   168,    13,    14,    15,
      16,    17,    18,    19,     1,     0,     2,     5,     0,    22,
       3,     6,     0,     0,     0,    24,    26,    23,    25,    28,
       0,     0,     0,    29,    33,    31,     0,     0,    30,     0,
      37,    40,    39,     0,     0,    34,    43,    41,     0,    38,
       0,   109,    36,    32,    35,    49,    49,   111,    27,   110,
       0,    45,    50,    45,   115,    52,     0,    46,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   116,   128,   129,   130,   131,    54,     0,    47,
       0,    61,     0,   119,   118,   120,   122,   124,     0,   126,
       0,     0,   150,   156,   158,   114,   115,   117,     0,     0,
       0,     0,     0,    55,    63,    44,    62,    42,   132,   138,
     144,     0,     0,     0,   152,   160,   160,     0,    57,    58,
      59,    60,    53,    56,    65,   135,   136,   137,     0,   133,
     141,   142,   143,     0,   139,   147,   148,     0,   145,     0,
       0,     0,     0,     0,   153,     0,     0,   161,     0,   112,
       0,     0,     0,     0,    66,   121,   134,   123,   140,   125,
     146,     0,   127,     0,   155,   151,   154,   163,   157,   162,
     159,    70,    68,    69,     0,    67,     0,    71,     0,     0,
      73,    64,    72,   164,     0,    75,     0,     0,     0,     0,
       0,    76,     0,    81,    79,    80,     0,    77,     0,   100,
       0,     0,     0,     0,    82,   102,    74,   101,     0,    86,
      93,    78,    83,   104,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,    94,     0,     0,     0,
     105,     0,    89,    90,    91,    92,    84,    88,    96,    97,
      98,    99,    85,    95,   107,   108,   103,   106,     0,     0,
       0,     0,     0,     0,     0,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    48,    23,    46,    52,    54,    55,    59,
      62,    63,    74,    75,    69,    70,    71,    86,    72,    85,
      96,    97,    91,    92,   117,   142,   143,   120,   121,   164,
     193,   194,   216,   217,   225,   230,   231,   243,   244,   259,
     260,   265,   266,   238,   239,   253,   269,   270,    80,    81,
      94,   136,   111,   112,   148,   149,   150,   168,   169,   173,
     174,   177,   178,   113,   114,   154,   183,   184,   115,   155,
     116,   156,   186,   187,   129,    35,    20,    29,    30,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -182
static const yytype_int16 yypact[] =
{
     230,   -17,     5,     5,    38,    37,    37,   198,     6,     6,
       6,     6,     6,     6,     6,     6,   120,   121,   230,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,    59,  -182,  -182,    20,  -182,
    -182,  -182,   132,    71,     1,  -182,  -182,  -182,  -182,    39,
      81,    37,    34,  -182,   110,  -182,    86,    98,  -182,   141,
    -182,  -182,  -182,   198,    21,  -182,  -182,  -182,   107,  -182,
      29,  -182,  -182,  -182,  -182,   135,   135,  -182,  -182,  -182,
     131,   135,  -182,   135,   163,  -182,   184,  -182,  -182,   184,
       5,     5,   133,   136,   142,   146,   147,   145,   152,   178,
     179,   126,  -182,  -182,  -182,  -182,  -182,   144,   189,  -182,
      17,  -182,    18,  -182,  -182,  -182,  -182,  -182,   198,  -182,
     198,   196,  -182,  -182,  -182,   236,   163,  -182,    38,     5,
       5,    37,    83,  -182,  -182,  -182,  -182,  -182,   221,   222,
      80,   198,   198,   203,   240,   242,   242,    74,  -182,  -182,
    -182,  -182,  -182,  -182,   143,  -182,  -182,  -182,   101,  -182,
    -182,  -182,  -182,   115,  -182,  -182,  -182,    14,  -182,   198,
     207,   198,     5,    32,  -182,     5,    33,  -182,    44,  -182,
     146,    37,    37,    23,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,   198,  -182,   198,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,   211,  -182,   -11,  -182,   209,   198,
    -182,  -182,  -182,  -182,   210,    93,   225,   215,     5,   146,
     106,  -182,   214,    84,  -182,  -182,   217,  -182,    31,  -182,
     198,   218,   219,    19,  -182,  -182,  -182,  -182,   198,   170,
     183,  -182,  -182,    45,   198,     6,     6,     6,     6,    24,
    -182,     6,     6,     6,     6,    28,  -182,     5,   146,    15,
    -182,   220,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,   231,   223,
     198,   198,   198,   224,   227,  -182
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,    53,  -182,   156,  -182,  -182,  -182,   244,  -182,
    -182,   234,  -182,   226,  -182,   235,  -182,  -182,  -182,  -182,
     212,    27,   228,    55,  -182,  -182,   161,   208,    46,  -182,
    -182,   113,  -182,    92,  -182,  -182,    79,  -182,    67,  -182,
      52,  -182,    47,  -182,    75,  -182,  -182,    48,   204,   -69,
    -182,  -182,   180,   -73,  -182,  -182,  -182,  -182,   150,  -182,
     148,  -182,   149,  -182,  -182,  -182,  -182,   137,  -182,  -182,
    -182,  -182,   166,    94,  -181,     4,    -3,   -63,    -7,    16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      21,    36,    36,    36,    36,    36,    36,    36,    36,   211,
      82,    89,   214,    37,    38,    39,    40,    41,    42,    43,
      53,    25,    26,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   137,   118,
     118,    32,    33,    34,   241,   175,   214,   176,   235,   242,
     255,   256,   257,   258,    66,    67,   267,    18,    60,   261,
     262,   263,   264,    60,   221,   151,    89,   152,    78,   236,
      73,    47,   268,   182,   185,    19,    57,    65,    28,    24,
     190,    22,   191,   192,   137,   185,   267,   285,   179,   180,
     286,   199,   145,   147,   251,    50,    83,   123,   124,   276,
      61,    51,   268,   282,    88,    61,   246,   205,   208,   241,
      24,   175,   100,   176,   242,   101,   201,   227,   203,   210,
      44,   102,   103,   119,   104,   138,   119,   139,   140,   141,
     227,   105,   106,    49,   228,   107,   159,   160,   218,    45,
     219,   108,   109,   110,   236,    56,    98,   228,    98,   189,
     229,    53,   165,   166,   167,    64,   224,   161,   162,    73,
      76,    66,    67,   229,   100,    78,   146,   101,   146,   170,
     171,   172,    77,   102,   103,    90,   104,   248,   195,   204,
      78,    87,   207,   105,   106,   254,   138,   107,   139,   140,
     141,   271,   197,   108,   109,   110,   255,   256,   257,   258,
     190,   100,   191,   192,   101,    95,   118,   212,   213,   125,
     102,   103,   126,   104,   261,   262,   263,   264,   127,   131,
     105,   106,   128,   130,   107,   234,   132,   291,   292,   293,
     108,   109,   110,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    36,    36,
      36,    36,   133,   134,    36,    36,    36,    36,   153,   272,
     273,   274,   275,   144,   284,   278,   279,   280,   281,    27,
      28,    24,   165,   166,   167,    78,   170,   171,   172,   181,
     209,   182,   209,   185,   202,   220,   223,   226,   232,   233,
     240,   245,   249,   250,   158,   289,    68,   288,    58,   290,
      84,   294,   295,   163,    79,    99,   215,   122,   222,   237,
     252,   277,   283,   247,    93,   135,   157,   287,   196,     0,
     206,   198,   188,     0,     0,     0,   200
};

static const yytype_int16 yycheck[] =
{
       3,     8,     9,    10,    11,    12,    13,    14,    15,   190,
      73,    80,    23,     9,    10,    11,    12,    13,    14,    15,
      19,     5,     6,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   111,    22,
      22,    35,    36,    37,    25,    31,    23,    33,   229,    30,
      26,    27,    28,    29,    20,    21,    41,    74,    24,    31,
      32,    33,    34,    24,    75,   128,   135,   130,    39,    38,
      49,    18,    57,    41,    41,    70,    75,    61,    72,    73,
      57,    43,    59,    60,   157,    41,    41,   268,   151,   152,
      75,    77,    75,    75,    75,    75,    75,   100,   101,    75,
      66,    48,    57,    75,    75,    66,    75,    75,    75,    25,
      73,    31,    38,    33,    30,    41,   179,    24,   181,    75,
       0,    47,    48,    96,    50,    42,    99,    44,    45,    46,
      24,    57,    58,    74,    41,    61,   139,   140,   201,    18,
     203,    67,    68,    69,    38,    74,    91,    41,    93,    75,
      57,    19,    51,    52,    53,    74,   219,   141,    75,    49,
      74,    20,    21,    57,    38,    39,   120,    41,   122,    54,
      55,    56,    74,    47,    48,    40,    50,   240,    77,   182,
      39,    74,   185,    57,    58,   248,    42,    61,    44,    45,
      46,   254,    77,    67,    68,    69,    26,    27,    28,    29,
      57,    38,    59,    60,    41,    74,    22,   191,   192,    76,
      47,    48,    76,    50,    31,    32,    33,    34,    76,    74,
      57,    58,    76,    76,    61,   228,    74,   290,   291,   292,
      67,    68,    69,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   255,   256,
     257,   258,    74,    74,   261,   262,   263,   264,    62,   255,
     256,   257,   258,    74,   267,   261,   262,   263,   264,    71,
      72,    73,    51,    52,    53,    39,    54,    55,    56,    76,
     186,    41,   188,    41,    77,    74,    77,    77,    63,    74,
      76,    74,    74,    74,   138,    64,    62,    77,    54,    76,
      74,    77,    75,   142,    69,    93,   193,    99,   216,   230,
     243,   259,   265,   238,    86,   111,   136,   269,   168,    -1,
     183,   173,   156,    -1,    -1,    -1,   177
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    79,    80,    74,    70,
     154,   154,    43,    82,    73,   157,   157,    71,    72,   155,
     156,   157,    35,    36,    37,   153,   156,   153,   153,   153,
     153,   153,   153,   153,     0,    18,    83,    80,    81,    74,
      75,    80,    84,    19,    85,    86,    74,    75,    86,    87,
      24,    66,    88,    89,    74,   157,    20,    21,    89,    92,
      93,    94,    96,    49,    90,    91,    74,    74,    39,    93,
     126,   127,   155,    75,    91,    97,    95,    74,    75,   127,
      40,   100,   101,   100,   128,    74,    98,    99,   101,    98,
      38,    41,    47,    48,    50,    57,    58,    61,    67,    68,
      69,   130,   131,   141,   142,   146,   148,   102,    22,    99,
     105,   106,   105,   154,   154,    76,    76,    76,    76,   152,
      76,    74,    74,    74,    74,   126,   129,   131,    42,    44,
      45,    46,   103,   104,    74,    75,   106,    75,   132,   133,
     134,   155,   155,    62,   143,   147,   149,   130,    82,   154,
     154,   157,    75,   104,   107,    51,    52,    53,   135,   136,
      54,    55,    56,   137,   138,    31,    33,   139,   140,   155,
     155,    76,    41,   144,   145,    41,   150,   151,   150,    75,
      57,    59,    60,   108,   109,    77,   136,    77,   138,    77,
     140,   155,    77,   155,   154,    75,   145,   154,    75,   151,
      75,   152,   157,   157,    23,   109,   110,   111,   155,   155,
      74,    75,   111,    77,   155,   112,    77,    24,    41,    57,
     113,   114,    63,    74,   154,   152,    38,   114,   121,   122,
      76,    25,    30,   115,   116,    74,    75,   122,   155,    74,
      74,    75,   116,   123,   155,    26,    27,    28,    29,   117,
     118,    31,    32,    33,    34,   119,   120,    41,    57,   124,
     125,   155,   153,   153,   153,   153,    75,   118,   153,   153,
     153,   153,    75,   120,   154,   152,    75,   125,    77,    64,
      76,   155,   155,   155,    77,    75
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
yy_symbol_value_print (FILE *yyoutput, int yytype, const YYSTYPE * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    const YYSTYPE * const yyvaluep;
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
yy_symbol_print (FILE *yyoutput, int yytype, const YYSTYPE * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    const YYSTYPE * const yyvaluep;
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
yy_reduce_print (YYSTYPE *yyvsp, 
		   int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule
		   )
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
        case 7:

    {
         eqs::Global::instance()->setConnectionSAttribute(
             eqs::ConnectionDescription::SATTR_HOSTNAME, (yyvsp[(2) - (2)]._string) );
     ;}
    break;

  case 8:

    {
         eqs::Global::instance()->setConnectionSAttribute(
             eqs::ConnectionDescription::SATTR_LAUNCH_COMMAND, (yyvsp[(2) - (2)]._string) );
     ;}
    break;

  case 9:

    { 
         eqs::Global::instance()->setConnectionIAttribute( 
             eqs::ConnectionDescription::IATTR_TYPE, (yyvsp[(2) - (2)]._connectionType) ); 
     ;}
    break;

  case 10:

    {
         eqs::Global::instance()->setConnectionIAttribute(
             eqs::ConnectionDescription::IATTR_TCPIP_PORT, (yyvsp[(2) - (2)]._unsigned) );
     ;}
    break;

  case 11:

    {
         eqs::Global::instance()->setConnectionIAttribute(
             eqs::ConnectionDescription::IATTR_LAUNCH_TIMEOUT, (yyvsp[(2) - (2)]._unsigned) );
     ;}
    break;

  case 12:

    {
         eqs::Global::instance()->setWindowIAttribute(
             eq::Window::IATTR_HINTS_STEREO, (yyvsp[(2) - (2)]._int) );
     ;}
    break;

  case 13:

    {
         eqs::Global::instance()->setWindowIAttribute(
             eq::Window::IATTR_HINTS_DOUBLEBUFFER, (yyvsp[(2) - (2)]._int) );
     ;}
    break;

  case 14:

    {
         eqs::Global::instance()->setWindowIAttribute(
             eq::Window::IATTR_HINTS_FULLSCREEN, (yyvsp[(2) - (2)]._int) );
     ;}
    break;

  case 15:

    {
         eqs::Global::instance()->setWindowIAttribute(
             eq::Window::IATTR_HINTS_DECORATION, (yyvsp[(2) - (2)]._int) );
     ;}
    break;

  case 16:

    {
         eqs::Global::instance()->setWindowIAttribute(
             eq::Window::IATTR_PLANES_COLOR, (yyvsp[(2) - (2)]._int) );
     ;}
    break;

  case 17:

    {
         eqs::Global::instance()->setWindowIAttribute(
             eq::Window::IATTR_PLANES_ALPHA, (yyvsp[(2) - (2)]._int) );
     ;}
    break;

  case 18:

    {
         eqs::Global::instance()->setWindowIAttribute(
             eq::Window::IATTR_PLANES_DEPTH, (yyvsp[(2) - (2)]._int) );
     ;}
    break;

  case 19:

    {
         eqs::Global::instance()->setWindowIAttribute(
             eq::Window::IATTR_PLANES_STENCIL, (yyvsp[(2) - (2)]._int) );
     ;}
    break;

  case 20:

    {
         eqs::Global::instance()->setConfigFAttribute(
             eqs::Config::FATTR_EYE_BASE, (yyvsp[(2) - (2)]._float) );
     ;}
    break;

  case 21:

    { (yyval._connectionType) = eqNet::Connection::TYPE_TCPIP; ;}
    break;

  case 22:

    { server = loader->createServer(); ;}
    break;

  case 26:

    { config = loader->createConfig(); ;}
    break;

  case 27:

    { server->addConfig( config ); config = NULL; ;}
    break;

  case 31:

    { config->setLatency( (yyvsp[(2) - (2)]._unsigned) ); ;}
    break;

  case 36:

    { config->setFAttribute( 
                             eqs::Config::FATTR_EYE_BASE, (yyvsp[(2) - (2)]._float) ); ;}
    break;

  case 41:

    { node = loader->createNode(); ;}
    break;

  case 42:

    { config->addNode( node ); node = NULL; ;}
    break;

  case 43:

    { node = loader->createNode(); ;}
    break;

  case 44:

    { config->addApplicationNode( node ); node = NULL; ;}
    break;

  case 49:

    { // No connection specified, create default from globals
                 node->addConnectionDescription(
                     new eqs::ConnectionDescription( ));
             ;}
    break;

  case 52:

    { connectionDescription = new eqs::ConnectionDescription(); ;}
    break;

  case 53:

    { 
                 node->addConnectionDescription( connectionDescription );
                 connectionDescription = NULL;
             ;}
    break;

  case 57:

    { connectionDescription->type = (yyvsp[(2) - (2)]._connectionType); ;}
    break;

  case 58:

    { connectionDescription->hostname = (yyvsp[(2) - (2)]._string); ;}
    break;

  case 59:

    { connectionDescription->launchCommand = (yyvsp[(2) - (2)]._string); ;}
    break;

  case 60:

    { connectionDescription->launchTimeout = (yyvsp[(2) - (2)]._unsigned); ;}
    break;

  case 63:

    { eqPipe = loader->createPipe(); ;}
    break;

  case 64:

    { node->addPipe( eqPipe ); eqPipe = NULL; ;}
    break;

  case 68:

    { eqPipe->setDisplay( (yyvsp[(2) - (2)]._unsigned) ); ;}
    break;

  case 69:

    { eqPipe->setScreen( (yyvsp[(2) - (2)]._unsigned) ); ;}
    break;

  case 70:

    {
            eqPipe->setPixelViewport( eq::PixelViewport( (int)(yyvsp[(2) - (2)]._viewport)[0], (int)(yyvsp[(2) - (2)]._viewport)[1],
                                                      (int)(yyvsp[(2) - (2)]._viewport)[2], (int)(yyvsp[(2) - (2)]._viewport)[3] ));
        ;}
    break;

  case 73:

    { window = loader->createWindow(); ;}
    break;

  case 74:

    { eqPipe->addWindow( window ); window = NULL; ;}
    break;

  case 79:

    { window->setName( (yyvsp[(2) - (2)]._string) ); ;}
    break;

  case 80:

    {
            if( (yyvsp[(2) - (2)]._viewport)[2] > 1 || (yyvsp[(2) - (2)]._viewport)[3] > 1 )
                window->setPixelViewport( eq::PixelViewport( (int)(yyvsp[(2) - (2)]._viewport)[0], 
                                          (int)(yyvsp[(2) - (2)]._viewport)[1], (int)(yyvsp[(2) - (2)]._viewport)[2], (int)(yyvsp[(2) - (2)]._viewport)[3] ));
            else
                window->setViewport( eq::Viewport((yyvsp[(2) - (2)]._viewport)[0], (yyvsp[(2) - (2)]._viewport)[1], (yyvsp[(2) - (2)]._viewport)[2], (yyvsp[(2) - (2)]._viewport)[3])); 
        ;}
    break;

  case 89:

    { window->setIAttribute( eq::Window::IATTR_HINTS_STEREO, (yyvsp[(2) - (2)]._int) ); ;}
    break;

  case 90:

    { window->setIAttribute( eq::Window::IATTR_HINTS_DOUBLEBUFFER, (yyvsp[(2) - (2)]._int) ); ;}
    break;

  case 91:

    { window->setIAttribute( eq::Window::IATTR_HINTS_FULLSCREEN, (yyvsp[(2) - (2)]._int) ); ;}
    break;

  case 92:

    { window->setIAttribute( eq::Window::IATTR_HINTS_DECORATION, (yyvsp[(2) - (2)]._int) ); ;}
    break;

  case 96:

    { window->setIAttribute( eq::Window::IATTR_PLANES_COLOR, (yyvsp[(2) - (2)]._int) ); ;}
    break;

  case 97:

    { window->setIAttribute( eq::Window::IATTR_PLANES_ALPHA, (yyvsp[(2) - (2)]._int) ); ;}
    break;

  case 98:

    { window->setIAttribute( eq::Window::IATTR_PLANES_DEPTH, (yyvsp[(2) - (2)]._int) ); ;}
    break;

  case 99:

    { window->setIAttribute( eq::Window::IATTR_PLANES_STENCIL, (yyvsp[(2) - (2)]._int) ); ;}
    break;

  case 102:

    { channel = loader->createChannel(); ;}
    break;

  case 103:

    { window->addChannel( channel ); channel = NULL; ;}
    break;

  case 107:

    { channel->setName( (yyvsp[(2) - (2)]._string) ); ;}
    break;

  case 108:

    {
            if( (yyvsp[(2) - (2)]._viewport)[2] > 1 || (yyvsp[(2) - (2)]._viewport)[3] > 1 )
                channel->setPixelViewport( eq::PixelViewport( (int)(yyvsp[(2) - (2)]._viewport)[0],
                                          (int)(yyvsp[(2) - (2)]._viewport)[1], (int)(yyvsp[(2) - (2)]._viewport)[2], (int)(yyvsp[(2) - (2)]._viewport)[3] ));
            else
                channel->setViewport(eq::Viewport( (yyvsp[(2) - (2)]._viewport)[0], (yyvsp[(2) - (2)]._viewport)[1], (yyvsp[(2) - (2)]._viewport)[2], (yyvsp[(2) - (2)]._viewport)[3]));
        ;}
    break;

  case 111:

    {
                  eqs::Compound* child = loader->createCompound();
                  if( eqCompound )
                      eqCompound->addChild( child );
                  else
                      config->addCompound( child );
                  eqCompound = child;
              ;}
    break;

  case 112:

    { eqCompound = eqCompound->getParent(); ;}
    break;

  case 118:

    { eqCompound->setName( (yyvsp[(2) - (2)]._string) ); ;}
    break;

  case 119:

    {
         eqs::Channel* channel = config->findChannel( (yyvsp[(2) - (2)]._string) );
         if( !channel )
             yyerror( "No channel of the given name" );
         else
             eqCompound->setChannel( channel );
    ;}
    break;

  case 120:

    { eqCompound->setTasks( eqs::Compound::TASK_NONE ); ;}
    break;

  case 122:

    { eqCompound->setEyes( eqs::Compound::EYE_UNDEFINED ); ;}
    break;

  case 124:

    { eqCompound->setFormats( eq::Frame::FORMAT_UNDEFINED );;}
    break;

  case 126:

    { eqCompound->setViewport( eq::Viewport( (yyvsp[(2) - (2)]._viewport)[0], (yyvsp[(2) - (2)]._viewport)[1], (yyvsp[(2) - (2)]._viewport)[2], (yyvsp[(2) - (2)]._viewport)[3] )); ;}
    break;

  case 127:

    { eqCompound->setRange( eq::Range( (yyvsp[(3) - (5)]._float), (yyvsp[(4) - (5)]._float) )); ;}
    break;

  case 135:

    { eqCompound->enableTask( eqs::Compound::TASK_CLEAR ); ;}
    break;

  case 136:

    { eqCompound->enableTask( eqs::Compound::TASK_DRAW ); ;}
    break;

  case 137:

    { eqCompound->enableTask( eqs::Compound::TASK_READBACK ); ;}
    break;

  case 141:

    { eqCompound->enableEye( eqs::Compound::EYE_CYCLOP ); ;}
    break;

  case 142:

    { eqCompound->enableEye( eqs::Compound::EYE_LEFT ); ;}
    break;

  case 143:

    { eqCompound->enableEye( eqs::Compound::EYE_RIGHT ); ;}
    break;

  case 147:

    { eqCompound->enableFormat( eq::Frame::FORMAT_COLOR ); ;}
    break;

  case 148:

    { eqCompound->enableFormat( eq::Frame::FORMAT_DEPTH ); ;}
    break;

  case 149:

    { 
        eq::Wall wall;
        wall.bottomLeft[0] = (yyvsp[(5) - (21)]._float);
        wall.bottomLeft[1] = (yyvsp[(6) - (21)]._float);
        wall.bottomLeft[2] = (yyvsp[(7) - (21)]._float);

        wall.bottomRight[0] = (yyvsp[(11) - (21)]._float);
        wall.bottomRight[1] = (yyvsp[(12) - (21)]._float);
        wall.bottomRight[2] = (yyvsp[(13) - (21)]._float);

        wall.topLeft[0] = (yyvsp[(17) - (21)]._float);
        wall.topLeft[1] = (yyvsp[(18) - (21)]._float);
        wall.topLeft[2] = (yyvsp[(19) - (21)]._float);
        eqCompound->setWall( wall );
    ;}
    break;

  case 150:

    { swapBarrier = new eqs::SwapBarrier(); ;}
    break;

  case 151:

    { 
            eqCompound->setSwapBarrier( swapBarrier );
            swapBarrier = NULL;
        ;}
    break;

  case 155:

    { swapBarrier->setName( (yyvsp[(2) - (2)]._string) ); ;}
    break;

  case 156:

    { frame = new eqs::Frame(); ;}
    break;

  case 157:

    { 
            eqCompound->addOutputFrame( frame );
            frame = NULL;
        ;}
    break;

  case 158:

    { frame = new eqs::Frame(); ;}
    break;

  case 159:

    { 
            eqCompound->addInputFrame( frame );
            frame = NULL;
        ;}
    break;

  case 163:

    { frame->setName( (yyvsp[(2) - (2)]._string) ); ;}
    break;

  case 164:

    { 
         (yyval._viewport)[0] = (yyvsp[(2) - (6)]._float);
         (yyval._viewport)[1] = (yyvsp[(3) - (6)]._float);
         (yyval._viewport)[2] = (yyvsp[(4) - (6)]._float);
         (yyval._viewport)[3] = (yyvsp[(5) - (6)]._float);
     ;}
    break;

  case 165:

    { (yyval._int) = eq::ON; ;}
    break;

  case 166:

    { (yyval._int) = eq::OFF; ;}
    break;

  case 167:

    { (yyval._int) = eq::AUTO; ;}
    break;

  case 168:

    { (yyval._int) = (yyvsp[(1) - (1)]._int); ;}
    break;

  case 169:

    {
         stringBuf = yytext;
         (yyval._string) = stringBuf.c_str(); 
     ;}
    break;

  case 170:

    { (yyval._float) = atof( yytext ); ;}
    break;

  case 171:

    { (yyval._float) = (yyvsp[(1) - (1)]._int); ;}
    break;

  case 172:

    { (yyval._int) = atoi( yytext ); ;}
    break;

  case 173:

    { (yyval._int) = (yyvsp[(1) - (1)]._unsigned); ;}
    break;

  case 174:

    { (yyval._unsigned) = atoi( yytext ); ;}
    break;


/* Line 1267 of yacc.c.  */

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
  return yyresult;
}





void yyerror( char *errmsg )
{
    EQERROR << "Parse error: '" << errmsg << "', line " << yylineno
            << " at '" << yytext << "'" << endl;
}

//---------------------------------------------------------------------------
// loader
//---------------------------------------------------------------------------
eqs::Server* eqs::Loader::loadConfig( const string& filename )
{
    EQASSERTINFO( !loader, "Config file loader is not reentrant" );
    loader = this;

    yyin = fopen( filename.c_str(), "r" );
    if( !yyin )
    {
        EQERROR << "Can't open config file " << filename << endl;
        return NULL;
    }

    server      = NULL;
    bool retval = true;
    if( eqLoader_parse() )
        retval = false;

    fclose( yyin );
    loader = NULL;
    return server;
}

