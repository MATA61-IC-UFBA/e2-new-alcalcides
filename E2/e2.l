/* recognize tokens for the calculator */
%option noyywrap nodefault yylineno
%{
#include "token.h"

%}

%%

"//".* { /*pula comentário */ }

[ \n\t\r]+ { /*pula espacejamento */ }

[0-9]* { return NUMBER; }
"+" { return PLUS; }
"-" { return MINUS; }
"*" { return TIMES; }
"/" { return DIV; }

. { return ERROR; }

%%




