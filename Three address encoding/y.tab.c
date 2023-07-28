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
#line 1 "three.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
    extern FILE *yyin;

    int label = 0;
    int tempVariable = 0;

    char* genTempVariable(int id){
        char* temp = (char*)malloc(10*sizeof(char));
        temp[0] = 'T';
        snprintf(temp, 10, "T%d", id);
        return temp;
    }

    int gencode(char* lhs, char* op, char* rhs){
        printf("\nT%d = %s %s %s \n", tempVariable, lhs, op, rhs);
        return tempVariable;
    }

    void assignment(char* lhs, char* rhs){
        printf("\n%s = %s \n", lhs, rhs);
    }

#line 99 "y.tab.c"

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
    ID = 258,                      /* ID  */
    INT_CONST = 259,               /* INT_CONST  */
    FLOAT_CONST = 260,             /* FLOAT_CONST  */
    CHAR_CONST = 261,              /* CHAR_CONST  */
    ARR = 262,                     /* ARR  */
    ARR2 = 263,                    /* ARR2  */
    ARR_E = 264,                   /* ARR_E  */
    FUNC = 265,                    /* FUNC  */
    STRING = 266,                  /* STRING  */
    INT = 267,                     /* INT  */
    FLOAT = 268,                   /* FLOAT  */
    CHAR = 269,                    /* CHAR  */
    VOID = 270,                    /* VOID  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    WHILE = 273,                   /* WHILE  */
    FOR = 274,                     /* FOR  */
    SWITCH = 275,                  /* SWITCH  */
    CONTINUE = 276,                /* CONTINUE  */
    BREAK = 277,                   /* BREAK  */
    RETURN = 278,                  /* RETURN  */
    PRINTF = 279,                  /* PRINTF  */
    DEFAULT = 280,                 /* DEFAULT  */
    CASE = 281,                    /* CASE  */
    GTR_EQ = 282,                  /* GTR_EQ  */
    LESS_EQ = 283,                 /* LESS_EQ  */
    NOT_EQ = 284,                  /* NOT_EQ  */
    AND = 285,                     /* AND  */
    OR = 286,                      /* OR  */
    NOT = 287,                     /* NOT  */
    EQ_EQ = 288,                   /* EQ_EQ  */
    NEWLINE = 289,                 /* NEWLINE  */
    UNK = 290,                     /* UNK  */
    END_OF_FILE = 291,             /* END_OF_FILE  */
    COMP_OP = 292                  /* COMP_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INT_CONST 259
#define FLOAT_CONST 260
#define CHAR_CONST 261
#define ARR 262
#define ARR2 263
#define ARR_E 264
#define FUNC 265
#define STRING 266
#define INT 267
#define FLOAT 268
#define CHAR 269
#define VOID 270
#define IF 271
#define ELSE 272
#define WHILE 273
#define FOR 274
#define SWITCH 275
#define CONTINUE 276
#define BREAK 277
#define RETURN 278
#define PRINTF 279
#define DEFAULT 280
#define CASE 281
#define GTR_EQ 282
#define LESS_EQ 283
#define NOT_EQ 284
#define AND 285
#define OR 286
#define NOT 287
#define EQ_EQ 288
#define NEWLINE 289
#define UNK 290
#define END_OF_FILE 291
#define COMP_OP 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "three.y"

    char* lexeme;

#line 230 "y.tab.c"

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
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_INT_CONST = 8,                  /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 9,                /* FLOAT_CONST  */
  YYSYMBOL_CHAR_CONST = 10,                /* CHAR_CONST  */
  YYSYMBOL_ARR = 11,                       /* ARR  */
  YYSYMBOL_ARR2 = 12,                      /* ARR2  */
  YYSYMBOL_ARR_E = 13,                     /* ARR_E  */
  YYSYMBOL_FUNC = 14,                      /* FUNC  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_CHAR = 18,                      /* CHAR  */
  YYSYMBOL_VOID = 19,                      /* VOID  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_CONTINUE = 25,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_PRINTF = 28,                    /* PRINTF  */
  YYSYMBOL_DEFAULT = 29,                   /* DEFAULT  */
  YYSYMBOL_CASE = 30,                      /* CASE  */
  YYSYMBOL_GTR_EQ = 31,                    /* GTR_EQ  */
  YYSYMBOL_LESS_EQ = 32,                   /* LESS_EQ  */
  YYSYMBOL_NOT_EQ = 33,                    /* NOT_EQ  */
  YYSYMBOL_AND = 34,                       /* AND  */
  YYSYMBOL_OR = 35,                        /* OR  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_EQ_EQ = 37,                     /* EQ_EQ  */
  YYSYMBOL_NEWLINE = 38,                   /* NEWLINE  */
  YYSYMBOL_UNK = 39,                       /* UNK  */
  YYSYMBOL_END_OF_FILE = 40,               /* END_OF_FILE  */
  YYSYMBOL_COMP_OP = 41,                   /* COMP_OP  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* ':'  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* '='  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_S = 51,                         /* S  */
  YYSYMBOL_BEGIN = 52,                     /* BEGIN  */
  YYSYMBOL_TYPE = 53,                      /* TYPE  */
  YYSYMBOL_FUNC_DECL = 54,                 /* FUNC_DECL  */
  YYSYMBOL_PARA_LIST = 55,                 /* PARA_LIST  */
  YYSYMBOL_PARA = 56,                      /* PARA  */
  YYSYMBOL_SWITCH_STMT = 57,               /* SWITCH_STMT  */
  YYSYMBOL_CASE_STMT = 58,                 /* CASE_STMT  */
  YYSYMBOL_STMT_LIST = 59,                 /* STMT_LIST  */
  YYSYMBOL_STMT = 60,                      /* STMT  */
  YYSYMBOL_BRK_CNT = 61,                   /* BRK_CNT  */
  YYSYMBOL_FOR_STMT = 62,                  /* FOR_STMT  */
  YYSYMBOL_WHILE_STMT = 63,                /* WHILE_STMT  */
  YYSYMBOL_EXPR = 64,                      /* EXPR  */
  YYSYMBOL_TERM = 65,                      /* TERM  */
  YYSYMBOL_FACTOR = 66,                    /* FACTOR  */
  YYSYMBOL_ASSGN = 67,                     /* ASSGN  */
  YYSYMBOL_ASSGN_TAIL = 68,                /* ASSGN_TAIL  */
  YYSYMBOL_DECL = 69,                      /* DECL  */
  YYSYMBOL_DECL_TAIL = 70,                 /* DECL_TAIL  */
  YYSYMBOL_IF_STMT = 71,                   /* IF_STMT  */
  YYSYMBOL_MAT = 72,                       /* MAT  */
  YYSYMBOL_UNMAT = 73,                     /* UNMAT  */
  YYSYMBOL_PRINT = 74,                     /* PRINT  */
  YYSYMBOL_VAR_LIST = 75,                  /* VAR_LIST  */
  YYSYMBOL_RTRN_STMT = 76,                 /* RTRN_STMT  */
  YYSYMBOL_CONST = 77,                     /* CONST  */
  YYSYMBOL_FUNC_CALL = 78,                 /* FUNC_CALL  */
  YYSYMBOL_ARR_DECL = 79,                  /* ARR_DECL  */
  YYSYMBOL_CONST_LIST = 80,                /* CONST_LIST  */
  YYSYMBOL_MIXED_LIST = 81,                /* MIXED_LIST  */
  YYSYMBOL_CONST_LIST2 = 82,               /* CONST_LIST2  */
  YYSYMBOL_INT_LIST = 83,                  /* INT_LIST  */
  YYSYMBOL_FLOAT_LIST = 84,                /* FLOAT_LIST  */
  YYSYMBOL_CHAR_LIST = 85                  /* CHAR_LIST  */
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
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      42,    43,     5,     3,    46,     4,     2,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    48,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    44,    45,    47,    47,    47,    47,    49,
      50,    52,    53,    55,    57,    59,    60,    62,    63,    64,
      65,    67,    68,    69,    70,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    80,    80,    82,    83,    84,    86,
      88,    92,    94,   100,   106,   112,   118,   120,   121,   122,
     124,   125,   125,   127,   128,   130,   131,   132,   133,   133,
     135,   137,   139,   140,   142,   143,   145,   146,   147,   149,
     150,   151,   153,   154,   155,   156,   157,   158,   160,   161,
     162,   163,   164,   166,   166,   166,   168,   168,   168,   168,
     170,   171,   173,   174,   176,   176,   178,   178
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
  "'/'", "ID", "INT_CONST", "FLOAT_CONST", "CHAR_CONST", "ARR", "ARR2",
  "ARR_E", "FUNC", "STRING", "INT", "FLOAT", "CHAR", "VOID", "IF", "ELSE",
  "WHILE", "FOR", "SWITCH", "CONTINUE", "BREAK", "RETURN", "PRINTF",
  "DEFAULT", "CASE", "GTR_EQ", "LESS_EQ", "NOT_EQ", "AND", "OR", "NOT",
  "EQ_EQ", "NEWLINE", "UNK", "END_OF_FILE", "COMP_OP", "'('", "')'", "'{'",
  "'}'", "','", "':'", "';'", "'='", "$accept", "S", "BEGIN", "TYPE",
  "FUNC_DECL", "PARA_LIST", "PARA", "SWITCH_STMT", "CASE_STMT",
  "STMT_LIST", "STMT", "BRK_CNT", "FOR_STMT", "WHILE_STMT", "EXPR", "TERM",
  "FACTOR", "ASSGN", "ASSGN_TAIL", "DECL", "DECL_TAIL", "IF_STMT", "MAT",
  "UNMAT", "PRINT", "VAR_LIST", "RTRN_STMT", "CONST", "FUNC_CALL",
  "ARR_DECL", "CONST_LIST", "MIXED_LIST", "CONST_LIST2", "INT_LIST",
  "FLOAT_LIST", "CHAR_LIST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,  -136,  -136,  -136,  -136,    44,  -136,    81,   136,  -136,
      77,  -136,   113,    55,   130,    46,  -136,    60,  -136,    97,
     136,    94,  -136,  -136,  -136,   120,   125,   137,   138,   139,
     134,   135,    24,   142,   115,    60,  -136,   127,  -136,   133,
      60,  -136,  -136,  -136,   144,   155,  -136,   140,   141,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,    60,  -136,    51,
      30,   115,   115,     2,   179,  -136,  -136,   145,  -136,   147,
     175,  -136,   -27,   153,    57,    14,    87,   143,  -136,  -136,
     115,   115,   115,   115,   115,  -136,  -136,   154,   158,    64,
     157,   159,   160,   161,   -16,    66,   152,   115,   195,   162,
     163,   166,  -136,  -136,    99,  -136,    60,   198,   104,  -136,
    -136,   164,  -136,   168,   169,   155,   171,   171,  -136,  -136,
    -136,    38,   207,  -136,   156,  -136,   156,   167,   172,   173,
     115,   -24,   122,   115,   115,   174,   176,   212,  -136,   123,
     178,    74,   165,   177,   165,   180,   182,   181,  -136,  -136,
    -136,    60,    60,   215,   115,    -6,    -5,    22,  -136,   183,
     184,   115,  -136,    47,  -136,   185,   186,   187,   189,  -136,
    -136,  -136,   165,   190,   191,  -136,   192,   115,   193,   194,
     199,   215,   215,   196,   218,   200,   212,   201,    74,   202,
     203,   229,   214,   231,   204,   206,   205,   208,  -136,    64,
     223,  -136,   210,   216,   217,    60,   211,  -136,  -136,  -136,
    -136,  -136,   209,  -136,  -136,  -136,  -136,   219,  -136,  -136,
    -136,   220,    60,   222,   224,  -136,    60,  -136,   177,    60,
     225,    60,    60,    22,  -136,   226,  -136,   227,   228,  -136,
    -136,  -136,  -136
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     6,     7,     8,     0,     2,     0,     4,     1,
       0,     3,     0,     0,     0,     0,    12,     0,    13,     0,
       0,    48,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,    29,     0,
      18,    24,    26,    28,    27,    41,    46,     0,     0,    30,
      58,    59,    21,    22,    49,    23,    25,     0,    11,     0,
       0,     0,     0,     0,     0,    34,    35,     0,    68,     0,
       0,    48,     0,     0,    57,     0,     0,     0,    10,    17,
       0,     0,     0,     0,     0,    31,    32,     0,     0,    52,
      88,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,    47,    19,     0,     0,    54,
      78,     0,    81,     0,     0,    40,    42,    43,    44,    45,
       9,     0,     0,    50,     0,    74,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,    20,    57,
       0,    57,     0,     0,     0,     0,     0,     0,    86,    87,
      75,     0,     0,     0,     0,     0,     0,     0,    62,    64,
       0,     0,    55,     0,    53,    92,    94,    96,     0,    83,
      84,    85,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    52,
      60,    39,     0,     0,     0,     0,     0,    14,    65,    63,
      56,    73,     0,    93,    95,    97,    79,    90,    82,    80,
      51,     0,     0,     0,     0,    16,     0,    72,     0,     0,
       0,     0,     0,     0,    91,     0,    38,     0,     0,    15,
      61,    36,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,   239,     3,  -136,  -136,   235,  -136,    15,   -35,
    -136,  -136,  -136,  -136,   -33,    67,  -136,   -55,    62,   213,
    -135,  -136,  -136,  -136,  -136,    76,  -136,   -30,  -136,  -136,
    -131,  -114,    35,    78,    75,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    37,     8,    15,    16,    38,   185,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   123,    48,
     109,    49,    50,    51,    52,   160,    53,    54,    55,    56,
     168,    93,   173,   169,   170,   171
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      73,    72,    69,     7,   162,    79,   164,   146,    99,    96,
     148,     7,   149,   174,    80,    14,   105,    80,     1,     2,
       3,     4,    87,    14,   153,    80,    89,   128,    94,    95,
      92,    67,    22,    23,    24,    80,    80,    90,    22,    23,
      24,   195,   181,   182,     9,    90,    22,    23,    24,   190,
      97,   183,   184,   210,    90,    22,    23,    24,    71,    22,
      23,    24,   110,   111,   131,    88,    98,    21,    22,    23,
      24,   138,    68,    91,    25,   141,     1,     2,     3,     4,
      26,   145,    27,    28,    29,    30,    31,    32,    33,    19,
     189,    92,    20,    34,    92,    10,    92,    89,   180,    17,
     155,   156,    34,   107,    35,    80,   108,    80,    36,   129,
     122,    71,    22,    23,    24,    80,   178,   179,   140,    12,
     107,   141,    71,    22,    23,    24,   203,   204,   188,     1,
       2,     3,     4,    92,    74,   112,   113,    18,    75,    76,
      77,    57,   136,    59,   199,   137,    34,   115,   116,   117,
     118,   119,     1,     2,     3,     4,    13,    34,    81,    82,
      83,    84,    60,    90,    22,    23,    24,    61,   107,   107,
     225,   154,   161,   165,   166,   167,    83,    84,    78,    62,
      63,    64,    65,    66,    70,    80,   101,   230,    85,    86,
     104,   233,   114,   102,   235,   103,   237,   238,   106,   120,
     121,   130,   132,   124,   127,   139,   126,   125,   142,   135,
     133,   134,   143,   144,   147,   150,   151,   152,   157,   159,
     163,   172,    96,   166,   158,   176,   206,   187,   175,   186,
     177,   191,   192,   193,   194,   196,   197,   165,   200,   201,
     198,   167,   202,   205,   221,   207,   212,    11,   239,   209,
     211,   217,   216,   218,   222,    58,   219,   227,   226,   223,
     224,   220,   208,   234,   229,   228,   231,   214,   232,   213,
     236,   240,   241,   242,     0,   215,   100
};

