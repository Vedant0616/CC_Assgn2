/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "semanticAnalysis.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
    #include<limits.h>
    #include "table.c"
    extern FILE *yyin;
    
    int decCounter = 0;
    int list_c = 0;
    char *listType[100];

#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ARR = 258,                     /* ARR  */
    ARR2 = 259,                    /* ARR2  */
    ARR_E = 260,                   /* ARR_E  */
    INT = 261,                     /* INT  */
    FLOAT = 262,                   /* FLOAT  */
    CHAR = 263,                    /* CHAR  */
    VOID = 264,                    /* VOID  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    WHILE = 267,                   /* WHILE  */
    FOR = 268,                     /* FOR  */
    SWITCH = 269,                  /* SWITCH  */
    CONTINUE = 270,                /* CONTINUE  */
    BREAK = 271,                   /* BREAK  */
    RETURN = 272,                  /* RETURN  */
    PRINTF = 273,                  /* PRINTF  */
    DEFAULT = 274,                 /* DEFAULT  */
    CASE = 275,                    /* CASE  */
    GTR_EQ = 276,                  /* GTR_EQ  */
    LESS_EQ = 277,                 /* LESS_EQ  */
    NOT_EQ = 278,                  /* NOT_EQ  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    NOT = 281,                     /* NOT  */
    EQ_EQ = 282,                   /* EQ_EQ  */
    LESS = 283,                    /* LESS  */
    GTR = 284,                     /* GTR  */
    NEWLINE = 285,                 /* NEWLINE  */
    UNK = 286,                     /* UNK  */
    END_OF_FILE = 287,             /* END_OF_FILE  */
    ID = 288,                      /* ID  */
    INT_CONST = 289,               /* INT_CONST  */
    FLOAT_CONST = 290,             /* FLOAT_CONST  */
    CHAR_CONST = 291,              /* CHAR_CONST  */
    FUNC = 292,                    /* FUNC  */
    STRING = 293                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ARR 258
#define ARR2 259
#define ARR_E 260
#define INT 261
#define FLOAT 262
#define CHAR 263
#define VOID 264
#define IF 265
#define ELSE 266
#define WHILE 267
#define FOR 268
#define SWITCH 269
#define CONTINUE 270
#define BREAK 271
#define RETURN 272
#define PRINTF 273
#define DEFAULT 274
#define CASE 275
#define GTR_EQ 276
#define LESS_EQ 277
#define NOT_EQ 278
#define AND 279
#define OR 280
#define NOT 281
#define EQ_EQ 282
#define LESS 283
#define GTR 284
#define NEWLINE 285
#define UNK 286
#define END_OF_FILE 287
#define ID 288
#define INT_CONST 289
#define FLOAT_CONST 290
#define CHAR_CONST 291
#define FUNC 292
#define STRING 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "semanticAnalysis.y"

    struct{
        char *lexeme;
        float val;
    }t;

