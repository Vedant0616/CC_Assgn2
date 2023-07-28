/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 150 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
