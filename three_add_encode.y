%{
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
%}

%union{
    char* lexeme;
} 

%left '+' '-'
%left '*' '/'
%token <lexeme> ID INT_CONST FLOAT_CONST CHAR_CONST ARR ARR2 ARR_E FUNC STRING
%token <lexeme> INT FLOAT CHAR VOID IF ELSE WHILE FOR SWITCH CONTINUE BREAK RETURN PRINTF DEFAULT CASE
%token <lexeme> GTR_EQ LESS_EQ NOT_EQ AND OR NOT EQ_EQ
%token <lexeme> NEWLINE UNK END_OF_FILE COMP_OP
%type <lexeme> EXPR FACTOR TERM CONST FUNC_DECL TYPE
%%

S : BEGIN {printf("\nDONE!\n");}

BEGIN : FUNC_DECL BEGIN {}
      | FUNC_DECL {}

TYPE : INT | FLOAT | CHAR | VOID

FUNC_DECL : TYPE FUNC '(' PARA_LIST ')' '{' STMT_LIST '}' 
          | TYPE FUNC '(' ')' '{' STMT_LIST '}'
          
PARA_LIST : PARA_LIST ',' PARA
          | PARA

PARA : TYPE ID

STMT_LIST : STMT STMT_LIST 
          | STMT 
          | '{' STMT_LIST '}' 
          | '{' STMT_LIST '}' STMT_LIST

STMT : PRINT | RTRN_STMT | FUNC_CALL | BRK_CNT | ARR_DECL | FOR_STMT 
     | EXPR 
     | WHILE_STMT 
     | IF_STMT {printf("\nL%d: \n", label);} 
     | ASSGN ';' | DECL ';' | ';'

BRK_CNT : CONTINUE ';' | BREAK ';'

FOR_STMT : FOR '(' ASSGN ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}'
         | FOR '(' DECL ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}'
         | FOR '(' ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}'

WHILE_STMT : WHILE '(' EXPR ')' '{' STMT_LIST '}'

EXPR : EXPR COMP_OP TERM {int a = gencode($1, $2, $3);
                            char* tempVar = genTempVariable(a);
                            $$ = tempVar;
                            tempVariable++;}
     | TERM {$$ = $1;}

TERM : TERM '+' TERM {
                            int a = gencode($1, "+", $3);
                            char* tempVar = genTempVariable(a);
                            $$ = tempVar;
                            tempVariable++;
                        }
     | TERM '-' TERM {
                            int a = gencode($1, "-", $3);
                            char* tempVar = genTempVariable(a);
                            $$ = tempVar;
                            tempVariable++;
                        }
     | TERM '*' TERM {
                            int a = gencode($1, "*", $3);
                            char* tempVar = genTempVariable(a);
                            $$ = tempVar;
                            tempVariable++;
                        }
     | TERM '/' TERM {
                            int a = gencode($1, "/", $3);
                            char* tempVar = genTempVariable(a);
                            $$ = tempVar;
                            tempVariable++;
                        }
     | FACTOR {$$ = $1;}

FACTOR : '(' EXPR ')' {$$ = $2;} 
        | ID {$$ = $1;}
        | CONST {$$ = $1;}

ASSGN : ID '=' EXPR ASSGN_TAIL
ASSGN_TAIL : ',' ID '=' EXPR ASSGN_TAIL |

DECL : TYPE ID '=' EXPR DECL_TAIL {assignment($2,$4);}
     | TYPE ID DECL_TAIL {}
                         
DECL_TAIL : ',' ID DECL_TAIL 
          | ',' ID '=' EXPR DECL_TAIL 
          |
IF_STMT : MAT | UNMAT

MAT : IF '(' EXPR ')' '{' STMT_LIST '}'

UNMAT : IF '(' EXPR ')' '{' STMT_LIST '}' ELSE '{' STMT_LIST '}'

PRINT : PRINTF '(' STRING ')' ';'
      | PRINTF '(' STRING ',' VAR_LIST ')' ';'

VAR_LIST : ID 
         | ID ',' VAR_LIST

RTRN_STMT : RETURN ID ';'
       | RETURN CONST ';'
       | RETURN ';'

CONST : INT_CONST {$$ = $1;}
      | FLOAT_CONST {$$ = $1;}
      | CHAR_CONST {$$ = $1;}

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

INT_LIST : INT_CONST {}
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
    yyin = fopen("input.txt","r");
    yyparse();
    printTable();
    return 0;
}