#line 222 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '+'  */
  YYSYMBOL_4_ = 4,                         /* '-'  */
  YYSYMBOL_5_ = 5,                         /* '*'  */
  YYSYMBOL_6_ = 6,                         /* '/'  */
  YYSYMBOL_ARR = 7,                        /* ARR  */
  YYSYMBOL_ARR2 = 8,                       /* ARR2  */
  YYSYMBOL_ARR_E = 9,                      /* ARR_E  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_FLOAT = 11,                     /* FLOAT  */
  YYSYMBOL_CHAR = 12,                      /* CHAR  */
  YYSYMBOL_VOID = 13,                      /* VOID  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_SWITCH = 18,                    /* SWITCH  */
  YYSYMBOL_CONTINUE = 19,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 20,                     /* BREAK  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_PRINTF = 22,                    /* PRINTF  */
  YYSYMBOL_DEFAULT = 23,                   /* DEFAULT  */
  YYSYMBOL_CASE = 24,                      /* CASE  */
  YYSYMBOL_GTR_EQ = 25,                    /* GTR_EQ  */
  YYSYMBOL_LESS_EQ = 26,                   /* LESS_EQ  */
  YYSYMBOL_NOT_EQ = 27,                    /* NOT_EQ  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_EQ_EQ = 31,                     /* EQ_EQ  */
  YYSYMBOL_LESS = 32,                      /* LESS  */
  YYSYMBOL_GTR = 33,                       /* GTR  */
  YYSYMBOL_NEWLINE = 34,                   /* NEWLINE  */
  YYSYMBOL_UNK = 35,                       /* UNK  */
  YYSYMBOL_END_OF_FILE = 36,               /* END_OF_FILE  */
  YYSYMBOL_ID = 37,                        /* ID  */
  YYSYMBOL_INT_CONST = 38,                 /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 39,               /* FLOAT_CONST  */
  YYSYMBOL_CHAR_CONST = 40,                /* CHAR_CONST  */
  YYSYMBOL_FUNC = 41,                      /* FUNC  */
  YYSYMBOL_STRING = 42,                    /* STRING  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_50_ = 50,                       /* '='  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_S = 52,                         /* S  */
  YYSYMBOL_BEGIN = 53,                     /* BEGIN  */
  YYSYMBOL_TYPE = 54,                      /* TYPE  */
  YYSYMBOL_FUNC_DECL = 55,                 /* FUNC_DECL  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_PARA_LIST = 58,                 /* PARA_LIST  */
  YYSYMBOL_STMT_LIST = 59,                 /* STMT_LIST  */
  YYSYMBOL_STMT = 60,                      /* STMT  */
  YYSYMBOL_SWITCH_STMT = 61,               /* SWITCH_STMT  */
  YYSYMBOL_CASE_STMT = 62,                 /* CASE_STMT  */
  YYSYMBOL_BRK_CNT = 63,                   /* BRK_CNT  */
  YYSYMBOL_FOR_STMT = 64,                  /* FOR_STMT  */
  YYSYMBOL_WHILE_STMT = 65,                /* WHILE_STMT  */
  YYSYMBOL_EXPR = 66,                      /* EXPR  */
  YYSYMBOL_COMP_OP = 67,                   /* COMP_OP  */
  YYSYMBOL_TERM = 68,                      /* TERM  */
  YYSYMBOL_FACTOR = 69,                    /* FACTOR  */
  YYSYMBOL_ASSGN = 70,                     /* ASSGN  */
  YYSYMBOL_ASSGN_TAIL = 71,                /* ASSGN_TAIL  */
  YYSYMBOL_DECL = 72,                      /* DECL  */
  YYSYMBOL_DECL_TAIL = 73,                 /* DECL_TAIL  */
  YYSYMBOL_IF_STMT = 74,                   /* IF_STMT  */
  YYSYMBOL_MAT = 75,                       /* MAT  */
  YYSYMBOL_UNMAT = 76,                     /* UNMAT  */
  YYSYMBOL_PRINT = 77,                     /* PRINT  */
  YYSYMBOL_VAR_LIST = 78,                  /* VAR_LIST  */
  YYSYMBOL_RTRN_STMT = 79,                 /* RTRN_STMT  */
  YYSYMBOL_CONST = 80,                     /* CONST  */
  YYSYMBOL_FUNC_CALL = 81,                 /* FUNC_CALL  */
  YYSYMBOL_ARR_DECL = 82,                  /* ARR_DECL  */
  YYSYMBOL_MIXED_LIST = 83                 /* MIXED_LIST  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   282

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,    44,     5,     3,    47,     4,     2,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    48,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    33,    34,    36,    37,    38,    39,    41,
      41,    42,    42,    44,    45,    47,    48,    49,    50,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      54,    55,    57,    59,    60,    62,    62,    64,    65,    66,
      68,    70,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    81,    82,    83,    84,    86,    87,   101,   103,
     104,   104,   107,   108,   110,   111,   112,   114,   114,   116,
     118,   120,   121,   159,   160,   162,   163,   164,   166,   167,
     168,   170,   190,   204,   205,   224,   227,   232,   233,   234,
     235
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "'+'", "'-'", "'*'",
  "'/'", "ARR", "ARR2", "ARR_E", "INT", "FLOAT", "CHAR", "VOID", "IF",
  "ELSE", "WHILE", "FOR", "SWITCH", "CONTINUE", "BREAK", "RETURN",
  "PRINTF", "DEFAULT", "CASE", "GTR_EQ", "LESS_EQ", "NOT_EQ", "AND", "OR",
  "NOT", "EQ_EQ", "LESS", "GTR", "NEWLINE", "UNK", "END_OF_FILE", "ID",
  "INT_CONST", "FLOAT_CONST", "CHAR_CONST", "FUNC", "STRING", "'('", "')'",
  "'{'", "'}'", "','", "';'", "':'", "'='", "$accept", "S", "BEGIN",
  "TYPE", "FUNC_DECL", "$@1", "$@2", "PARA_LIST", "STMT_LIST", "STMT",
  "SWITCH_STMT", "CASE_STMT", "BRK_CNT", "FOR_STMT", "WHILE_STMT", "EXPR",
  "COMP_OP", "TERM", "FACTOR", "ASSGN", "ASSGN_TAIL", "DECL", "DECL_TAIL",
  "IF_STMT", "MAT", "UNMAT", "PRINT", "VAR_LIST", "RTRN_STMT", "CONST",
  "FUNC_CALL", "ARR_DECL", "MIXED_LIST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-138)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,  -138,  -138,  -138,  -138,    16,  -138,   -12,    37,  -138,
       1,  -138,    37,     4,    12,    19,  -138,    23,    37,    31,
      41,    57,    66,    59,    71,   101,   104,    82,    95,   -18,
     106,   110,  -138,  -138,  -138,   118,   186,    41,  -138,     5,
     117,    41,  -138,  -138,  -138,  -138,   189,    87,  -138,   119,
     134,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
      41,   186,   186,    -2,   129,  -138,  -138,   157,  -138,   161,
     169,   186,    -6,  -138,   152,   167,   164,   179,   -22,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   186,
     186,   186,   186,   186,  -138,  -138,   182,   166,   175,   110,
     186,   197,   187,   188,   193,  -138,  -138,    -4,    90,   191,
     192,   194,   195,  -138,    41,  -138,  -138,   205,    33,  -138,
      87,  -138,  -138,  -138,  -138,  -138,   198,   199,    72,    17,
     186,   186,   200,   201,   209,   210,  -138,   149,  -138,   149,
     202,  -138,    38,   208,   143,    41,    41,   211,   186,   100,
     125,   112,  -138,   206,   212,   204,  -138,  -138,  -138,   186,
    -138,   102,  -138,   213,   214,   217,   211,   211,   203,   219,
     216,   209,   207,   186,   143,   215,   220,   243,  -138,   221,
     223,   224,    41,   222,  -138,  -138,  -138,    90,  -138,  -138,
     225,   227,    41,   229,   230,  -138,    41,  -138,  -138,    41,
     231,    41,    41,   112,   232,  -138,   233,   234,  -138,  -138,
    -138,  -138
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     6,     7,     8,     0,     2,     0,     4,     1,
       0,     3,    11,     0,     0,     9,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    78,    79,    80,     0,     0,     0,    31,     0,
       0,    16,    29,    22,    24,    26,    25,    42,    55,     0,
       0,    27,    67,    68,    19,    20,    58,    21,    23,    13,
       0,     0,     0,     0,     0,    35,    36,     0,    77,     0,
       0,     0,     0,    57,     0,     0,     0,     0,    66,    12,
      15,    45,    46,    47,    48,    49,    50,    43,    44,     0,
       0,     0,     0,     0,    28,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,     0,    61,    89,
       0,    90,     0,    56,    17,    85,    86,     0,     0,    63,
      41,    51,    52,    53,    54,    10,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,    59,     0,    83,     0,
       0,    18,    66,     0,    66,     0,     0,     0,     0,     0,
       0,     0,    71,    73,     0,     0,    87,    88,    84,     0,
      64,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,     0,     0,    69,    40,     0,
       0,     0,     0,     0,    32,    74,    72,    61,    65,    82,
       0,     0,     0,     0,     0,    34,     0,    60,    81,     0,
       0,     0,     0,     0,     0,    39,     0,     0,    33,    70,
      37,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,   257,     6,  -138,  -138,  -138,  -138,   -37,  -138,
    -138,    67,  -138,  -138,  -138,   -35,  -138,   180,   140,   -60,
      89,   218,  -137,  -138,  -138,  -138,  -138,   111,  -138,   -27,
    -138,  -138,  -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    39,     8,    19,    14,    15,    40,    41,
      42,   170,    43,    44,    45,    46,    89,    47,    48,    49,
     136,    50,   119,    51,    52,    53,    54,   154,    55,    56,
      57,    58,   112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      75,    74,    69,   102,    80,   160,     7,   162,     1,     2,
       3,     4,    76,    77,     7,   156,     9,   157,    13,    67,
      32,    33,    34,    96,    21,   117,    97,    98,   118,    10,
      68,   109,    32,    33,    34,    99,   108,   188,   110,   176,
     133,    16,    78,   134,    12,   111,   100,     1,     2,     3,
       4,     1,     2,     3,     4,    23,    17,    24,    25,    26,
      27,    28,    29,    30,   117,   128,    18,   148,    20,   101,
      73,    32,    33,    34,   143,    22,    36,   141,    31,    32,
      33,    34,    35,   144,    36,   117,    37,   165,   159,    38,
      90,    91,    92,    93,    59,   149,   150,    81,    82,    83,
      84,    85,    61,    86,    87,    88,   180,   181,   163,   164,
     111,    60,   111,   144,    62,    81,    82,    83,    84,    85,
     147,    86,    87,    88,   174,    81,    82,    83,    84,    85,
      65,    86,    87,    88,   111,   168,   169,   135,   187,   109,
      32,    33,    34,    66,    63,   195,   175,    64,   166,    70,
      81,    82,    83,    84,    85,   200,    86,    87,    88,   203,
      71,    72,   204,    79,   206,   207,   104,    94,    81,    82,
      83,    84,    85,   167,    86,    87,    88,    81,    82,    83,
      84,    85,    95,    86,    87,    88,   109,    32,    33,    34,
     117,    81,    82,    83,    84,    85,   113,    86,    87,    88,
      81,    82,    83,    84,    85,   105,    86,    87,    88,   106,
     126,   107,   115,   114,    81,    82,    83,    84,    85,   127,
      86,    87,    88,    73,    32,    33,    34,   116,   125,    36,
     121,   122,   123,   124,   129,   130,   131,   132,   137,   140,
     138,   139,   142,   145,   146,   151,   153,   155,    99,   152,
     158,   161,   182,   171,   173,   186,   172,   183,   191,   177,
     178,   179,   184,   189,   190,    11,   192,   193,   194,   120,
     208,   196,   199,   198,   201,   202,   197,   205,   209,   210,
     211,   103,   185
};

static const yytype_uint8 yycheck[] =
{
      37,    36,    29,    63,    41,   142,     0,   144,    10,    11,
      12,    13,     7,     8,     8,   137,     0,   139,    12,    37,
      38,    39,    40,    60,    18,    47,    61,    62,    50,    41,
      48,    37,    38,    39,    40,    37,    71,   174,    44,   161,
      44,    37,    37,    47,    43,    72,    48,    10,    11,    12,
      13,    10,    11,    12,    13,    14,    44,    16,    17,    18,
      19,    20,    21,    22,    47,   100,    47,    50,    45,    63,
      37,    38,    39,    40,    41,    44,    43,   114,    37,    38,
      39,    40,    41,   118,    43,    47,    45,   147,    50,    48,
       3,     4,     5,     6,    37,   130,   131,    25,    26,    27,
      28,    29,    43,    31,    32,    33,   166,   167,   145,   146,
     137,    45,   139,   148,    43,    25,    26,    27,    28,    29,
      48,    31,    32,    33,   159,    25,    26,    27,    28,    29,
      48,    31,    32,    33,   161,    23,    24,    47,   173,    37,
      38,    39,    40,    48,    43,   182,    44,    43,    48,    43,
      25,    26,    27,    28,    29,   192,    31,    32,    33,   196,
      50,    43,   199,    46,   201,   202,    37,    48,    25,    26,
      27,    28,    29,    48,    31,    32,    33,    25,    26,    27,
      28,    29,    48,    31,    32,    33,    37,    38,    39,    40,
      47,    25,    26,    27,    28,    29,    44,    31,    32,    33,
      25,    26,    27,    28,    29,    48,    31,    32,    33,    48,
      44,    42,    48,    46,    25,    26,    27,    28,    29,    44,
      31,    32,    33,    37,    38,    39,    40,    48,    46,    43,
      90,    91,    92,    93,    37,    48,    48,    44,    47,    44,
      48,    47,    37,    45,    45,    45,    37,    37,    37,    48,
      48,    43,    49,    47,    50,    48,    44,    38,    15,    46,
      46,    44,    46,    48,    44,     8,    45,    44,    44,    89,
     203,    49,    45,    48,    45,    45,   187,    46,    46,    46,
      46,    63,   171
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    11,    12,    13,    52,    53,    54,    55,     0,
      41,    53,    43,    54,    57,    58,    37,    44,    47,    56,
      45,    54,    44,    14,    16,    17,    18,    19,    20,    21,
      22,    37,    38,    39,    40,    41,    43,    45,    48,    54,
      59,    60,    61,    63,    64,    65,    66,    68,    69,    70,
      72,    74,    75,    76,    77,    79,    80,    81,    82,    37,
      45,    43,    43,    43,    43,    48,    48,    37,    48,    80,
      43,    50,    43,    37,    66,    59,     7,     8,    37,    46,
      59,    25,    26,    27,    28,    29,    31,    32,    33,    67,
       3,     4,     5,     6,    48,    48,    59,    66,    66,    37,
      48,    54,    70,    72,    37,    48,    48,    42,    66,    37,
      44,    80,    83,    44,    46,    48,    48,    47,    50,    73,
      68,    69,    69,    69,    69,    46,    44,    44,    66,    37,
      48,    48,    44,    44,    47,    47,    71,    47,    48,    47,
      44,    59,    37,    41,    66,    45,    45,    48,    50,    66,
      66,    45,    48,    37,    78,    37,    83,    83,    48,    50,
      73,    43,    73,    59,    59,    70,    48,    48,    23,    24,
      62,    47,    44,    50,    66,    44,    83,    46,    46,    44,
      70,    70,    49,    38,    46,    78,    48,    66,    73,    48,
      44,    15,    45,    44,    44,    59,    49,    71,    48,    45,
      59,    45,    45,    59,    59,    46,    59,    59,    62,    46,
      46,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    56,
      55,    57,    55,    58,    58,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    62,    62,    63,    63,    64,    64,    64,
      65,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    69,    69,    69,    70,
      71,    71,    72,    72,    73,    73,    73,    74,    74,    75,
      76,    77,    77,    78,    78,    79,    79,    79,    80,    80,
      80,    81,    81,    81,    81,    82,    82,    83,    83,    83,
      83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     0,
       9,     0,     8,     4,     2,     2,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     7,     5,     3,     2,     2,    11,    11,    10,
       7,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     1,     3,     1,     1,     4,
       5,     0,     5,     3,     3,     5,     0,     1,     1,     7,
      11,     5,     7,     1,     3,     3,     3,     2,     1,     1,
       1,     8,     7,     4,     5,     3,     3,     3,     3,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* S: BEGIN  */
