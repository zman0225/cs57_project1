/*
FILENAME: main.c
This is c file containing the main function that runs the lexer and all its tests
AUTHORS: Ziyuan Liu, Peter Loomis
Instructions from CS57 2016W and Flex and Bison
*/

#include <stdio.h>
#include "tokens.h"

extern int yylex(void);
extern char **yytext;
extern FILE*   yyin;

int main(int argc, char **argv){
    if (argc<2){
        printf("Need a filename\n");
        return(1);
    }

    if (!(yyin = fopen(argv[1], "r"))){
        perror(argv[1]);
        return(1);
    }

    int tok;
    while((tok = yylex())){
        printf("[%s, %d]", yytext, tok);
    }
}
