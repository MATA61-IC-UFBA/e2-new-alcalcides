#include <stdio.h>
#include <stdlib.h>
#include "token.h"

/* interface to lexer */

extern char *yytext;
extern int yylex();

int main(int argc, char **argv)
{
    token_t token;

    while ((token = yylex()))
    {
        switch (token)
        {
        case ERROR:
            printf("ERROR %s\n", yytext);
            break;
        case NUMBER:
            printf("constante decimal: %s\n", yytext);
            break;
        case PLUS:
            printf("operador de adição: %s\n", yytext);
            break;
        case MINUS:
            printf("operador de subtração: %s\n", yytext);
            break;
        case TIMES:
            printf("operador de multiplicação: %s\n", yytext);
            break;
        case DIV:
            printf("operador de divisão: %s\n", yytext);
            break;
        }
        printf("código do token: %d\n", token);
    }
}