#line 31 "semanticAnalysis.y"
          {print_Id_Table(); id_count = 0; printf("DONE!\n");}
#line 1436 "y.tab.c"
    break;

  case 3: /* BEGIN: FUNC_DECL BEGIN  */
#line 33 "semanticAnalysis.y"
                        {}
#line 1442 "y.tab.c"
    break;

  case 4: /* BEGIN: FUNC_DECL  */
#line 34 "semanticAnalysis.y"
                  {}
#line 1448 "y.tab.c"
    break;

  case 5: /* TYPE: INT  */
#line 36 "semanticAnalysis.y"
           {(yyval.t).lexeme = "INT";}
#line 1454 "y.tab.c"
    break;

  case 6: /* TYPE: FLOAT  */
#line 37 "semanticAnalysis.y"
             {(yyval.t).lexeme = "FLOAT";}
#line 1460 "y.tab.c"
    break;

  case 7: /* TYPE: CHAR  */
#line 38 "semanticAnalysis.y"
            {(yyval.t).lexeme = "CHAR";}
#line 1466 "y.tab.c"
    break;

  case 8: /* TYPE: VOID  */
#line 39 "semanticAnalysis.y"
            {(yyval.t).lexeme = "VOID";}
#line 1472 "y.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 41 "semanticAnalysis.y"
                                    {insertFunc((yyvsp[-2].t).lexeme,(yyvsp[-3].t).lexeme); updateFunc((int)(yyvsp[0].t).val, dec); decCounter = 0;}
