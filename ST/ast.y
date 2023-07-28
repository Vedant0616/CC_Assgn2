%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    
    #include<string.h>
    #include<ctype.h>
    #include "graph.c"
    extern FILE *yyin;
    int yylex();
    int ex (nodeType *p, int flag);
	/* function prototype to create a node for an operation */ 
	nodeType *opr(int oper, int nops, ...);
	/* function prototype to create a node for an identifier */
	nodeType *id(char *identifier);
	/* function prototype to create a node for a constat */
	nodeType *con(char *value);

%}

%union{
    int ival;
    nodeType *nPtr;
    char string[100];
} 

%left '+' '-'
%left '*' '/'
%token ID INT_CONST FLOAT_CONST CHAR_CONST ARR ARR2 ARR_E FUNC STRING NUL
%token INT FLOAT CHAR VOID IF ELSE WHILE FOR SWITCH CONTINUE BREAK RETURN PRINTF DEFAULT CASE
%token GTR_EQ LESS_EQ NOT_EQ AND OR NOT EQ_EQ
%token NEWLINE UNK END_OF_FILE GLOBAL
%type <nPtr> CONST DECL DECL_TAIL STMT STMT_LIST FUNC_DECL FOR_STMT BEGIN FACTOR TERM EXPR  ASSGN
%type <nPtr> PARA PARA_LIST WHILE_STMT IF_STMT MAT
%token <string> COMP_OP
%type <string> ID INT_CONST FLOAT_CONST CHAR_CONST FUNC
%%

S : BEGIN {printf("\nDONE!\n"); ex($1, 0);}

BEGIN : FUNC_DECL BEGIN {$$ = opr(GLOBAL, 2, $1, $2);}
      | FUNC_DECL {$$ = $1;}

TYPE : INT 
    | FLOAT 
    | CHAR 
    | VOID 

FUNC_DECL : TYPE FUNC '(' PARA_LIST ')' '{' STMT_LIST '}' {$$ = opr(FUNC, 3, id($2), $4, $7);}
          | TYPE FUNC '(' ')' '{' STMT_LIST '}' {$$ = $6;}
          
PARA_LIST : PARA_LIST ',' PARA {$$ = opr(',', 2, $1, $3);}
          | PARA {$$ = $1;}

PARA : TYPE ID {$$ = id($2);}

STMT_LIST : STMT STMT_LIST {$$ = opr(';', 2, $1, $2);}
          | STMT {$$ = $1;}
          | '{' STMT_LIST '}' {$$ = $2;}
          | '{' STMT_LIST '}' STMT_LIST {$$ = opr(";", 2, $2, $4);}

STMT : PRINT 
     | RTRN_STMT 
     | FUNC_CALL 
     | BRK_CNT 
     | ARR_DECL 
     | FOR_STMT {$$ = $1;}
     | WHILE_STMT {$$ = $1;}
     | IF_STMT {$$ = $1;}
     | ASSGN ';' {$$ = $1;}
     | DECL ';' {$$ = $1;}
     | ';' {$$ = opr(NUL, 1, con(INT_MIN));}

BRK_CNT : CONTINUE ';' | BREAK ';'

FOR_STMT : FOR '(' ASSGN ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}' {$$ = opr(FOR, 4, $3, $5, $7, $10);}
         | FOR '(' DECL ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}' {{$$ = opr(FOR, 4, $3, $5, $7, $10);}}
         | FOR '(' ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}' {{$$ = opr(FOR, 3, $4, $6, $9);}}

WHILE_STMT : WHILE '(' EXPR ')' '{' STMT_LIST '}' {$$ = opr(WHILE, 2, $3, $6);}

EXPR : EXPR '<' TERM {$$ = opr('<', 2, $1, $3);}
     | EXPR '>' TERM {$$ = opr('>', 2, $1, $3);}
     | EXPR GTR_EQ TERM {$$ = opr(GTR_EQ, 2, $1, $3);}
     | EXPR LESS_EQ TERM {$$ = opr(LESS_EQ, 2, $1, $3);}
     | EXPR NOT_EQ TERM {$$ = opr(NOT_EQ, 2, $1, $3);}
     | EXPR AND TERM {$$ = opr(AND, 2, $1, $3);}
     | EXPR OR TERM {$$ = opr(OR, 2, $1, $3);}
     | EXPR EQ_EQ TERM {$$ = opr(EQ_EQ, 2, $1, $3);}
     | TERM {$$ = $1;}
     
