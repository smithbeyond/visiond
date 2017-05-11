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
     INT_LITERAL = 258,
     DOUBLE_LITERAL = 259,
     STRING_LITERAL = 260,
     REGEXP_LITERAL = 261,
     IDENTIFIER = 262,
     FUNCTION = 263,
     IF = 264,
     ELSE = 265,
     ELSIF = 266,
     WHILE = 267,
     FOR = 268,
     FOREACH = 269,
     RETURN_T = 270,
     BREAK = 271,
     CONTINUE = 272,
     NULL_T = 273,
     LP = 274,
     RP = 275,
     LC = 276,
     RC = 277,
     LB = 278,
     RB = 279,
     SEMICOLON = 280,
     COLON = 281,
     COMMA = 282,
     ASSIGN_T = 283,
     LOGICAL_AND = 284,
     LOGICAL_OR = 285,
     EQ = 286,
     NE = 287,
     GT = 288,
     GE = 289,
     LT = 290,
     LE = 291,
     ADD = 292,
     SUB = 293,
     MUL = 294,
     DIV = 295,
     MOD = 296,
     TRUE_T = 297,
     FALSE_T = 298,
     EXCLAMATION = 299,
     DOT = 300,
     ADD_ASSIGN_T = 301,
     SUB_ASSIGN_T = 302,
     MUL_ASSIGN_T = 303,
     DIV_ASSIGN_T = 304,
     MOD_ASSIGN_T = 305,
     INCREMENT = 306,
     DECREMENT = 307,
     CLOSURE = 308,
     GLOBAL_T = 309,
     TRY = 310,
     CATCH = 311,
     FINALLY = 312,
     THROW = 313,
     FINAL = 314
   };
#endif
/* Tokens.  */
#define INT_LITERAL 258
#define DOUBLE_LITERAL 259
#define STRING_LITERAL 260
#define REGEXP_LITERAL 261
#define IDENTIFIER 262
#define FUNCTION 263
#define IF 264
#define ELSE 265
#define ELSIF 266
#define WHILE 267
#define FOR 268
#define FOREACH 269
#define RETURN_T 270
#define BREAK 271
#define CONTINUE 272
#define NULL_T 273
#define LP 274
#define RP 275
#define LC 276
#define RC 277
#define LB 278
#define RB 279
#define SEMICOLON 280
#define COLON 281
#define COMMA 282
#define ASSIGN_T 283
#define LOGICAL_AND 284
#define LOGICAL_OR 285
#define EQ 286
#define NE 287
#define GT 288
#define GE 289
#define LT 290
#define LE 291
#define ADD 292
#define SUB 293
#define MUL 294
#define DIV 295
#define MOD 296
#define TRUE_T 297
#define FALSE_T 298
#define EXCLAMATION 299
#define DOT 300
#define ADD_ASSIGN_T 301
#define SUB_ASSIGN_T 302
#define MUL_ASSIGN_T 303
#define DIV_ASSIGN_T 304
#define MOD_ASSIGN_T 305
#define INCREMENT 306
#define DECREMENT 307
#define CLOSURE 308
#define GLOBAL_T 309
#define TRY 310
#define CATCH 311
#define FINALLY 312
#define THROW 313
#define FINAL 314




/* Copy the first part of user declarations.  */
#line 1 "crowbar.y"