#line 1478 "y.tab.c"
    break;

  case 10: /* FUNC_DECL: TYPE FUNC '(' PARA_LIST $@1 ')' '{' STMT_LIST '}'  */
#line 41 "semanticAnalysis.y"
                                                                                                                                           {print_Id_Table(); id_count = 0;}
#line 1484 "y.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 42 "semanticAnalysis.y"
                          {insertFunc((yyvsp[-1].t).lexeme,(yyvsp[-2].t).lexeme);}
#line 1490 "y.tab.c"
    break;

  case 13: /* PARA_LIST: PARA_LIST ',' TYPE ID  */
#line 44 "semanticAnalysis.y"
                                  {(yyval.t).val = (yyvsp[-3].t).val + 1; insertID((yyvsp[0].t).lexeme, (yyvsp[-1].t).lexeme); dec[decCounter].type = (yyvsp[-1].t).lexeme; dec[decCounter].name = (yyvsp[0].t).lexeme; decCounter++;}
#line 1496 "y.tab.c"
    break;

  case 14: /* PARA_LIST: TYPE ID  */
#line 45 "semanticAnalysis.y"
                    {(yyval.t).val = 1; insertID((yyvsp[0].t).lexeme, (yyvsp[-1].t).lexeme); dec[decCounter].type = (yyvsp[-1].t).lexeme; dec[decCounter].name = (yyvsp[0].t).lexeme; decCounter++;}
