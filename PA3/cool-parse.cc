
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
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse         cool_yyparse
#define yylex           cool_yylex
#define yyerror         cool_yyerror
#define yylval          cool_yylval
#define yychar          cool_yychar
#define yydebug         cool_yydebug
#define yynerrs         cool_yynerrs
#define yylloc          cool_yylloc

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 6 "cool.y"

    #include <iostream>
    #include "cool-tree.h"
    #include "stringtab.h"
    #include "utilities.h"

    extern char *curr_filename;
  
  
    /* Locations */
    #define YYLTYPE int              /* the type of locations */
    #define cool_yylloc curr_lineno  /* use the curr_lineno from the lexer
                                        for the location of tokens */
    
    extern int node_lineno;          /* set before constructing a tree node
                                        to whatever you want the line number
                                        for the tree node to be */
      
      
    #define YYLLOC_DEFAULT(Current, Rhs, N)         \
    Current = Rhs[1];                             \
    node_lineno = Current;
    
    
    #define SET_NODELOC(Current)  \
    node_lineno = Current;
    
    /* IMPORTANT NOTE ON LINE NUMBERS
    *********************************
    * The above definitions and macros cause every terminal in your grammar to 
    * have the line number supplied by the lexer. The only task you have to
    * implement for line numbers to work correctly, is to use SET_NODELOC()
    * before constructing any constructs from non-terminals in your grammar.
    * Example: Consider you are matching on the following very restrictive 
    * (fictional) construct that matches a plus between two integer constants. 
    * (SUCH A RULE SHOULD NOT BE  PART OF YOUR PARSER):
    
    plus_consts : INT_CONST '+' INT_CONST 
    
    * where INT_CONST is a terminal for an integer constant. Now, a correct
    * action for this rule that attaches the correct line number to plus_const
    * would look like the following:
    
    plus_consts : INT_CONST '+' INT_CONST 
    {
        // Set the line number of the current non-terminal:
        // ***********************************************
        // You can access the line numbers of the i'th item with @i, just
        // like you acess the value of the i'th exporession with $i.
        //
        // Here, we choose the line number of the last INT_CONST (@3) as the
        // line number of the resulting expression (@$). You are free to pick
        // any reasonable line as the line number of non-terminals. If you 
        // omit the statement @$=..., bison has default rules for deciding which 
        // line number to use. Check the manual for details if you are interested.
        @$ = @3;


        // Observe that we call SET_NODELOC(@3); this will set the global variable
        // node_lineno to @3. Since the constructor call "plus" uses the value of 
        // this global, the plus node will now have the correct line number.
        SET_NODELOC(@3);

        // construct the result node:
        $$ = plus(int_const($1), int_const($3));
    }
    
    */
    
    
    
    void yyerror(char *s);        /*  defined below; called for each parse error */
    extern int yylex();           /*  the entry point to the lexer  */
    
    /************************************************************************/
    /*                DONT CHANGE ANYTHING IN THIS SECTION                  */
    
    Program ast_root;         /* the result of the parse  */
    Classes parse_results;        /* for use in semantic analysis */
    int omerrs = 0;               /* number of errors in lexing and parsing */


/* Line 189 of yacc.c  */
#line 164 "cool.tab.c"

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
     CLASS = 258,
     ELSE = 259,
     FI = 260,
     IF = 261,
     IN = 262,
     INHERITS = 263,
     LET = 264,
     LOOP = 265,
     POOL = 266,
     THEN = 267,
     WHILE = 268,
     CASE = 269,
     ESAC = 270,
     OF = 271,
     DARROW = 272,
     NEW = 273,
     ISVOID = 274,
     STR_CONST = 275,
     INT_CONST = 276,
     BOOL_CONST = 277,
     TYPEID = 278,
     OBJECTID = 279,
     ASSIGN = 280,
     NOT = 281,
     LE = 282,
     ERROR = 283
   };
#endif
/* Tokens.  */
#define CLASS 258
#define ELSE 259
#define FI 260
#define IF 261
#define IN 262
#define INHERITS 263
#define LET 264
#define LOOP 265
#define POOL 266
#define THEN 267
#define WHILE 268
#define CASE 269
#define ESAC 270
#define OF 271
#define DARROW 272
#define NEW 273
#define ISVOID 274
#define STR_CONST 275
#define INT_CONST 276
#define BOOL_CONST 277
#define TYPEID 278
#define OBJECTID 279
#define ASSIGN 280
#define NOT 281
#define LE 282
#define ERROR 283




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 89 "cool.y"

    Boolean boolean;
    Symbol symbol;
    Program program;
    Class_ class_;
    Classes classes;
    Feature feature;
    Features features;
    Formal formal;
    Formals formals;
    Case case_;
    Cases cases;
    Expression expression;
    Expressions expressions;
    char *error_msg;