#include <stdio.h>
#include "crowbar.h"
#define YYDEBUG 1


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
#line 6 "crowbar.y"
{
    char                *identifier;
    CRB_ParameterList   *parameter_list;
    ArgumentList        *argument_list;
    Expression          *expression;
    ExpressionList      *expression_list;
    Statement           *statement;
    StatementList       *statement_list;
    CRB_Block           *block;
    Elsif               *elsif;
    AssignmentOperator  assignment_operator;
    IdentifierList      *identifier_list;
}
/* Line 193 of yacc.c.  */
#line 234 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 247 "y.tab.c"

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
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   452

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNRULES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    19,    25,    27,
      31,    33,    37,    39,    42,    44,    48,    50,    54,    59,
      61,    63,    65,    67,    69,    71,    73,    77,    79,    83,
      85,    89,    93,    95,    99,   103,   107,   111,   113,   117,
     121,   123,   127,   131,   135,   137,   140,   143,   145,   150,
     154,   159,   163,   166,   169,   173,   175,   177,   179,   181,
     183,   185,   187,   189,   191,   193,   197,   202,   209,   215,
     221,   226,   227,   229,   233,   236,   238,   240,   242,   244,
     246,   248,   250,   252,   254,   256,   260,   262,   266,   272,
     280,   287,   296,   298,   301,   307,   308,   311,   318,   329,
     338,   339,   341,   345,   346,   348,   352,   356,   366,   371,
     379,   383,   387
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    62,    -1,    61,    62,    -1,    63,    -1,
      82,    -1,     8,     7,    19,    64,    20,    99,    -1,     8,
       7,    19,    20,    99,    -1,     7,    -1,    64,    27,     7,
      -1,    68,    -1,    65,    27,    68,    -1,    82,    -1,    66,
      82,    -1,    68,    -1,    67,    27,    68,    -1,    70,    -1,
      77,    69,    68,    -1,    59,    77,    69,    68,    -1,    28,
      -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
      -1,    71,    -1,    70,    30,    71,    -1,    72,    -1,    71,
      29,    72,    -1,    73,    -1,    72,    31,    73,    -1,    72,
      32,    73,    -1,    74,    -1,    73,    33,    74,    -1,    73,
      34,    74,    -1,    73,    35,    74,    -1,    73,    36,    74,
      -1,    75,    -1,    74,    37,    75,    -1,    74,    38,    75,
      -1,    76,    -1,    75,    39,    76,    -1,    75,    40,    76,
      -1,    75,    41,    76,    -1,    77,    -1,    38,    76,    -1,
      44,    76,    -1,    78,    -1,    77,    23,    67,    24,    -1,
      77,    45,     7,    -1,    77,    19,    65,    20,    -1,    77,
      19,    20,    -1,    77,    51,    -1,    77,    52,    -1,    19,
      67,    20,    -1,     7,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,    42,    -1,    43,    -1,    18,    -1,    79,
      -1,    80,    -1,    21,    81,    22,    -1,    21,    81,    27,
      22,    -1,    53,     7,    19,    64,    20,    99,    -1,    53,
       7,    19,    20,    99,    -1,    53,    19,    64,    20,    99,
      -1,    53,    19,    20,    99,    -1,    -1,    68,    -1,    81,
      27,    68,    -1,    67,    25,    -1,    83,    -1,    85,    -1,
      89,    -1,    90,    -1,    91,    -1,    93,    -1,    95,    -1,
      96,    -1,    97,    -1,    98,    -1,    54,    84,    25,    -1,
       7,    -1,    84,    27,     7,    -1,     9,    19,    67,    20,
      99,    -1,     9,    19,    67,    20,    99,    10,    99,    -1,
       9,    19,    67,    20,    99,    86,    -1,     9,    19,    67,
      20,    99,    86,    10,    99,    -1,    87,    -1,    86,    87,
      -1,    11,    19,    67,    20,    99,    -1,    -1,     7,    26,
      -1,    88,    12,    19,    67,    20,    99,    -1,    88,    13,
      19,    92,    25,    92,    25,    92,    20,    99,    -1,    88,
      14,    19,     7,    26,    67,    20,    99,    -1,    -1,    67,
      -1,    15,    92,    25,    -1,    -1,     7,    -1,    16,    94,
      25,    -1,    17,    94,    25,    -1,    55,    99,    56,    19,
       7,    20,    99,    57,    99,    -1,    55,    99,    57,    99,
      -1,    55,    99,    56,    19,     7,    20,    99,    -1,    58,
      67,    25,    -1,    21,    66,    22,    -1,    21,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    52,    55,    56,    65,    69,    75,    79,
      85,    89,    95,    99,   105,   106,   112,   113,   117,   123,
     127,   131,   135,   139,   143,   149,   150,   156,   157,   163,
     164,   168,   174,   175,   179,   183,   187,   193,   194,   198,
     204,   205,   209,   213,   219,   220,   224,   230,   231,   235,
     239,   243,   247,   251,   257,   261,   265,   266,   267,   268,
     269,   273,   277,   281,   282,   285,   289,   295,   299,   303,
     307,   314,   317,   321,   327,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   343,   349,   353,   359,   363,
     367,   371,   377,   378,   384,   391,   394,   400,   406,   413,
     420,   423,   426,   433,   436,   439,   445,   451,   455,   459,
     464,   469,   473
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_LITERAL", "DOUBLE_LITERAL",
  "STRING_LITERAL", "REGEXP_LITERAL", "IDENTIFIER", "FUNCTION", "IF",
  "ELSE", "ELSIF", "WHILE", "FOR", "FOREACH", "RETURN_T", "BREAK",
  "CONTINUE", "NULL_T", "LP", "RP", "LC", "RC", "LB", "RB", "SEMICOLON",
  "COLON", "COMMA", "ASSIGN_T", "LOGICAL_AND", "LOGICAL_OR", "EQ", "NE",
  "GT", "GE", "LT", "LE", "ADD", "SUB", "MUL", "DIV", "MOD", "TRUE_T",
  "FALSE_T", "EXCLAMATION", "DOT", "ADD_ASSIGN_T", "SUB_ASSIGN_T",
  "MUL_ASSIGN_T", "DIV_ASSIGN_T", "MOD_ASSIGN_T", "INCREMENT", "DECREMENT",
  "CLOSURE", "GLOBAL_T", "TRY", "CATCH", "FINALLY", "THROW", "FINAL",
  "$accept", "translation_unit", "definition_or_statement",
  "function_definition", "parameter_list", "argument_list",
  "statement_list", "expression", "assignment_expression",
  "assignment_operator", "logical_or_expression", "logical_and_expression",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "postfix_expression",
  "primary_expression", "array_literal", "closure_definition",
  "expression_list", "statement", "global_statement", "identifier_list",
  "if_statement", "elsif_list", "elsif", "label_opt", "while_statement",
  "for_statement", "foreach_statement", "expression_opt",
  "return_statement", "identifier_opt", "break_statement",
  "continue_statement", "try_statement", "throw_statement", "block", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    70,    71,    71,    72,
      72,    72,    73,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    75,    75,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    84,    84,    85,    85,
      85,    85,    86,    86,    87,    88,    88,    89,    90,    91,
      92,    92,    93,    94,    94,    95,    96,    97,    97,    97,
      98,    99,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     6,     5,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     1,     4,     3,
       4,     3,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     6,     5,     5,
       4,     0,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     5,     7,
       6,     8,     1,     2,     5,     0,     2,     6,    10,     8,
       0,     1,     3,     0,     1,     3,     3,     9,     4,     7,
       3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      95,    56,    57,    58,    59,    55,     0,     0,   100,   103,
     103,    62,     0,    71,     0,    60,    61,     0,     0,     0,
       0,     0,     0,    95,     2,     4,     0,    14,    16,    25,
      27,    29,    32,    37,    40,    44,    47,    63,    64,     5,
      75,    76,     0,    77,    78,    79,    80,    81,    82,    83,
      84,    96,     0,     0,    55,   101,     0,   104,     0,     0,
       0,    72,     0,    45,    44,    46,     0,     0,    86,     0,
      95,     0,     0,     0,     1,     3,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,    20,    21,    22,    23,    24,
      52,    53,     0,     0,     0,     0,     0,     0,   102,   105,
     106,    54,    65,     0,     0,     8,     0,     0,    85,     0,
     112,    95,    12,     0,     0,   110,     0,    15,    26,    28,
      30,    31,    33,    34,    35,    36,    38,    39,    41,    42,
      43,    51,     0,    10,     0,    49,    17,     0,   100,     0,
       0,     0,     0,    66,    73,     0,     0,    70,     0,     0,
      87,   111,    13,     0,   108,    18,    50,     0,    48,     0,
       0,     0,     7,     0,    88,    68,     0,    69,     9,     0,
      11,     0,   100,     0,     6,     0,     0,    90,    92,    67,
       0,    97,     0,     0,    89,     0,     0,    93,   109,   100,
       0,     0,    91,     0,     0,    99,     0,   107,     0,    94,
      98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,   117,   142,   121,    26,    27,   102,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    62,    39,    40,    69,    41,   187,   188,    42,    43,
      44,    45,    56,    46,    58,    47,    48,    49,    50,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -146