#line 1502 "y.tab.c"
    break;

  case 32: /* SWITCH_STMT: SWITCH '(' ID ')' '{' CASE_STMT '}'  */
#line 57 "semanticAnalysis.y"
                                                  {if(strcmp(findIdType((yyvsp[-4].t).lexeme),"INT")!=0){printf("ERORR: Wrong variable type passed in Switch\n"); exit(0);}}
#line 1508 "y.tab.c"
    break;

  case 41: /* EXPR: EXPR COMP_OP TERM  */
#line 70 "semanticAnalysis.y"
                         {if(strcmp((yyvsp[-2].t).lexeme, (yyvsp[0].t).lexeme)!=0){
                                print_Id_Table();
                                printf("ERROR: Type mismatch for expression\n");
                                exit(0);
                            }
                            (yyval.t).lexeme = (yyvsp[-2].t).lexeme;
                            (yyval.t).val = (float)comparator((yyvsp[-2].t).val,(yyvsp[0].t).val,(yyvsp[-1].t).lexeme);
                         }
#line 1521 "y.tab.c"
    break;

  case 42: /* EXPR: TERM  */
#line 78 "semanticAnalysis.y"
            {(yyval.t).lexeme = (yyvsp[0].t).lexeme; (yyval.t).val = (yyvsp[0].t).val;}
