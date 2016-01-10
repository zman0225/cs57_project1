%{
    #include "tokens.h"
%}

%%
"if"        {return KW_IF_T;}
"else"      {return KW_ELSE_T;}
"while"     {return KW_WHILE_T;}
"return"    {return KW_RETURN_T;}
"for"       {return KW_FOR_T;}
"void"      {return KW_VOID_T;}
"read"      {return KW_READ_T;}
"print"     {return KW_PRINT_T;}
"int"       {return KW_INT_T;}
[1-9][0-9]* {return INT_T;}


[_A-Za-z][A-Za-z0-9_]* {return STD_ID_T;}
[ \t] { }

"<=" {return SYM_LTE_T;}
">=" {return SYM_GTE_T;}
"==" {return SYM_E_T;}
"!=" {return SYM_NE_T;}
"++" {return SYM_INCR_T;}
"--" {return SYM_DECR_T;}
"&&" {return SYM_AND_T;}
"||" {return SYM_OR_T;}

[+\-*<>;,()\[\]{}%!] {return (int)yytext[0]; }

"//" {return CMT_SINGLE_T;}
"/*" {return CMT_START_T;}
"*/" {return CMT_END_T;}
\n {return EOL_T;}
%%
