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

    for(int i = 1; i < argc; i++){
        if (!(yyin = fopen(argv[i], "r"))){
            perror(argv[i]);
            return(1);
        }
        printf("Scanning %s\n", argv[i]);
        int tok;
        while((tok = yylex())){
            if (tok == UNDEF_T) {
                printf("'%s' not defined in language in %s\n", yytext, argv[i]);
                continue;
            }
            printf("[%s, %d]\n", yytext, tok);
        }
        printf("\n\n");
    }

}
