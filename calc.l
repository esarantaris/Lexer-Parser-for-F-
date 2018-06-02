%{
#include <stdlib.h> /* C declarations used in actions */
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

int exists_while=0; 
int return_keyword=0;
int main_declaration=0;

%}

BDIGIT[1-9]
DIGIT[0-9]
CHARACTER[e]
CALC[+,-]
CONST["!"-"~"] 

%option yylineno
%option case-insensitive
%x incl

%%

"/*"((\*+[^/*])|([^*]))*\**"*/"  {printf("Token_Multiple_Comments... \n");}
"\//"(.)*""			    {printf("Token Line_Comments... \n");}

"'"{CONST}?"'"	  {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}
"'"[a-zA-Z]?"'"   {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}
"'"{DIGIT}?"'"    {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}

"'\\n'"			  {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}
"'\\t'"			  {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}
"'\\r'"	          {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}
"'\\\\'"		  {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}
"'\\''"			  {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}
"'\\\"'"		  {yylval.cnst_char=yytext;  printf("Token CONSTANT_CHARACTER: %s\n", yytext);  return CONSTANT_CHARACTERS;}


"\""([a-zA-Z]*{CONST}*{DIGIT}*"\\n"*"\\t"*"\\r"*"\\\\"*"\\'"*"\\\""*[\r\t\f\v ]*[^\n]?)*"\""   {yylval.cnst_strings=yytext;  
                                       printf("Token_Constant_String: %s\n", yytext);    return CONSTANT_STRINGS;}

{BDIGIT}+{DIGIT}*"."+{DIGIT}+{CHARACTER}?{DIGIT}*({CALC}{BDIGIT}+{DIGIT}*)?   {yylval.re = atof(yytext); 
                                                                               printf("Token Real_Positive: %s\n", yytext); 
                                                                               return REAL_POSITIVES;}     

0"."+{DIGIT}+{CHARACTER}?{DIGIT}*({CALC}{BDIGIT}+{DIGIT}*)?   {yylval.re = atof(yytext); 
                                                               printf("Token Real_Positive: %s\n", yytext);  
                                                               return REAL_POSITIVES;}

";"				        {yylval.cln=yytext;  printf("Token Colon: %s\n", yytext);  return COLON;}
","				        {yylval.cm= yytext;  printf("Token Comma: %s\n", yytext);  return COMMA;}
"."                     {yylval.dot= yytext;  printf("Token Dot: %s\n", yytext);  return DOT;}

"["                     {yylval.LS=yytext;  printf("Token Left_Matrix_Parenthesis: %s\n", yytext);  return LEFT_SQUARE_PAR;}
"]"                     {yylval.RS=yytext;  printf("Token Right_Matrix_Parenthesis: %s\n", yytext);  return RIGHT_SQUARE_PAR;}

"("                     {yylval.LP=yytext;  printf("Token Left_Parenthesis: %s\n", yytext);  return LEFT_PAR;}
")"                     {yylval.RP=yytext;  printf("Token Right_Parenthesis: %s\n", yytext);  return RIGHT_PAR;}

"+"				        {yylval.art_neg=yytext;  printf("Token Art/Pos_Operator: %s\n", yytext);  return ART_NEG;}
"-"				        {yylval.art_neg=yytext;  printf("Token Art/Neg_Operator: %s\n", yytext);  return ART_NEG;}
"*"				        {yylval.art_op=yytext;  printf("Token Art_Operator: %s\n", yytext);  return ART_OPERATORS;}
"/"				        {yylval.art_op=yytext;  printf("Token Art_Operator: %s\n", yytext);  return ART_OPERATORS;}
"%"				        {yylval.art_op=yytext;  printf("Token Art_Operator: %s\n", yytext);  return ART_OPERATORS;}

"%="			        {yylval.art1_op=yytext;  printf("Token Art_Operator: %s\n", yytext);  return ART1_OPERATORS;}
"++"		            {yylval.art1_op=yytext;  printf("Token Double_Art_Operator: %s\n", yytext);  return ART1_OPERATORS;}
"--"		    	    {yylval.art1_op=yytext;  printf("Token Double_Minus_Operator: %s\n", yytext);  return ART1_OPERATORS;}

">="		            {yylval.ra_op=yytext;  printf("Token Rational_Operator: %s\n", yytext);  return RATIONAL_OPERATORS;}
"<="		            {yylval.ra_op=yytext;  printf("Token Rational_Operator: %s\n", yytext);  return RATIONAL_OPERATORS;}
"="				        {yylval.ra_op=yytext;  printf("Token Rational_Operator: %s\n", yytext);  return RATIONAL_OPERATORS;}
">"				        {yylval.ra_op=yytext;  printf("Token Rational_Operator: %s\n", yytext);  return RATIONAL_OPERATORS;}
"<"				        {yylval.ra_op=yytext;  printf("Token Rational_Operator: %s\n", yytext);  return RATIONAL_OPERATORS;}
"!="		            {yylval.ra_op=yytext;  printf("Token Rational_Operator: %s\n", yytext);  return RATIONAL_OPERATORS;}

":="				    {yylval.eq_op=yytext;  printf("Token Equal_Operator: %s\n", yytext);  return EQUAL_OPERATOR;}

"&&"				    {yylval.log_op=yytext;  printf("Token Logical_Operator: %s\n", yytext);  return LOGICAL_OPERATORS;}
"||"				    {yylval.log_op=yytext;  printf("Token Logical_Operator: %s\n", yytext);  return LOGICAL_OPERATORS;}
"!"				        {yylval.ex_mark=yytext;  printf("Token Exclamation Mark: %s\n", yytext);  return EXCLAMATION_MARK;}

":+="				    {yylval.act_op=yytext;  printf("Token Action_Operator: %s\n", yytext);  return ACT_OPERATORS;}
":-="				    {yylval.act_op=yytext;  printf("Token Action_Operator: %s\n", yytext);  return ACT_OPERATORS;}
":*="				    {yylval.act_op=yytext;  printf("Token Action_Operator: %s\n", yytext);  return ACT_OPERATORS;}
":/="				    {yylval.act_op=yytext;  printf("Token Action_Operator: %s\n", yytext);  return ACT_OPERATORS;}
":%="				    {yylval.act_op=yytext;  printf("Token Action_Operator: %s\n", yytext);  return ACT_OPERATORS;}

"true" 				    {yylval.bln_const = yytext;  printf("Token Boolean_Constant: %s\n", yytext);  return BOOLEAN_CONSTANTS;}
"false" 			    {yylval.bln_const = yytext;  printf("Token Boolean_Constant: %s\n", yytext);  return BOOLEAN_CONSTANTS;}

"int" 				    {yylval.data_tp = yytext;  printf("Token Data_Type: %s\n", yytext);  return DATA_TYPES;}
"boolean" 			    {yylval.data_tp = yytext;  printf("Token Data_Type: %s\n", yytext);  return DATA_TYPES;}
"char" 				    {yylval.data_tp = yytext;  printf("Token Data_Type: %s\n", yytext);  return DATA_TYPES;}
"string" 			    {yylval.data_tp = yytext;  printf("Token Data_Type: %s\n", yytext);  return DATA_TYPES;}
"float" 			    {yylval.data_tp = yytext;  printf("Token Data_Type: %s\n", yytext);  return DATA_TYPES;}
"double" 			    {yylval.data_tp = yytext;  printf("Token Data_Type: %s\n", yytext);  return DATA_TYPES;}

"static" 			    {yylval.stk = yytext;  printf("Token Static_Declaration: %s\n", yytext);  return STATIC;}

"void" 				    {yylval.vd = yytext;  printf("Token Void_Declaration: %s\n", yytext);  return VOID;}

"begin" 			    {yylval.bg = yytext;  printf("Token Begin_Keyword: %s\n", yytext);  return BEG;}
"end" 				    {yylval.en = yytext;  printf("Token End_Keyword: %s\n", yytext);  return END;}
"return" 			    {yylval.rek = yytext;  printf("Token Return_Keyword: %s\n", yytext); return_keyword=1; return RETURN_KEYWORD;}

"if" 			        {yylval.ifs = yytext;  printf("Token If_Keyword: %s\n", yytext);  return IFS;}
"else if" 			    {yylval.eis = yytext;  printf("Token Else_If_Keyword: %s\n", yytext);  return EIS;}
"else" 			        {yylval.els = yytext;  printf("Token Else_Keyword: %s\n", yytext);  return ELS;}

"while" 			    {yylval.whl = yytext;  printf("Token While_Keyword: %s\n", yytext); exists_while=exists_while+1; return WHILE_KWD;}
"do" 				    {yylval.dwhl = yytext;  printf("Token Do_Keyword: %s\n", yytext); exists_while=exists_while+1; return DO;}

"break" 			    {yylval.brk = yytext;  printf("Token Break_Keyword: %s\n", yytext);  return BRK;}
"continue" 			    {yylval.cont = yytext;  printf("Token Continue_Keyword: %s\n", yytext);  return CONT;}

"for" 				    {yylval.for_loop = yytext;  printf("Token Continue_Keyword: %s\n", yytext); exists_while=exists_while+1; return FOR_LOOP;}

"class"                 {yylval.class = yytext;  printf("Token Class_Keyword: %s\n", yytext);  return CLASS;}

"public" 			    {yylval.public = yytext;  printf("Token Public_Keyword: %s\n", yytext);  return PUBLIC;}
"private" 			    {yylval.private = yytext;  printf("Token Private_Keyword: %s\n", yytext);  return PRIVATE;}

"new" 				    {yylval.new = yytext;  printf("Token New_Keyword: %s\n", yytext);  return NEW;}
"main" 				    {yylval.main = yytext;  printf("Token New_Keyword: %s\n", yytext); main_declaration=main_declaration+1; return MAIN;}

[a-zA-Z][_a-zA-Z0-9]*   {yylval.id = yytext;  printf("Token Identifier: %s\n", yytext);  return identifier;}
[0-9]+                  {yylval.num = atoi(yytext);  printf("Token Integer: %d\n", atoi(yytext));  return number;}

[\n\r\t\f\v ]+          {/*Do Nothing*/ ;}


"#include"              BEGIN(incl);

<incl>[^ \t\n]+ { 
    yyin = fopen( yytext, "r" );
    if ( ! yyin )
    printf("hhhh");
    yypush_buffer_state(yy_create_buffer( yyin, YY_BUF_SIZE ));
    BEGIN(INITIAL);
}

<<EOF>> {
    yypop_buffer_state();   
    if ( !YY_CURRENT_BUFFER )
    {
        yyterminate();
    }
}

.                      {ECHO; printf ("\nUnexpected Character '%s' in Line %d \n", yytext, yylineno);
                        return 1;}

%%
int yywrap (void) {return 1;}