/* COMP_OP : LESS {$$ = $1;} | GTR {$$ = $1;} | GTR_EQ {$$ = $1;} | LESS_EQ {$$ = $1;} | NOT_EQ {$$ = $1;} | AND {$$ = $1;} | OR {$$ = $1;} | EQ_EQ {$$ = $1;} */

TERM : TERM '+' TERM {$$ = opr('+', 2, $1, $3);}
     | TERM '-' TERM {$$ = opr('-', 2, $1, $3);}
     | TERM '*' TERM {$$ = opr('*', 2, $1, $3);}
     | TERM '/' TERM {$$ = opr('/', 2, $1, $3);}
     | FACTOR {$$ = $1;}

FACTOR : '(' EXPR ')' {$$ = $2;}
        | ID {$$ = id($1);}
        | CONST {$$ = $1;}

ASSGN : ID '=' EXPR ',' ASSGN {$$ = opr(',', 2, opr('=', 2, id($1), $3), $5);}
      | EXPR {$$ = $1;}
      | ID '=' EXPR {$$ = opr('=', 2, id($1), $3);}
      | EXPR ',' ASSGN {$$ = opr(',', 2, $1, $3);}

DECL : TYPE DECL_TAIL {$$ = $2;}
                         
DECL_TAIL : ID '=' EXPR {$$ = opr('=', 2, id($1), $3);}
          | ID '=' EXPR ',' DECL_TAIL {$$ = opr(',',2,opr('=', 2, id($1), $3),$5);} 
          | ID {$$ = id($1);}
          | ID ',' DECL_TAIL {$$ = opr(',', 2, id($1), $3);}


IF_STMT : IF '(' EXPR ')' '{' STMT_LIST '}' {$$ = opr(IF, 2, $3, $6);}
        | IF '(' EXPR ')' '{' STMT_LIST '}' ELSE '{' STMT_LIST '}' {$$ = opr(IF, 3, $3, $6, opr(ELSE, 1, $10));}

PRINT : PRINTF '(' STRING ')' ';'
      | PRINTF '(' STRING ',' VAR_LIST ')' ';'

VAR_LIST : ID 
         | ID ',' VAR_LIST

RTRN_STMT : RETURN ID ';'
       | RETURN CONST ';'
       | RETURN ';'

CONST : INT_CONST {$$ = con($1);}
      | FLOAT_CONST {$$ = con($1);}
      | CHAR_CONST {$$ = con($1);}

FUNC_CALL : TYPE ID '=' FUNC '(' MIXED_LIST ')' ';'
          | TYPE ID '=' FUNC '(' ')' ';'
          | FUNC '(' ')' ';'
          | FUNC '(' MIXED_LIST ')' ';'
          | ID '=' FUNC '(' ')' ';'
          | ID '=' FUNC '(' MIXED_LIST ')' ';'

ARR_DECL : TYPE ARR ';'
         | TYPE ARR '=' '{' CONST_LIST '}' ';'
         | TYPE ARR_E '=' '{' CONST_LIST '}' ';'
         | TYPE ARR2 ';'
         | TYPE ARR2 '=' '{' CONST_LIST2 '}' ';'

CONST_LIST : INT_LIST | FLOAT_LIST | CHAR_LIST

MIXED_LIST : ID ',' MIXED_LIST | CONST ',' MIXED_LIST | ID | CONST

CONST_LIST2 : '{' CONST_LIST '}'
            | '{' CONST_LIST '}' ',' CONST_LIST2

INT_LIST : INT_CONST 
         | INT_CONST ',' INT_LIST

FLOAT_LIST : FLOAT_CONST | FLOAT_CONST ',' FLOAT_LIST

CHAR_LIST : CHAR_CONST | CHAR_CONST ',' CHAR_LIST

%%

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
    return 0;
}

nodeType *con(char *value)
{
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeCon;
	strcpy(p->con.value, value);
    printf("The copied value %s\n", p->con.value);
	return p;
}
nodeType *id(char *identifier) {
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeId;
	strcpy(p->id.name,identifier);
//	printf("The copied identifier %s\n", p->id.name);
	return p;
}

nodeType *opr(int oper, int nops, ...)
{
	va_list ap;
	nodeType *p;
	int i;
	/* allocate node, extending op array */
	if ((p = malloc(sizeof(nodeType) +(nops-1) * sizeof(nodeType *))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeOpr;
	p->opr.oper = oper;
	p->opr.nops = nops;
	va_start(ap, nops);
	for (i = 0; i < nops; i++)
		p->opr.op[i] = va_arg(ap, nodeType*);
	va_end(ap);
	return p;
}