static const yytype_int16 yycheck[] =
{
      35,    34,    32,     0,   139,    40,   141,   121,    63,     7,
     124,     8,   126,   144,    41,    12,    43,    41,    16,    17,
      18,    19,    57,    20,    48,    41,    59,    43,    61,    62,
      60,     7,     8,     9,    10,    41,    41,     7,     8,     9,
      10,   172,    48,    48,     0,     7,     8,     9,    10,   163,
      48,    29,    30,   188,     7,     8,     9,    10,     7,     8,
       9,    10,    48,    49,    97,    14,    63,     7,     8,     9,
      10,   106,    48,    43,    14,   108,    16,    17,    18,    19,
      20,    43,    22,    23,    24,    25,    26,    27,    28,    43,
      43,   121,    46,    42,   124,    14,   126,   130,   153,    44,
     133,   134,    42,    46,    44,    41,    49,    41,    48,    43,
      46,     7,     8,     9,    10,    41,   151,   152,    14,    42,
      46,   154,     7,     8,     9,    10,   181,   182,   161,    16,
      17,    18,    19,   163,     7,    48,    49,     7,    11,    12,
      13,    44,    43,    49,   177,    46,    42,    80,    81,    82,
      83,    84,    16,    17,    18,    19,    43,    42,     3,     4,
       5,     6,    42,     7,     8,     9,    10,    42,    46,    46,
     205,    49,    49,     8,     9,    10,     5,     6,    45,    42,
      42,    42,    48,    48,    42,    41,     7,   222,    48,    48,
      15,   226,    49,    48,   229,    48,   231,   232,    45,    45,
      42,    49,     7,    46,    43,     7,    46,    48,    44,    43,
      48,    48,    44,    44,     7,    48,    44,    44,    44,     7,
      42,    44,     7,     9,    48,    43,     8,    43,    48,    46,
      49,    46,    46,    46,    45,    45,    45,     8,    45,    45,
      48,    10,    43,    47,    21,    45,    43,     8,   233,    48,
      48,    45,    48,    48,    44,    20,    48,    48,    47,    43,
      43,   199,   186,   228,    44,    46,    44,   192,    44,   191,
      45,    45,    45,    45,    -1,   193,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    17,    18,    19,    51,    52,    53,    54,     0,
      14,    52,    42,    43,    53,    55,    56,    44,     7,    43,
      46,     7,     8,     9,    10,    14,    20,    22,    23,    24,
      25,    26,    27,    28,    42,    44,    48,    53,    57,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    69,    71,
      72,    73,    74,    76,    77,    78,    79,    44,    56,    49,
      42,    42,    42,    42,    42,    48,    48,     7,    48,    77,
      42,     7,    64,    59,     7,    11,    12,    13,    45,    59,
      41,     3,     4,     5,     6,    48,    48,    59,    14,    64,
       7,    43,    77,    81,    64,    64,     7,    48,    53,    67,
      69,     7,    48,    48,    15,    43,    45,    46,    49,    70,
      48,    49,    48,    49,    49,    65,    65,    65,    65,    65,
      45,    42,    46,    68,    46,    48,    46,    43,    43,    43,
      49,    64,     7,    48,    48,    43,    43,    46,    59,     7,
      14,    64,    44,    44,    44,    43,    81,     7,    81,    81,
      48,    44,    44,    48,    49,    64,    64,    44,    48,     7,
      75,    49,    70,    42,    70,     8,     9,    10,    80,    83,
      84,    85,    44,    82,    80,    48,    43,    49,    59,    59,
      67,    48,    48,    29,    30,    58,    46,    43,    64,    43,
      81,    46,    46,    46,    45,    80,    45,    45,    48,    64,
      45,    45,    43,    67,    67,    47,     8,    45,    75,    48,
      70,    48,    43,    83,    84,    85,    48,    45,    48,    48,
      68,    21,    44,    43,    43,    59,    47,    48,    46,    44,
      59,    44,    44,    59,    82,    59,    45,    59,    59,    58,
      45,    45,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    54,
      54,    55,    55,    56,    57,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    62,    62,    62,    63,
      64,    64,    65,    65,    65,    65,    65,    66,    66,    66,
      67,    68,    68,    69,    69,    70,    70,    70,    71,    71,
      72,    73,    74,    74,    75,    75,    76,    76,    76,    77,
      77,    77,    78,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     8,
       7,     3,     1,     2,     7,     5,     3,     2,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     2,    11,    11,    10,     7,
       3,     1,     3,     3,     3,     3,     1,     3,     1,     1,
       4,     5,     0,     5,     3,     3,     5,     0,     1,     1,
       7,    11,     5,     7,     1,     3,     3,     3,     2,     1,
       1,     1,     8,     7,     4,     5,     6,     7,     3,     7,
       7,     3,     7,     1,     1,     1,     3,     3,     1,     1,
       3,     5,     1,     3,     1,     3,     1,     3
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
#line 42 "three.y"
          {printf("\nDONE!\n");}
#line 1454 "y.tab.c"
    break;

  case 3: /* BEGIN: FUNC_DECL BEGIN  */
#line 44 "three.y"
                        {}
#line 1460 "y.tab.c"
    break;

  case 4: /* BEGIN: FUNC_DECL  */
#line 45 "three.y"
                  {}
#line 1466 "y.tab.c"
    break;

  case 9: /* FUNC_DECL: TYPE FUNC '(' PARA_LIST ')' '{' STMT_LIST '}'  */
#line 49 "three.y"
                                                          {(yyval.lexeme)="";}
#line 1472 "y.tab.c"
    break;

  case 18: /* STMT_LIST: STMT  */
#line 63 "three.y"
                 {}
#line 1478 "y.tab.c"
    break;

  case 23: /* STMT: FUNC_CALL  */
#line 69 "three.y"
                 {}
#line 1484 "y.tab.c"
    break;

  case 26: /* STMT: FOR_STMT  */
#line 71 "three.y"
                {}
#line 1490 "y.tab.c"
    break;

  case 30: /* STMT: IF_STMT  */
#line 75 "three.y"
               {printf("\nL%d: \n", label);}
#line 1496 "y.tab.c"
    break;

  case 31: /* STMT: ASSGN ';'  */
#line 76 "three.y"
                 {}
#line 1502 "y.tab.c"
    break;

  case 32: /* STMT: DECL ';'  */
#line 77 "three.y"
                {}
#line 1508 "y.tab.c"
    break;

  case 40: /* EXPR: EXPR COMP_OP TERM  */
#line 88 "three.y"
                         {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;}
#line 1517 "y.tab.c"
    break;

  case 41: /* EXPR: TERM  */
#line 92 "three.y"
            {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1523 "y.tab.c"
    break;

  case 42: /* TERM: TERM '+' TERM  */
#line 94 "three.y"
                     {
                            int a = gencode((yyvsp[-2].lexeme), "+", (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;
                        }
#line 1534 "y.tab.c"
    break;

  case 43: /* TERM: TERM '-' TERM  */
#line 100 "three.y"
                     {
                            int a = gencode((yyvsp[-2].lexeme), "-", (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;
                        }
#line 1545 "y.tab.c"
    break;

  case 44: /* TERM: TERM '*' TERM  */
#line 106 "three.y"
                     {
                            int a = gencode((yyvsp[-2].lexeme), "*", (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;
                        }
#line 1556 "y.tab.c"
    break;

  case 45: /* TERM: TERM '/' TERM  */
#line 112 "three.y"
                     {
                            int a = gencode((yyvsp[-2].lexeme), "/", (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;
                        }
#line 1567 "y.tab.c"
    break;

  case 46: /* TERM: FACTOR  */
#line 118 "three.y"
              {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1573 "y.tab.c"
    break;

  case 47: /* FACTOR: '(' EXPR ')'  */
#line 120 "three.y"
                      {(yyval.lexeme) = (yyvsp[-1].lexeme);}
#line 1579 "y.tab.c"
    break;

  case 48: /* FACTOR: ID  */
#line 121 "three.y"
             {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1585 "y.tab.c"
    break;

  case 49: /* FACTOR: CONST  */
#line 122 "three.y"
                {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1591 "y.tab.c"
    break;

  case 50: /* ASSGN: ID '=' EXPR ASSGN_TAIL  */
#line 124 "three.y"
                               {assignment((yyvsp[-3].lexeme), (yyvsp[-1].lexeme));}
#line 1597 "y.tab.c"
    break;

  case 51: /* ASSGN_TAIL: ',' ID '=' EXPR ASSGN_TAIL  */
#line 125 "three.y"
                                        {assignment((yyvsp[-3].lexeme), (yyvsp[-1].lexeme));}
#line 1603 "y.tab.c"
    break;

  case 52: /* ASSGN_TAIL: %empty  */
#line 125 "three.y"
                                                                {;}
#line 1609 "y.tab.c"
    break;

  case 53: /* DECL: TYPE ID '=' EXPR DECL_TAIL  */
#line 127 "three.y"
                                  {assignment((yyvsp[-3].lexeme),(yyvsp[-1].lexeme));}
#line 1615 "y.tab.c"
    break;

  case 54: /* DECL: TYPE ID DECL_TAIL  */
#line 128 "three.y"
                         {}
#line 1621 "y.tab.c"
    break;

  case 56: /* DECL_TAIL: ',' ID '=' EXPR DECL_TAIL  */
#line 131 "three.y"
                                      {assignment((yyvsp[-3].lexeme), (yyvsp[-1].lexeme));}
#line 1627 "y.tab.c"
    break;

  case 69: /* CONST: INT_CONST  */
#line 149 "three.y"
                  {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1633 "y.tab.c"
    break;

  case 70: /* CONST: FLOAT_CONST  */
#line 150 "three.y"
                    {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1639 "y.tab.c"
    break;

  case 71: /* CONST: CHAR_CONST  */
#line 151 "three.y"
                   {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1645 "y.tab.c"
    break;


#line 1649 "y.tab.c"

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

#line 180 "three.y"


void yyerror()
{
    printTable();
    printf("Syntax Error\n");
    exit(0);
}

int main()
{
    yyin = fopen("input1.txt","r");
    yyparse();
    printTable();
    return 0;
}