/* Line 214 of yacc.c  */
#line 275 "cool.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 300 "cool.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    33,    31,    44,    32,    37,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    40,
      29,    30,     2,     2,    36,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,    35,     2,     2,     2,
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
      25,    26,    27,    28,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    17,    26,    28,    30,
      31,    35,    38,    48,    52,    58,    60,    62,    63,    67,
      69,    73,    77,    79,    80,    83,    87,    89,    93,    96,
     102,   110,   116,   124,   130,   132,   133,   137,   146,   153,
     158,   166,   168,   172,   175,   181,   184,   187,   191,   195,
     199,   203,   206,   210,   214,   218,   221,   225,   227,   229,
     231,   233,   235,   241
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    -1,    48,    -1,    47,    48,    -1,
       3,    23,    38,    49,    39,    40,    -1,     3,    23,     8,
      23,    38,    49,    39,    40,    -1,     1,    -1,    50,    -1,
      -1,    51,    40,    50,    -1,    51,    40,    -1,    24,    41,
      52,    42,    43,    23,    38,    61,    39,    -1,    24,    43,
      23,    -1,    24,    43,    23,    25,    60,    -1,     1,    -1,
      53,    -1,    -1,    54,    44,    53,    -1,    54,    -1,    24,
      43,    23,    -1,    55,    44,    61,    -1,    61,    -1,    -1,
      61,    40,    -1,    61,    40,    56,    -1,     1,    -1,    57,
      58,    40,    -1,    58,    40,    -1,    24,    43,    23,    17,
      60,    -1,    24,    43,    23,    25,    60,     7,    60,    -1,
      24,    43,    23,     7,    60,    -1,    24,    43,    23,    25,
      60,    44,    59,    -1,    24,    43,    23,    44,    59,    -1,
      61,    -1,    -1,    24,    25,    61,    -1,    61,    36,    23,
      37,    24,    41,    55,    42,    -1,    61,    37,    24,    41,
      55,    42,    -1,    24,    41,    55,    42,    -1,     6,    61,
      12,    61,     4,    61,     5,    -1,    62,    -1,    38,    56,
      39,    -1,     9,    59,    -1,    14,    61,    16,    57,    15,
      -1,    18,    23,    -1,    19,    61,    -1,    61,    31,    61,
      -1,    61,    32,    61,    -1,    61,    33,    61,    -1,    61,
      34,    61,    -1,    35,    61,    -1,    61,    29,    61,    -1,
      61,    27,    61,    -1,    61,    30,    61,    -1,    26,    61,
      -1,    41,    61,    42,    -1,    24,    -1,    21,    -1,    20,
      -1,    22,    -1,     1,    -1,    13,    61,    10,    60,    11,
      -1,    13,    61,    10,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   173,   173,   182,   188,   198,   203,   206,   214,   218,
     223,   226,   233,   236,   239,   242,   246,   250,   255,   258,
     264,   270,   273,   277,   281,   284,   287,   291,   294,   299,
     304,   307,   310,   313,   319,   323,   328,   331,   334,   337,
     340,   343,   346,   349,   352,   355,   358,   361,   364,   367,
     370,   373,   376,   379,   382,   385,   388,   391,   394,   397,
     400,   403,   409,   412
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "ELSE", "FI", "IF", "IN",
  "INHERITS", "LET", "LOOP", "POOL", "THEN", "WHILE", "CASE", "ESAC", "OF",
  "DARROW", "NEW", "ISVOID", "STR_CONST", "INT_CONST", "BOOL_CONST",
  "TYPEID", "OBJECTID", "ASSIGN", "NOT", "LE", "ERROR", "'<'", "'='",
  "'+'", "'-'", "'*'", "'/'", "'~'", "'@'", "'.'", "'{'", "'}'", "';'",
  "'('", "')'", "':'", "','", "$accept", "program", "class_list", "class",
  "feature_list", "nonempty_feature_list", "feature", "formal_list",
  "nonempty_formal_list", "formal", "expression_list", "nonempty_block",
  "case_list", "branch", "inner_let", "expression", "nonempty_expr",
  "while_exp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   284,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    60,
      61,    43,    45,    42,    47,   126,    64,    46,   123,   125,
      59,    40,    41,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    49,    49,
      50,    50,    51,    51,    51,    51,    52,    52,    53,    53,
      54,    55,    55,    55,    56,    56,    56,    57,    57,    58,
      59,    59,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     6,     8,     1,     1,     0,
       3,     2,     9,     3,     5,     1,     1,     0,     3,     1,
       3,     3,     1,     0,     2,     3,     1,     3,     2,     5,
       7,     5,     7,     5,     1,     0,     3,     8,     6,     4,
       7,     1,     3,     2,     5,     2,     2,     3,     3,     3,
       3,     2,     3,     3,     3,     2,     3,     1,     1,     1,
       1,     1,     5,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     7,     0,     0,     0,     3,     0,     1,     4,     0,
       0,     0,    15,     0,     0,     8,     0,     0,    17,     0,
       0,     0,     0,     0,     0,    16,    19,    13,     5,    10,
       0,     0,     0,     0,     0,     6,    20,     0,    18,    61,
       0,     0,     0,     0,     0,     0,    59,    58,    60,    57,
       0,     0,     0,     0,    14,    34,    41,     0,     0,     0,
      43,     0,     0,    45,    46,     0,     0,    55,    51,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    22,
      42,     0,    56,    53,    52,    54,    47,    48,    49,    50,
       0,     0,     0,     0,     0,    61,     0,     0,     0,     0,
      39,     0,    25,     0,     0,    12,     0,     0,     0,     0,
      62,     0,    44,     0,    28,    21,     0,     0,     0,    31,
       0,    33,     0,    27,     0,    38,    40,     0,     0,     0,
       0,    30,    32,    29,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    14,    15,    16,    24,    25,    26,
      88,    70,   108,   109,    60,    54,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -111