static const yytype_int16 yypact[] =
{
     198,  -146,  -146,  -146,  -146,   -11,    24,    10,   342,    27,
      27,  -146,   342,   342,   372,  -146,  -146,   372,     4,    32,
      45,   342,   399,   141,  -146,  -146,    53,  -146,    18,    40,
     106,    39,   105,    59,  -146,    84,  -146,  -146,  -146,  -146,
    -146,  -146,    92,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,    34,   342,  -146,    50,    63,  -146,    66,    68,
       5,  -146,   -10,  -146,    -5,  -146,    83,    -1,  -146,    56,
     228,    95,    60,    84,  -146,  -146,  -146,   342,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   285,   342,  -146,   108,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,   342,    94,   142,   150,     0,     6,  -146,  -146,
    -146,  -146,  -146,   315,     2,  -146,    45,     8,  -146,   163,
    -146,   258,  -146,   152,    45,  -146,   342,  -146,    40,   106,
      39,    39,   105,   105,   105,   105,    59,    59,  -146,  -146,
    -146,  -146,    22,  -146,     3,  -146,  -146,   342,   342,   165,
      45,    23,    45,  -146,  -146,    45,    31,  -146,    45,   166,
    -146,  -146,  -146,   169,  -146,  -146,  -146,   342,  -146,    37,
     155,   151,  -146,    45,   143,  -146,    45,  -146,  -146,   158,
    -146,    45,   342,   342,  -146,    45,   162,   153,  -146,  -146,
      45,  -146,   157,    41,  -146,   342,    45,  -146,   129,   342,
      45,    43,  -146,    45,   168,  -146,    45,  -146,    45,  -146,
    -146
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,   167,  -146,   -98,  -146,  -146,    -8,   -12,   116,
    -146,   114,   118,    85,    26,    81,     7,    38,  -146,  -146,
    -146,  -146,   -65,  -146,  -146,  -146,  -146,    11,  -146,  -146,
    -146,  -146,  -145,  -146,   183,  -146,  -146,  -146,  -146,  -114
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      55,    61,   157,   170,    60,   122,   115,   115,   151,   115,
     164,    66,   112,    72,    91,    51,   156,   113,    92,   116,
     150,    63,   155,    67,    65,   111,   152,   168,   158,    53,
      77,    52,    77,    77,    57,   159,   172,   192,   174,    68,
      94,   175,   166,   173,   177,   107,   100,   101,    78,   167,
     159,   176,    64,   106,   204,    64,   162,   181,   159,   184,
      73,   200,   189,   206,    77,   127,    70,   191,    77,    79,
      77,   194,    82,    83,    84,    85,   198,    77,    76,   143,
      77,   118,   202,   119,   144,   125,   205,    77,   108,   207,
     146,   109,   209,   110,   210,   138,   139,   140,    88,    89,
      90,   154,   114,    91,   103,   104,   105,    92,   132,   133,
     134,   135,    93,   147,   165,   145,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    94,
      95,    96,    97,    98,    99,   100,   101,    80,    81,   169,
      55,    74,    86,    87,     1,     2,     3,     4,     5,     6,
       7,   123,   124,   185,   186,   180,     8,     9,    10,    11,
      12,   148,    13,   196,   186,   130,   131,   136,   137,   149,
     160,   163,   171,   178,    55,   193,   179,   183,   190,    14,
     182,   195,   199,    15,    16,    17,   203,   201,   208,   126,
      75,    55,   128,    59,    18,    19,    20,   129,   197,    21,
      22,     1,     2,     3,     4,     5,     6,     7,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     4,     5,    14,     7,     0,     0,
      15,    16,    17,     8,     9,    10,    11,    12,     0,    13,
     120,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     1,     2,     3,     4,     5,    14,     7,     0,     0,
      15,    16,    17,     8,     9,    10,    11,    12,     0,    13,
     161,    18,    19,    20,     0,     0,    21,    22,     1,     2,
       3,     4,    54,     0,     0,     0,    14,     0,     0,     0,
      15,    16,    17,    11,    12,   141,    13,     0,     0,     0,
       0,    18,    19,    20,     0,     0,    21,    22,     1,     2,
       3,     4,    54,    14,     0,     0,     0,    15,    16,    17,
       0,     0,     0,    11,    12,     0,    13,   153,    18,     0,
       0,     0,     0,     0,    22,     1,     2,     3,     4,    54,
       0,     0,     0,    14,     0,     0,     0,    15,    16,    17,
      11,    12,     0,    13,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,    22,     1,     2,     3,     4,    54,
      14,     0,     0,     0,    15,    16,    17,     0,     0,     0,
      11,    12,     0,    13,     0,    18,     0,     0,     0,     0,
       0,    22,     1,     2,     3,     4,    54,     0,     0,     0,
      14,     0,     0,     0,    15,    16,    17,    11,    12,     0,
      13,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18
};