#line 1527 "y.tab.c"
    break;

  case 43: /* COMP_OP: LESS  */
#line 79 "semanticAnalysis.y"
               {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1533 "y.tab.c"
    break;

  case 44: /* COMP_OP: GTR  */
#line 79 "semanticAnalysis.y"
                                              {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1539 "y.tab.c"
    break;

  case 45: /* COMP_OP: GTR_EQ  */
#line 79 "semanticAnalysis.y"
                                                                                {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1545 "y.tab.c"
    break;

  case 46: /* COMP_OP: LESS_EQ  */
#line 79 "semanticAnalysis.y"
                                                                                                                   {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1551 "y.tab.c"
    break;

  case 47: /* COMP_OP: NOT_EQ  */
#line 79 "semanticAnalysis.y"
                                                                                                                                                     {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1557 "y.tab.c"
    break;

  case 48: /* COMP_OP: AND  */
#line 79 "semanticAnalysis.y"
                                                                                                                                                                                    {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1563 "y.tab.c"
    break;

  case 49: /* COMP_OP: OR  */
#line 79 "semanticAnalysis.y"
                                                                                                                                                                                                                  {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1569 "y.tab.c"
    break;

  case 50: /* COMP_OP: EQ_EQ  */
#line 79 "semanticAnalysis.y"
                                                                                                                                                                                                                                                   {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1575 "y.tab.c"
    break;

  case 51: /* TERM: TERM '+' FACTOR  */
#line 80 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val + (yyvsp[0].t).val;}
#line 1581 "y.tab.c"
    break;

  case 52: /* TERM: TERM '-' FACTOR  */
#line 81 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val - (yyvsp[0].t).val;}
#line 1587 "y.tab.c"
    break;

  case 53: /* TERM: TERM '*' FACTOR  */
#line 82 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val * (yyvsp[0].t).val;}
#line 1593 "y.tab.c"
    break;

  case 54: /* TERM: TERM '/' FACTOR  */
#line 83 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val / (yyvsp[0].t).val;}
#line 1599 "y.tab.c"
    break;

  case 55: /* TERM: FACTOR  */
#line 84 "semanticAnalysis.y"
              {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1605 "y.tab.c"
    break;

  case 56: /* FACTOR: '(' EXPR ')'  */
#line 86 "semanticAnalysis.y"
                      {(yyval.t).lexeme = (yyvsp[-1].t).lexeme; (yyval.t).val = (yyvsp[-1].t).val;}
#line 1611 "y.tab.c"
    break;

  case 57: /* FACTOR: ID  */
#line 87 "semanticAnalysis.y"
            {bool found = true;
             for(int i = 0; i<id_count; i++){
                if(strcmp(id_table[i].name,(yyvsp[0].t).lexeme)==0){
                    found = false;
                    (yyval.t).lexeme = id_table[i].type;
                    (yyval.t).val = id_table[i].val;
                    break;
                }
             }
                if(found){
                    printf("ERROR: Undeclared variable %s\n", (yyvsp[0].t).lexeme);
                    exit(0);
                }
            }
#line 1630 "y.tab.c"
    break;

  case 58: /* FACTOR: CONST  */
#line 101 "semanticAnalysis.y"
               {(yyval.t).lexeme = (yyvsp[0].t).lexeme; (yyval.t).val = (yyvsp[0].t).val;}
#line 1636 "y.tab.c"
    break;

  case 59: /* ASSGN: ID '=' EXPR ASSGN_TAIL  */
#line 103 "semanticAnalysis.y"
                               {typeCheck((yyvsp[-3].t).lexeme,(yyvsp[-1].t).lexeme); updateID((yyvsp[-3].t).lexeme,(yyvsp[-1].t).val);}
#line 1642 "y.tab.c"
    break;

  case 60: /* ASSGN_TAIL: ',' ID '=' EXPR ASSGN_TAIL  */
#line 104 "semanticAnalysis.y"
                                        {typeCheck((yyvsp[-3].t).lexeme,(yyvsp[-1].t).lexeme); updateID((yyvsp[-3].t).lexeme,(yyvsp[-1].t).val);}
#line 1648 "y.tab.c"
    break;

  case 62: /* DECL: TYPE ID '=' EXPR DECL_TAIL  */
#line 107 "semanticAnalysis.y"
                                  {(yyval.t).lexeme = (yyvsp[-4].t).lexeme; dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-3].t).lexeme; dec[decCounter].val = (yyvsp[-1].t).val; dec[decCounter].type = (yyvsp[-1].t).lexeme; decCounter++;insertEntry((yyvsp[-4].t).lexeme);}
#line 1654 "y.tab.c"
    break;

  case 63: /* DECL: TYPE ID DECL_TAIL  */
#line 108 "semanticAnalysis.y"
                         {(yyval.t).lexeme = (yyvsp[-2].t).lexeme; dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-1].t).lexeme; dec[decCounter].val = INT_MIN; decCounter++;insertEntry((yyvsp[-2].t).lexeme);}
#line 1660 "y.tab.c"
    break;

  case 64: /* DECL_TAIL: ',' ID DECL_TAIL  */
#line 110 "semanticAnalysis.y"
                             {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-1].t).lexeme; dec[decCounter].val = INT_MIN; decCounter++;}
#line 1666 "y.tab.c"
    break;

  case 65: /* DECL_TAIL: ',' ID '=' EXPR DECL_TAIL  */
#line 111 "semanticAnalysis.y"
                                      {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-3].t).lexeme; dec[decCounter].val = (yyvsp[-1].t).val;dec[decCounter].type = (yyvsp[-1].t).lexeme; decCounter++;}
#line 1672 "y.tab.c"
    break;

  case 72: /* PRINT: PRINTF '(' STRING ',' VAR_LIST ')' ';'  */
#line 121 "semanticAnalysis.y"
                                               {for(int i = 0;i<strlen((yyvsp[-4].t).lexeme);i++){
                                                    if((yyvsp[-4].t).lexeme[i] == '%'){
                                                        if(list_c<=0){
                                                            printf("ERROR: Too few arguments for printf\n");
                                                            exit(0);
                                                        }
                                                        if((yyvsp[-4].t).lexeme[i+1] == 'd'){
                                                            if(strcmp(listType[list_c-1],"INT")!=0){
                                                                printf("ERROR: Type mismatch for printf\n");
                                                                exit(0);
                                                            }
                                                            list_c--;
                                                        }
                                                        else if((yyvsp[-4].t).lexeme[i+1] == 'f'){
                                                            if(strcmp(listType[list_c-1],"FLOAT")!=0){
                                                                printf("ERROR: Type mismatch for printf\n");
                                                                exit(0);
                                                            }
                                                            list_c--;
                                                        }
                                                        else if((yyvsp[-4].t).lexeme[i+1] == 'c'){
                                                            if(strcmp(listType[list_c-1],"CHAR")!=0){
                                                                printf("ERROR: Type mismatch for printf\n");
                                                                exit(0);
                                                            }
                                                            list_c--;
                                                        }
                                                        
                                                    }
                                                }
                                                if(list_c > 0){
                                                    printf("ERROR: Too many arguments for printf\n");
                                                    exit(0);
                                                }
                                                list_c = 0;
                                                }
#line 1713 "y.tab.c"
    break;

  case 73: /* VAR_LIST: ID  */
#line 159 "semanticAnalysis.y"
              {listType[list_c] = findIdType((yyvsp[0].t).lexeme); list_c++;}
#line 1719 "y.tab.c"
    break;

  case 74: /* VAR_LIST: ID ',' VAR_LIST  */
#line 160 "semanticAnalysis.y"
                           {listType[list_c] = findIdType((yyvsp[-2].t).lexeme); list_c++;}
#line 1725 "y.tab.c"
    break;

  case 78: /* CONST: INT_CONST  */
#line 166 "semanticAnalysis.y"
                  {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "INT";}
#line 1731 "y.tab.c"
    break;

  case 79: /* CONST: FLOAT_CONST  */
#line 167 "semanticAnalysis.y"
                    {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "FLOAT";}
#line 1737 "y.tab.c"
    break;

  case 80: /* CONST: CHAR_CONST  */
#line 168 "semanticAnalysis.y"
                   {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "CHAR";}
#line 1743 "y.tab.c"
    break;

  case 81: /* FUNC_CALL: TYPE ID '=' FUNC '(' MIXED_LIST ')' ';'  */
#line 170 "semanticAnalysis.y"
                                                    {if(strcmp((yyvsp[-7].t).lexeme, findFunc((yyvsp[-4].t).lexeme))!=0){
                                                            printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                            exit(0);
                                                        }
                                                        for(int i = 0; i<func_count; i++){
                                                            if(strcmp(func_table[i].name,(yyvsp[-4].t).lexeme)==0){
                                                                if(func_table[i].para != list_c){
                                                                    printf("ERROR: Number of arguments mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                                    exit(0);
                                                                }
                                                                for(int j = 0; j<list_c; j++){
                                                                    if(strcmp(func_table[i].paraType[j],listType[j])!=0){
                                                                        printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                                        exit(0);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        list_c = 0;
                                                    }
#line 1768 "y.tab.c"
    break;

  case 82: /* FUNC_CALL: TYPE ID '=' FUNC '(' ')' ';'  */
#line 190 "semanticAnalysis.y"
                                         {if(strcmp((yyvsp[-6].t).lexeme, findFunc((yyvsp[-3].t).lexeme))!=0){
                                                printf("ERROR: Type mismatch for function %s\n", (yyvsp[-3].t).lexeme);
                                                exit(0);
                                            }
                                            for(int i = 0; i<func_count; i++){
                                                if(strcmp(func_table[i].name,(yyvsp[-3].t).lexeme)==0){
                                                    if(func_table[i].para != list_c){
                                                        printf("ERROR: Number of arguments mismatch for function %s\n", (yyvsp[-3].t).lexeme);
                                                        exit(0);
                                                    }
                                                }
                                            }
                                            insertID((yyvsp[-5].t).lexeme, (yyvsp[-6].t).lexeme);
                                            }
#line 1787 "y.tab.c"
    break;

  case 83: /* FUNC_CALL: FUNC '(' ')' ';'  */
#line 204 "semanticAnalysis.y"
                                        {findFunc((yyvsp[-3].t).lexeme);}
#line 1793 "y.tab.c"
    break;

  case 84: /* FUNC_CALL: FUNC '(' MIXED_LIST ')' ';'  */
#line 205 "semanticAnalysis.y"
                                        {findFunc((yyvsp[-4].t).lexeme); 
                                        for(int i = 0; i<func_count; i++){
                                            if(strcmp(func_table[i].name,(yyvsp[-4].t).lexeme)==0){
                                                if(func_table[i].para != list_c){
                                                    printf("ERROR: Number of arguments mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                    exit(0);
                                                }
                                                for(int j = list_c-1; j>=0; j--){
                                                    if(strcmp(func_table[i].paraType[list_c - j -1],listType[j])!=0){
                                                        printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                        exit(0);
                                                    }
                                                }
                                            }
                                        }list_c = 0;}
#line 1813 "y.tab.c"
    break;

  case 87: /* MIXED_LIST: ID ',' MIXED_LIST  */
#line 232 "semanticAnalysis.y"
                               {listType[list_c] = findIdType((yyvsp[-2].t).lexeme); list_c++;}
#line 1819 "y.tab.c"
    break;

  case 88: /* MIXED_LIST: CONST ',' MIXED_LIST  */
#line 233 "semanticAnalysis.y"
                                   {listType[list_c] = (yyvsp[-2].t).lexeme; list_c++;}
#line 1825 "y.tab.c"
    break;

  case 89: /* MIXED_LIST: ID  */
#line 234 "semanticAnalysis.y"
                 {listType[list_c] = findIdType((yyvsp[0].t).lexeme); list_c++;}
#line 1831 "y.tab.c"
    break;

  case 90: /* MIXED_LIST: CONST  */
#line 235 "semanticAnalysis.y"
                    {listType[list_c] = (yyvsp[0].t).lexeme; list_c++;}
#line 1837 "y.tab.c"
    break;


#line 1841 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 246 "semanticAnalysis.y"


void insertEntry(char *t){
    for(int i = 0; i<decCounter; i++){
        insertID(dec[i].name, t);
        if(dec[i].val != INT_MIN){
            if(strcmp(dec[i].type, t)!=0){
                printf("ERROR: Type mismatch for variable %s\n", dec[i].name);
                exit(0);
            }
            updateID(dec[i].name,dec[i].val);
        }
    }
    decCounter = 0;                   
}

void yyerror()
{
    printTable();
    printf("Syntax Error\n");
    exit(0);
}

int main()
{
    yyin = fopen("../input.txt","r");
    yyparse();
    printTable();
    /* print_Id_Table(); */
    print_func_Table();
    return 0;
}