static const yytype_int16 yypact[] =
{
      54,  -111,    -4,    22,    53,  -111,    -7,  -111,  -111,    35,
       5,    26,  -111,    18,    40,  -111,    45,     5,    56,    69,
      65,     6,    84,    83,    85,  -111,    86,   104,  -111,  -111,
      91,   111,    92,    56,   191,  -111,  -111,   113,  -111,  -111,
     285,   118,   285,   285,   121,   285,  -111,  -111,  -111,    -9,
     285,   285,   315,   285,  -111,   413,  -111,   108,    36,   105,
    -111,   353,   365,  -111,    13,   285,   119,   413,    13,   110,
     116,   390,   376,   285,   285,   285,   285,   285,   285,   285,
     124,   128,   285,   285,   143,   224,   144,   413,    33,   413,
    -111,   254,  -111,   424,   424,   424,   -16,   -16,    13,    13,
     132,   129,   402,   328,     2,   146,   162,   131,    -1,   135,
    -111,   285,  -111,   157,   119,  -111,   285,    77,   158,   118,
    -111,   160,  -111,   147,  -111,   413,   148,    58,   339,  -111,
       8,  -111,   174,  -111,   119,  -111,  -111,    77,   118,   191,
      80,  -111,  -111,  -111,  -111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,  -111,   190,   178,   177,  -111,  -111,   168,  -111,
    -110,   112,  -111,    98,   -91,   -77,   -40,  -111
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -64
static const yytype_int16 yytable[] =
{
      58,     9,    61,    62,   127,    64,    12,    12,   106,   117,
      67,    68,    71,    72,   122,   137,    65,    78,    79,     6,
      80,    81,     7,   107,   140,    87,    89,   118,   131,    13,
      13,    10,    66,    93,    94,    95,    96,    97,    98,    99,
     129,   130,   102,   103,    -9,   -11,   119,   142,    83,    80,
      81,    71,   138,    -2,     1,     1,     2,     2,    11,    18,
     141,    19,   143,    73,    17,    74,    75,    76,    77,    78,
      79,   125,    80,    81,    89,   110,   128,   111,    39,    20,
      23,   -35,   -35,    40,   -35,    21,    41,   -35,   -35,   -35,
      42,    43,    27,   -35,    89,    44,    45,    46,    47,    48,
     135,    49,   111,    50,   -35,    28,   -35,   -35,   -35,   -35,
     -35,   -35,    51,   -35,   -35,    52,   -35,   -35,    53,   -35,
      39,   -35,   144,    30,   111,    40,    31,    32,    41,    34,
      33,    35,    42,    43,    36,    37,    57,    44,    45,    46,
      47,    48,    59,    49,    63,    50,    82,   100,    84,   -26,
     -63,   -63,   101,   -63,    51,    90,   -63,    52,   -63,    39,
      53,   -23,   -63,   -23,    40,   -35,   104,    41,   107,   113,
     114,    42,    43,   120,   121,   124,    44,    45,    46,    47,
      48,   126,    49,   132,    50,   -63,   -63,   133,   -63,   134,
     -63,   139,    39,    51,     8,    22,    52,    40,    29,    53,
      41,    38,   -35,   112,    42,    43,   123,     0,     0,    44,
      45,    46,    47,    48,     0,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,   105,    51,     0,     0,    52,
      40,   -35,    53,    41,     0,   -35,     0,    42,    43,     0,
       0,     0,    44,    45,    46,    47,    48,     0,    49,     0,
      50,     0,     0,     0,     0,    69,     0,     0,     0,    51,
      40,     0,    52,    41,     0,    53,     0,    42,    43,     0,
       0,     0,    44,    45,    46,    47,    48,     0,    49,     0,
      50,     0,     0,     0,     0,     0,    39,     0,     0,    51,
       0,    40,    52,   -24,    41,    53,     0,     0,    42,    43,
       0,     0,     0,    44,    45,    46,    47,    48,     0,    49,
       0,    50,     0,     0,     0,     0,    69,     0,     0,     0,
      51,    40,     0,    52,    41,     0,    53,     0,    42,    43,
       0,     0,   116,    44,    45,    46,    47,    48,     0,    49,
       0,    50,     0,     0,   136,     0,     0,     0,     0,     0,
      51,     0,     0,    52,     0,    73,    53,    74,    75,    76,
      77,    78,    79,    85,    80,    81,    73,     0,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
      73,    86,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,    73,     0,    74,    75,    76,    77,    78,    79,
       0,    80,    81,    73,     0,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,    73,    92,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,    73,
      91,    74,    75,    76,    77,    78,    79,     0,    80,    81,
      73,   115,    74,    75,    76,    77,    78,    79,     0,    80,
      81,   -64,     0,   -64,   -64,    76,    77,    78,    79,     0,
      80,    81
};

static const yytype_int16 yycheck[] =
{
      40,     8,    42,    43,   114,    45,     1,     1,    85,     7,
      50,    51,    52,    53,    15,     7,    25,    33,    34,    23,
      36,    37,     0,    24,   134,    65,    66,    25,   119,    24,
      24,    38,    41,    73,    74,    75,    76,    77,    78,    79,
     117,   118,    82,    83,    39,    39,    44,   138,    12,    36,
      37,    91,    44,     0,     1,     1,     3,     3,    23,    41,
     137,    43,   139,    27,    38,    29,    30,    31,    32,    33,
      34,   111,    36,    37,   114,    42,   116,    44,     1,    39,
      24,     4,     5,     6,     7,    40,     9,    10,    11,    12,
      13,    14,    23,    16,   134,    18,    19,    20,    21,    22,
      42,    24,    44,    26,    27,    40,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       1,    44,    42,    39,    44,     6,    43,    42,     9,    25,
      44,    40,    13,    14,    23,    43,    23,    18,    19,    20,
      21,    22,    24,    24,    23,    26,    38,    23,    43,    39,
       4,     5,    24,     7,    35,    39,    10,    38,    12,     1,
      41,    42,    16,    44,     6,     7,    23,     9,    24,    37,
      41,    13,    14,    11,    43,    40,    18,    19,    20,    21,
      22,    24,    24,    23,    26,    39,    40,    40,    42,    41,
      44,    17,     1,    35,     4,    17,    38,     6,    21,    41,
       9,    33,    44,    91,    13,    14,   108,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    24,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    35,    -1,    -1,    38,
       6,    40,    41,     9,    -1,    11,    -1,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    35,
       6,    -1,    38,     9,    -1,    41,    -1,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    24,    -1,
      26,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    35,
      -1,     6,    38,    39,     9,    41,    -1,    -1,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    -1,    24,
      -1,    26,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      35,     6,    -1,    38,     9,    -1,    41,    -1,    13,    14,
      -1,    -1,     4,    18,    19,    20,    21,    22,    -1,    24,
      -1,    26,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    27,    41,    29,    30,    31,
      32,    33,    34,    10,    36,    37,    27,    -1,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,
      27,    16,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    27,    -1,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    27,    42,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    -1,    27,
      40,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      27,    39,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    27,    -1,    29,    30,    31,    32,    33,    34,    -1,
      36,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    46,    47,    48,    23,     0,    48,     8,
      38,    23,     1,    24,    49,    50,    51,    38,    41,    43,
      39,    40,    49,    24,    52,    53,    54,    23,    40,    50,
      39,    43,    42,    44,    25,    40,    23,    43,    53,     1,
       6,     9,    13,    14,    18,    19,    20,    21,    22,    24,
      26,    35,    38,    41,    60,    61,    62,    23,    61,    24,
      59,    61,    61,    23,    61,    25,    41,    61,    61,     1,
      56,    61,    61,    27,    29,    30,    31,    32,    33,    34,
      36,    37,    38,    12,    43,    10,    16,    61,    55,    61,
      39,    40,    42,    61,    61,    61,    61,    61,    61,    61,
      23,    24,    61,    61,    23,     1,    60,    24,    57,    58,
      42,    44,    56,    37,    41,    39,     4,     7,    25,    44,
      11,    43,    15,    58,    40,    61,    24,    55,    61,    60,
      60,    59,    23,    40,    41,    42,     5,     7,    44,    17,
      55,    60,    59,    60,    42
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
     `$$ = $1'.

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
        case 2:

/* Line 1455 of yacc.c  */
#line 174 "cool.y"
    {
            (yyloc) = (yylsp[(1) - (1)]);
            ast_root = program((yyvsp[(1) - (1)].classes));
        }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 183 "cool.y"
    {
               (yyval.classes) = single_Classes((yyvsp[(1) - (1)].class_));
               parse_results = (yyval.classes);
           }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 189 "cool.y"
    {
               (yyval.classes) = append_Classes((yyvsp[(1) - (2)].classes), single_Classes((yyvsp[(2) - (2)].class_))); 
               parse_results = (yyval.classes);
           }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 199 "cool.y"
    {
          (yyval.class_) = class_((yyvsp[(2) - (6)].symbol), idtable.add_string("Object"), (yyvsp[(4) - (6)].features), stringtable.add_string(curr_filename));
      }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 204 "cool.y"
    { (yyval.class_) = class_((yyvsp[(2) - (8)].symbol), (yyvsp[(4) - (8)].symbol), (yyvsp[(6) - (8)].features), stringtable.add_string(curr_filename)); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 215 "cool.y"
    { (yyval.features) = (yyvsp[(1) - (1)].features); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 218 "cool.y"
    { (yyval.features) = nil_Features(); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 224 "cool.y"
    { (yyval.features) = append_Features(single_Features((yyvsp[(1) - (3)].feature)), (yyvsp[(3) - (3)].features)); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 227 "cool.y"
    { (yyval.features) = single_Features((yyvsp[(1) - (2)].feature)); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 234 "cool.y"
    { (yyval.feature) = method((yyvsp[(1) - (9)].symbol), (yyvsp[(3) - (9)].formals), (yyvsp[(6) - (9)].symbol), (yyvsp[(8) - (9)].expression)); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 237 "cool.y"
    { (yyval.feature) = attr((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol), no_expr()); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 240 "cool.y"
    { (yyval.feature) = attr((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), (yyvsp[(5) - (5)].expression)); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 247 "cool.y"
    { (yyval.formals) = (yyvsp[(1) - (1)].formals); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 250 "cool.y"
    { (yyval.formals) = nil_Formals(); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 256 "cool.y"
    { (yyval.formals) = append_Formals(single_Formals((yyvsp[(1) - (3)].formal)), (yyvsp[(3) - (3)].formals)); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 259 "cool.y"
    { (yyval.formals) = single_Formals((yyvsp[(1) - (1)].formal)); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 265 "cool.y"
    { (yyval.formal) = formal((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol)); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 271 "cool.y"
    { (yyval.expressions) = append_Expressions((yyvsp[(1) - (3)].expressions), single_Expressions((yyvsp[(3) - (3)].expression))); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 274 "cool.y"
    { (yyval.expressions) = single_Expressions((yyvsp[(1) - (1)].expression)); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 277 "cool.y"
    { (yyval.expressions) = nil_Expressions(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 282 "cool.y"
    { (yyval.expressions) = single_Expressions((yyvsp[(1) - (2)].expression)); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 285 "cool.y"
    { (yyval.expressions) = append_Expressions(single_Expressions((yyvsp[(1) - (3)].expression)), (yyvsp[(3) - (3)].expressions)); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 292 "cool.y"
    { (yyval.cases) = append_Cases((yyvsp[(1) - (3)].cases), single_Cases((yyvsp[(2) - (3)].case_))); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 295 "cool.y"
    { (yyval.cases) = single_Cases((yyvsp[(1) - (2)].case_)); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 300 "cool.y"
    { (yyval.case_) = branch((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), (yyvsp[(5) - (5)].expression)); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 305 "cool.y"
    { (yyval.expression) = let((yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].expression)); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 308 "cool.y"
    { (yyval.expression) = let((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), no_expr(), (yyvsp[(5) - (5)].expression)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 311 "cool.y"
    { (yyval.expression) = let((yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].expression)); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 314 "cool.y"
    { (yyval.expression) = let((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), no_expr(), (yyvsp[(5) - (5)].expression)); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 320 "cool.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 323 "cool.y"
    { (yyval.expression) = no_expr(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 329 "cool.y"
    { (yyval.expression) = assign((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].expression)); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 332 "cool.y"
    { (yyval.expression) = static_dispatch((yyvsp[(1) - (8)].expression), (yyvsp[(3) - (8)].symbol), (yyvsp[(5) - (8)].symbol), (yyvsp[(7) - (8)].expressions)); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 335 "cool.y"
    { (yyval.expression) = dispatch((yyvsp[(1) - (6)].expression), (yyvsp[(3) - (6)].symbol), (yyvsp[(5) - (6)].expressions)); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 338 "cool.y"
    { (yyval.expression) = dispatch(object(idtable.add_string("self")), (yyvsp[(1) - (4)].symbol), (yyvsp[(3) - (4)].expressions)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 341 "cool.y"
    { (yyval.expression) = cond((yyvsp[(2) - (7)].expression), (yyvsp[(4) - (7)].expression), (yyvsp[(6) - (7)].expression)); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 344 "cool.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 347 "cool.y"
    { (yyval.expression) = block((yyvsp[(2) - (3)].expressions)); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 350 "cool.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 353 "cool.y"
    { (yyval.expression) = typcase((yyvsp[(2) - (5)].expression), (yyvsp[(4) - (5)].cases)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 356 "cool.y"
    { (yyval.expression) = new_((yyvsp[(2) - (2)].symbol)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 359 "cool.y"
    { (yyval.expression) = isvoid((yyvsp[(2) - (2)].expression)); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 362 "cool.y"
    { (yyval.expression) = plus((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 365 "cool.y"
    { (yyval.expression) = sub((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 368 "cool.y"
    { (yyval.expression) = mul((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 371 "cool.y"
    { (yyval.expression) = divide((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 374 "cool.y"
    { (yyval.expression) = neg((yyvsp[(2) - (2)].expression)); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 377 "cool.y"
    { (yyval.expression) = lt((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 380 "cool.y"
    { (yyval.expression) = leq((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 383 "cool.y"
    { (yyval.expression) = eq((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 386 "cool.y"
    { (yyval.expression) = comp((yyvsp[(2) - (2)].expression)); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 389 "cool.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 392 "cool.y"
    { (yyval.expression) = object((yyvsp[(1) - (1)].symbol)); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 395 "cool.y"
    { (yyval.expression) = int_const((yyvsp[(1) - (1)].symbol)); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 398 "cool.y"
    { (yyval.expression) = string_const((yyvsp[(1) - (1)].symbol)); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 401 "cool.y"
    { (yyval.expression) = bool_const((yyvsp[(1) - (1)].boolean)); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 404 "cool.y"
    { }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 410 "cool.y"
    { (yyval.expression) = loop((yyvsp[(2) - (5)].expression), (yyvsp[(4) - (5)].expression)); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 413 "cool.y"
    { }
    break;



/* Line 1455 of yacc.c  */
#line 2137 "cool.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 418 "cool.y"


/* This function is called automatically when Bison detects a parse error. */
void yyerror(char *s) {
    extern int curr_lineno;

    cerr << "\"" << curr_filename << "\", line " << curr_lineno << ": "
         << s << " at or near ";
         
    print_cool_token(yychar);
    
    cerr << endl;
    
    omerrs++;

    if (omerrs > 50) {
        fprintf(stdout, "More than 50 errors\n");
        exit(1);
    }
    
}