static const yytype_int16 yycheck[] =
{
       8,    13,   116,   148,    12,    70,     7,     7,   106,     7,
     124,     7,    22,    21,    19,    26,   114,    27,    23,    20,
      20,    14,    20,    19,    17,    20,    20,    24,    20,    19,
      27,     7,    27,    27,     7,    27,   150,   182,   152,     7,
      45,   155,    20,    20,   158,    53,    51,    52,    30,    27,
      27,    20,    14,    19,   199,    17,   121,    20,    27,   173,
      22,    20,   176,    20,    27,    77,    21,   181,    27,    29,
      27,   185,    33,    34,    35,    36,   190,    27,    25,    91,
      27,    25,   196,    27,    92,    25,   200,    27,    25,   203,
     102,    25,   206,    25,   208,    88,    89,    90,    39,    40,
      41,   113,    19,    19,    12,    13,    14,    23,    82,    83,
      84,    85,    28,    19,   126,     7,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    45,
      46,    47,    48,    49,    50,    51,    52,    31,    32,   147,
     148,     0,    37,    38,     3,     4,     5,     6,     7,     8,
       9,    56,    57,    10,    11,   167,    15,    16,    17,    18,
      19,    19,    21,    10,    11,    80,    81,    86,    87,    19,
       7,    19,     7,     7,   182,   183,     7,    26,    20,    38,
      25,    19,    25,    42,    43,    44,    57,   195,    20,    73,
      23,   199,    78,    10,    53,    54,    55,    79,   187,    58,
      59,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    38,     9,    -1,    -1,
      42,    43,    44,    15,    16,    17,    18,    19,    -1,    21,
      22,    53,    54,    55,    -1,    -1,    58,    59,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    38,     9,    -1,    -1,
      42,    43,    44,    15,    16,    17,    18,    19,    -1,    21,
      22,    53,    54,    55,    -1,    -1,    58,    59,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    53,    54,    55,    -1,    -1,    58,    59,     3,     4,
       5,     6,     7,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    18,    19,    -1,    21,    22,    53,    -1,
      -1,    -1,    -1,    -1,    59,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,     3,     4,     5,     6,     7,
      38,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      18,    19,    -1,    21,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    43,    44,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    15,    16,
      17,    18,    19,    21,    38,    42,    43,    44,    53,    54,
      55,    58,    59,    61,    62,    63,    67,    68,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    82,
      83,    85,    88,    89,    90,    91,    93,    95,    96,    97,
      98,    26,     7,    19,     7,    67,    92,     7,    94,    94,
      67,    68,    81,    76,    77,    76,     7,    19,     7,    84,
      21,    99,    67,    77,     0,    62,    25,    27,    30,    29,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    19,    23,    28,    45,    46,    47,    48,    49,    50,
      51,    52,    69,    12,    13,    14,    19,    67,    25,    25,
      25,    20,    22,    27,    19,     7,    20,    64,    25,    27,
      22,    66,    82,    56,    57,    25,    69,    68,    71,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    76,    76,
      76,    20,    65,    68,    67,     7,    68,    19,    19,    19,
      20,    64,    20,    22,    68,    20,    64,    99,    20,    27,
       7,    22,    82,    19,    99,    68,    20,    27,    24,    67,
      92,     7,    99,    20,    99,    99,    20,    99,     7,     7,
      68,    20,    25,    26,    99,    10,    11,    86,    87,    99,
      20,    99,    92,    67,    99,    19,    10,    87,    99,    25,
      20,    67,    99,    57,    92,    99,    20,    99,    20,    99,
      99
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
        case 5:
#line 57 "crowbar.y"
    {
            CRB_Interpreter *inter = crb_get_current_interpreter();

            inter->statement_list
                = crb_chain_statement_list(inter->statement_list, (yyvsp[(1) - (1)].statement));
        }
    break;

  case 6:
#line 66 "crowbar.y"
    {
            crb_function_define((yyvsp[(2) - (6)].identifier), (yyvsp[(4) - (6)].parameter_list), (yyvsp[(6) - (6)].block));
        }
    break;

  case 7:
#line 70 "crowbar.y"
    {
            crb_function_define((yyvsp[(2) - (5)].identifier), NULL, (yyvsp[(5) - (5)].block));
        }
    break;

  case 8:
#line 76 "crowbar.y"
    {
            (yyval.parameter_list) = crb_create_parameter((yyvsp[(1) - (1)].identifier));
        }
    break;

  case 9:
#line 80 "crowbar.y"
    {
            (yyval.parameter_list) = crb_chain_parameter((yyvsp[(1) - (3)].parameter_list), (yyvsp[(3) - (3)].identifier));
        }
    break;

  case 10:
#line 86 "crowbar.y"
    {
            (yyval.argument_list) = crb_create_argument_list((yyvsp[(1) - (1)].expression));
        }
    break;

  case 11:
#line 90 "crowbar.y"
    {
            (yyval.argument_list) = crb_chain_argument_list((yyvsp[(1) - (3)].argument_list), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 12:
#line 96 "crowbar.y"
    {
            (yyval.statement_list) = crb_create_statement_list((yyvsp[(1) - (1)].statement));
        }
    break;

  case 13:
#line 100 "crowbar.y"
    {
            (yyval.statement_list) = crb_chain_statement_list((yyvsp[(1) - (2)].statement_list), (yyvsp[(2) - (2)].statement));
        }
    break;

  case 15:
#line 107 "crowbar.y"
    {
            (yyval.expression) = crb_create_comma_expression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 17:
#line 114 "crowbar.y"
    {
            (yyval.expression) = crb_create_assign_expression(CRB_FALSE, (yyvsp[(1) - (3)].expression), (yyvsp[(2) - (3)].assignment_operator), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 18:
#line 118 "crowbar.y"
    {
            (yyval.expression) = crb_create_assign_expression(CRB_TRUE, (yyvsp[(2) - (4)].expression), (yyvsp[(3) - (4)].assignment_operator), (yyvsp[(4) - (4)].expression));
        }
    break;

  case 19:
#line 124 "crowbar.y"
    {
            (yyval.assignment_operator) = NORMAL_ASSIGN;
        }
    break;

  case 20:
#line 128 "crowbar.y"
    {
            (yyval.assignment_operator) = ADD_ASSIGN;
        }
    break;

  case 21:
#line 132 "crowbar.y"
    {
            (yyval.assignment_operator) = SUB_ASSIGN;
        }
    break;

  case 22:
#line 136 "crowbar.y"
    {
            (yyval.assignment_operator) = MUL_ASSIGN;
        }
    break;

  case 23:
#line 140 "crowbar.y"
    {
            (yyval.assignment_operator) = DIV_ASSIGN;
        }
    break;

  case 24:
#line 144 "crowbar.y"
    {
            (yyval.assignment_operator) = MOD_ASSIGN;
        }
    break;

  case 26:
#line 151 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(LOGICAL_OR_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 28:
#line 158 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(LOGICAL_AND_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 30:
#line 165 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(EQ_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 31:
#line 169 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(NE_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 33:
#line 176 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(GT_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 34:
#line 180 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(GE_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 35:
#line 184 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(LT_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 36:
#line 188 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(LE_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 38:
#line 195 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(ADD_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 39:
#line 199 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(SUB_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 41:
#line 206 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(MUL_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 42:
#line 210 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(DIV_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 43:
#line 214 "crowbar.y"
    {
            (yyval.expression) = crb_create_binary_expression(MOD_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 45:
#line 221 "crowbar.y"
    {
            (yyval.expression) = crb_create_minus_expression((yyvsp[(2) - (2)].expression));
        }
    break;

  case 46:
#line 225 "crowbar.y"
    {
            (yyval.expression) = crb_create_logical_not_expression((yyvsp[(2) - (2)].expression));
        }
    break;

  case 48:
#line 232 "crowbar.y"
    {
            (yyval.expression) = crb_create_index_expression((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression));
        }
    break;

  case 49:
#line 236 "crowbar.y"
    {
            (yyval.expression) = crb_create_member_expression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].identifier));
        }
    break;

  case 50:
#line 240 "crowbar.y"
    {
            (yyval.expression) = crb_create_function_call_expression((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].argument_list));
        }
    break;

  case 51:
#line 244 "crowbar.y"
    {
            (yyval.expression) = crb_create_function_call_expression((yyvsp[(1) - (3)].expression), NULL);
        }
    break;

  case 52:
#line 248 "crowbar.y"
    {
            (yyval.expression) = crb_create_incdec_expression((yyvsp[(1) - (2)].expression), INCREMENT_EXPRESSION);
        }
    break;

  case 53:
#line 252 "crowbar.y"
    {
            (yyval.expression) = crb_create_incdec_expression((yyvsp[(1) - (2)].expression), DECREMENT_EXPRESSION);
        }
    break;

  case 54:
#line 258 "crowbar.y"
    {
            (yyval.expression) = (yyvsp[(2) - (3)].expression);
        }
    break;

  case 55:
#line 262 "crowbar.y"
    {
            (yyval.expression) = crb_create_identifier_expression((yyvsp[(1) - (1)].identifier));
        }
    break;

  case 60:
#line 270 "crowbar.y"
    {
            (yyval.expression) = crb_create_boolean_expression(CRB_TRUE);
        }
    break;

  case 61:
#line 274 "crowbar.y"
    {
            (yyval.expression) = crb_create_boolean_expression(CRB_FALSE);
        }
    break;

  case 62:
#line 278 "crowbar.y"
    {
            (yyval.expression) = crb_create_null_expression();
        }
    break;

  case 65:
#line 286 "crowbar.y"
    {
            (yyval.expression) = crb_create_array_expression((yyvsp[(2) - (3)].expression_list));
        }
    break;

  case 66:
#line 290 "crowbar.y"
    {
            (yyval.expression) = crb_create_array_expression((yyvsp[(2) - (4)].expression_list));
        }
    break;

  case 67:
#line 296 "crowbar.y"
    {
            (yyval.expression) = crb_create_closure_definition((yyvsp[(2) - (6)].identifier), (yyvsp[(4) - (6)].parameter_list), (yyvsp[(6) - (6)].block));
        }
    break;

  case 68:
#line 300 "crowbar.y"
    {
            (yyval.expression) = crb_create_closure_definition((yyvsp[(2) - (5)].identifier), NULL, (yyvsp[(5) - (5)].block));
        }
    break;

  case 69:
#line 304 "crowbar.y"
    {
            (yyval.expression) = crb_create_closure_definition(NULL, (yyvsp[(3) - (5)].parameter_list), (yyvsp[(5) - (5)].block));
        }
    break;

  case 70:
#line 308 "crowbar.y"
    {
            (yyval.expression) = crb_create_closure_definition(NULL, NULL, (yyvsp[(4) - (4)].block));
        }
    break;

  case 71:
#line 314 "crowbar.y"
    {
            (yyval.expression_list) = NULL;
        }
    break;

  case 72:
#line 318 "crowbar.y"
    {
            (yyval.expression_list) = crb_create_expression_list((yyvsp[(1) - (1)].expression));
        }
    break;

  case 73:
#line 322 "crowbar.y"
    {
            (yyval.expression_list) = crb_chain_expression_list((yyvsp[(1) - (3)].expression_list), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 74:
#line 328 "crowbar.y"
    {
          (yyval.statement) = crb_create_expression_statement((yyvsp[(1) - (2)].expression));
        }
    break;

  case 85:
#line 344 "crowbar.y"
    {
            (yyval.statement) = crb_create_global_statement((yyvsp[(2) - (3)].identifier_list));
        }
    break;

  case 86:
#line 350 "crowbar.y"
    {
            (yyval.identifier_list) = crb_create_global_identifier((yyvsp[(1) - (1)].identifier));
        }
    break;

  case 87:
#line 354 "crowbar.y"
    {
            (yyval.identifier_list) = crb_chain_identifier((yyvsp[(1) - (3)].identifier_list), (yyvsp[(3) - (3)].identifier));
        }
    break;

  case 88:
#line 360 "crowbar.y"
    {
            (yyval.statement) = crb_create_if_statement((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].block), NULL, NULL);
        }
    break;

  case 89:
#line 364 "crowbar.y"
    {
            (yyval.statement) = crb_create_if_statement((yyvsp[(3) - (7)].expression), (yyvsp[(5) - (7)].block), NULL, (yyvsp[(7) - (7)].block));
        }
    break;

  case 90:
#line 368 "crowbar.y"
    {
            (yyval.statement) = crb_create_if_statement((yyvsp[(3) - (6)].expression), (yyvsp[(5) - (6)].block), (yyvsp[(6) - (6)].elsif), NULL);
        }
    break;

  case 91:
#line 372 "crowbar.y"
    {
            (yyval.statement) = crb_create_if_statement((yyvsp[(3) - (8)].expression), (yyvsp[(5) - (8)].block), (yyvsp[(6) - (8)].elsif), (yyvsp[(8) - (8)].block));
        }
    break;

  case 93:
#line 379 "crowbar.y"
    {
            (yyval.elsif) = crb_chain_elsif_list((yyvsp[(1) - (2)].elsif), (yyvsp[(2) - (2)].elsif));
        }
    break;

  case 94:
#line 385 "crowbar.y"
    {
            (yyval.elsif) = crb_create_elsif((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].block));
        }
    break;

  case 95:
#line 391 "crowbar.y"
    {
            (yyval.identifier) = NULL;
        }
    break;

  case 96:
#line 395 "crowbar.y"
    {
            (yyval.identifier) = (yyvsp[(1) - (2)].identifier);
        }
    break;

  case 97:
#line 401 "crowbar.y"
    {
            (yyval.statement) = crb_create_while_statement((yyvsp[(1) - (6)].identifier), (yyvsp[(4) - (6)].expression), (yyvsp[(6) - (6)].block));
        }
    break;

  case 98:
#line 408 "crowbar.y"
    {
            (yyval.statement) = crb_create_for_statement((yyvsp[(1) - (10)].identifier), (yyvsp[(4) - (10)].expression), (yyvsp[(6) - (10)].expression), (yyvsp[(8) - (10)].expression), (yyvsp[(10) - (10)].block));
        }
    break;

  case 99:
#line 414 "crowbar.y"
    {
            (yyval.statement) = crb_create_foreach_statement((yyvsp[(1) - (8)].identifier), (yyvsp[(4) - (8)].identifier), (yyvsp[(6) - (8)].expression), (yyvsp[(8) - (8)].block));
        }
    break;

  case 100:
#line 420 "crowbar.y"
    {
            (yyval.expression) = NULL;
        }
    break;

  case 102:
#line 427 "crowbar.y"
    {
            (yyval.statement) = crb_create_return_statement((yyvsp[(2) - (3)].expression));
        }
    break;

  case 103:
#line 433 "crowbar.y"
    {
            (yyval.identifier) = NULL;
        }
    break;

  case 105:
#line 440 "crowbar.y"
    {
            (yyval.statement) = crb_create_break_statement((yyvsp[(2) - (3)].identifier));
        }
    break;

  case 106:
#line 446 "crowbar.y"
    {
            (yyval.statement) = crb_create_continue_statement((yyvsp[(2) - (3)].identifier));
        }
    break;

  case 107:
#line 452 "crowbar.y"
    {
            (yyval.statement) = crb_create_try_statement((yyvsp[(2) - (9)].block), (yyvsp[(5) - (9)].identifier), (yyvsp[(7) - (9)].block), (yyvsp[(9) - (9)].block));
        }
    break;

  case 108:
#line 456 "crowbar.y"
    {
            (yyval.statement) = crb_create_try_statement((yyvsp[(2) - (4)].block), NULL, NULL, (yyvsp[(4) - (4)].block));
        }
    break;

  case 109:
#line 460 "crowbar.y"
    {
            (yyval.statement) = crb_create_try_statement((yyvsp[(2) - (7)].block), (yyvsp[(5) - (7)].identifier), (yyvsp[(7) - (7)].block), NULL);
        }
    break;

  case 110:
#line 465 "crowbar.y"
    {
            (yyval.statement) = crb_create_throw_statement((yyvsp[(2) - (3)].expression));
        }
    break;

  case 111:
#line 470 "crowbar.y"
    {
            (yyval.block) = crb_create_block((yyvsp[(2) - (3)].statement_list));
        }
    break;

  case 112:
#line 474 "crowbar.y"
    {
            (yyval.block) = crb_create_block(NULL);
        }
    break;


/* Line 1267 of yacc.c.  */
#line 2253 "y.tab.c"
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


#line 478 "crowbar.y"


