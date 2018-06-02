%{
void yyerror (char *s);
#include <stdio.h>     /*-- C declarations used in actions --*/
#include <stdlib.h>
#include <string.h>

char* s1;
int ff=0;

extern int yylineno;

extern int exists_while;
extern int return_keyword;
extern int main_declaration;

%}

/* ----------------------------------------Yacc definitions---------------------------------------------------- */

%union {int num; char* id; char* art_op; char* ra_op; char* eq_op; char* log_op;
        char* act_op; char* bln_const; float re; char* data_tp; char* cln; char* art1_op;
        char* cm; char* LS; char* RS; char* LP; char* RP; char * stk; char* vd; char* bg;
        char* en; char* rek; char* ifs; char* eis; char* els; char* whl; char* dwhl; 
        char* brk; char* cont; char* art_neg; char* for_loop; char* cnst_strings; char* cnst_char;
        char* class; char* public; char* private; char* new; char* dot; char* main; char* ex_mark;}

%start line
%token <num> number
%token identifier
%token REAL_POSITIVES
%token ART_OPERATORS
%token RATIONAL_OPERATORS
%token EQUAL_OPERATOR
%token LOGICAL_OPERATORS
%token ACT_OPERATORS
%token ART_NEG
%token BOOLEAN_CONSTANTS
%token DATA_TYPES
%token COLON
%token COMMA
%token LEFT_SQUARE_PAR
%token RIGHT_SQUARE_PAR
%token LEFT_PAR
%token RIGHT_PAR
%token STATIC
%token VOID
%token BEG
%token END
%token ART1_OPERATORS
%token RETURN_KEYWORD
%token IFS
%token EIS
%token ELS
%token WHILE_KWD
%token DO
%token BRK
%token CONT
%token FOR_LOOP
%token CONSTANT_CHARACTERS
%token CONSTANT_STRINGS
%token CLASS
%token PUBLIC
%token PRIVATE
%token NEW
%token DOT
%token MAIN
%token EXCLAMATION_MARK

%type <num> line

%%

/*-- descriptions of expected inputs --- corresponding actions (in C) --*/

line    : if_statement               {;} 
        | while_statement            {;} 
        | do_while_statement         {;} 
        | for_loop_statement         {;}
        | classes                    {;}
        | CONSTANT_CHARACTERS        {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}  
        | CONSTANT_STRINGS           {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}  
        | functions                  {;}
        | variables COLON            {;} 
        | calculations COLON         {;}
        | variables                  {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}   
        | calculations               {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}  
        | line classes               {;}
        | line if_statement          {;}
        | line while_statement       {;} 
        | line do_while_statement    {;} 
        | line for_loop_statement    {;}
        | line CONSTANT_CHARACTERS   {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}
        | line CONSTANT_STRINGS      {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}  
        | line functions             {;}
        | line variables COLON       {;}
        | line calculations COLON    {;}
        | line variables             {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}   
        | line calculations          {printf("\nMissing Quote or Function/Variable Assignment In Line:%d\n", yylineno); return;}  
        ;
/*--------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------Classes----------------------------------------------------*/

classes : CLASS identifier BEG class_body {;}
        ;

class_body : public_or_private variables COLON class_body {;}
           | class_functions {;}
           ;

class_functions : public_or_private func_or_funz END{;}
                | public_or_private func_or_funz class_functions {;}
                ;

func_or_funz : functions {;}
             | funz {;}
             ;

funz    : identifier LEFT_PAR RIGHT_PAR BEG BODY {;}
        | identifier LEFT_PAR func_ids RIGHT_PAR BEG BODY {;}
        ;

public_or_private : PUBLIC {;}
                  | PRIVATE {;}
                  ;
/*--------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------Functions----------------------------------------------------*/

functions   : declaration identifier LEFT_PAR RIGHT_PAR BEG BODY {if(return_keyword<1){printf("\nMissing Return Value");
                                                                  printf("\nIn Line: %d\n", yylineno); return;}
                                                                  else {return_keyword=0;}}
            | declaration identifier LEFT_PAR func_ids RIGHT_PAR BEG BODY {if(return_keyword<1){printf("\nMissing Return Value");
                                                                           printf("\nIn Line: %d\n", yylineno); return;}
                                                                           else {return_keyword=0;}}
            | void_func identifier LEFT_PAR RIGHT_PAR BEG BODY {if(return_keyword>0){printf("\nA Void Function Cannot Return Value ");
                                                                printf("\nIn Line: %d\n", yylineno); return;}
                                                                else {return_keyword=0;}}
            | void_func identifier LEFT_PAR func_ids RIGHT_PAR BEG BODY {if(return_keyword>0){printf("\nA Void Function Cannot Return Value ");
                                                                         printf("\nIn Line: %d\n", yylineno); return;}
                                                                         else {return_keyword=0;}}
            | void_func MAIN LEFT_PAR RIGHT_PAR BEG MAIN_BODY {if(main_declaration>1){printf("\nMain Function Cannot Be Redeclared ");
                                                               printf("\nIn Line: %d\n", yylineno); return;}}
            ;

void_func : VOID {;}
          | STATIC VOID {;}
          ;

func_ids    : declaration identifier {;}
            | declaration identifier COMMA func_ids {;}
            | declaration identifier mtrx {;}
            | declaration identifier mtrx COMMA func_ids {;}
            ;


MAIN_BODY   : func_stmts END  {;}
            | func_stmts MAIN_BODY {;}
            | functions MAIN_BODY  {;}
            | functions END   {;}       
            ;

BODY        : func_stmts END  {;}
            | func_stmts BODY {;}
            | functions       {printf("\nCannot Declare Function Inside Another Function ");
                               printf("In Line: %d\n", yylineno); return;}
            ;

func_stmts : variables COLON{;}
           | calculations COLON{;}
           | if_statement {;}
           | while_statement {;}
           | do_while_statement {;}
           | for_loop_statement {;}
           | func_return {;}
           ;

func_return  : RETURN_KEYWORD one_or_more COLON{;}
             | RETURN_KEYWORD identifier EQUAL_OPERATOR one_or_more COLON{;}
             | RETURN_KEYWORD boolean_calc COLON{;}
             | RETURN_KEYWORD CONSTANT_CHARACTERS COLON{;}
             | RETURN_KEYWORD CONSTANT_STRINGS COLON{;} 
             ;
/*--------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------------------Statements-----------------------------------------------------*/

for_loop_statement : FOR_LOOP LEFT_PAR for_loop_body COLON for_loop_body COLON calculations RIGHT_PAR structure{exists_while=exists_while-1;}
                   | FOR_LOOP LEFT_PAR for_loop_body COLON calculations RIGHT_PAR structure{exists_while=exists_while-1;}
                   ;

for_loop_body : identifier RATIONAL_OPERATORS one_or_more {;}
              | calculations {;}
              ;

do_while_statement : DO structure WHILE_KWD if_par COLON {exists_while=exists_while-2;}
                   ;

while_statement    : WHILE_KWD if_par structure {exists_while=exists_while-1;}
                   ;

if_statement : IFS if_par structure {;}
             | IFS if_par structure ELS structure {;}
             | IFS if_par structure EIS long_or_short{;}
             | IFS if_par structure EIS long_or_short ELS structure {;}  
             ;


structure   : if_body_short {;}
            | BEG if_body END{;}
            | BEG BRK COLON END {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
            | BEG BRK COLON if_body END  {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
            | BEG CONT COLON END {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
            | BEG CONT COLON if_body END {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
            ; 

long_or_short : stmt {;}
              | if_par BEG multiple_else_if {;}
              ;

stmt : if_par if_body_short {;}
     | if_par if_body_short EIS stmt{;}
     | if_par if_body_short EIS if_par BEG multiple_else_if{;}
     ;

multiple_else_if  : if_body END {;}
                  | if_body END EIS if_par BEG multiple_else_if {;}
                  | if_body END EIS stmt {;}
                  ;

if_body_short : variables COLON {;}
              | calculations COLON {;}
              | func_return {;}
              
              | if_statement {;}
              | while_statement     {;}
              | do_while_statement  {;} 
              | for_loop_statement  {;} 

              | BRK COLON  {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
              | CONT COLON {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}            
              ;

if_body    : possible_stmts {;}
           | possible_stmts if_body {;}
           | possible_stmts BRK COLON {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
           | possible_stmts BRK COLON if_body {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
           | possible_stmts CONT COLON  {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
           | possible_stmts CONT COLON if_body {if (exists_while<1){printf("\nInvalid Keyword 'Break/Continue'\nNon While/Do_While or For_Loop Statement Found\n");
                                 printf("Error in Line: %d\n\n", yylineno); return;}}
           ;

possible_stmts : variables COLON     {;}
               | calculations COLON  {;}
               | func_return         {;}
               | if_statement        {;} 
               | while_statement     {;}
               | do_while_statement  {;} 
               | for_loop_statement  {;} 
               ;

if_par     : LEFT_PAR boolean_if_par RIGHT_PAR {;}
           | LEFT_PAR if_statement RIGHT_PAR {;} 
           ;  
/*--------------------------------------------------------------------------------------------------------------*/

/*------------------------------------------------Operations----------------------------------------------------*/

calculations : identifier single_calc {;}
             | identifier mtrx single_calc{;}
             | call_function {;} /*-- Call Function --*/
             | identifier EQUAL_OPERATOR NEW call_function {;}
             ;

call_function  : identifier LEFT_PAR func_arguments RIGHT_PAR {;}/*-- Function Calling --*/
               | identifier LEFT_PAR RIGHT_PAR {;}
               ;

func_arguments : one_or_more {;}/*-- Function's Arguments --*/
               | one_or_more COMMA func_arguments {;}
               | CONSTANT_CHARACTERS COMMA func_arguments {;}
               | CONSTANT_STRINGS COMMA func_arguments {;}
               | CONSTANT_CHARACTERS {;}
               | CONSTANT_STRINGS {;}
               ;

single_calc  : EQUAL_OPERATOR one_or_more {;}
             | EQUAL_OPERATOR boolean_calc {;} 
             | EQUAL_OPERATOR CONSTANT_CHARACTERS {;}
             | EQUAL_OPERATOR CONSTANT_STRINGS {;} 
             | ART1_OPERATORS {;}
             | ACT_OPERATORS one_or_more {;}
             ;

one_or_more  : to_calc_with operators one_or_more {;}
             | to_calc_with {;}
             ;

signed_value : ART_NEG number {;}
             | ART_NEG REAL_POSITIVES {;}
             | ART_NEG identifier {;}
             | ART_NEG identifier DOT identifier {;}
             | ART_NEG identifier DOT call_function {;}
             | ART_NEG calc_par {;}
             ;

variables_with_art1 : identifier ART1_OPERATORS{;}   
                    | ART_NEG identifier ART1_OPERATORS{;}
                    | identifier DOT identifier ART1_OPERATORS{;}
                    | identifier DOT call_function ART1_OPERATORS{;}
                    | identifier mtrx ART1_OPERATORS{;}
                    | call_function ART1_OPERATORS{;}
                    | calc_par ART1_OPERATORS{;}
                    ;

to_calc_with : number {;}
             | REAL_POSITIVES {;}
             | identifier {;}
             | signed_value {;}
             | calc_par {;}
             | identifier DOT identifier {;}
             | identifier DOT call_function {;}
             | variables_with_art1 {;}
             | identifier mtrx {;}
             | call_function  {;}/*-- Call Function --*/
             ;

calc_par    : LEFT_PAR one_or_more RIGHT_PAR {;}
            ;   
/*--------------------------------------------------------------------------------------------------------------*/

/*------------------------------------------------BOOLEAN STATEMENTS--------------------------------------------*/

with_exclamation : boolean_exp {;}
                 | EXCLAMATION_MARK boolean_exp {;}
                 ;

boolean_exp : one_or_more {;}
            | BOOLEAN_CONSTANTS {;}/*-- TRUE/FALSE --*/
            ;

boolean_for_if : with_exclamation RATIONAL_OPERATORS with_exclamation {;}
               ;

boolean_if_par : inner_boolean LOGICAL_OPERATORS boolean_if_par {;}
               | inner_boolean {;}
               ;

inner_boolean : boolean_for_if {;} 
              | with_exclamation {;}//exei shift_reduce
              | boolean_par {;}
              ;

boolean_par : LEFT_PAR boolean_if_par RIGHT_PAR {;} 
            ;

/*-- Boolean Calculations --*/

boolean_calc : more_logical LOGICAL_OPERATORS boolean_calc {;}
             | more_logical {;}
             ;

more_logical : boolean_for_if {;}    
             | more_par {;}   
             | BOOLEAN_CONSTANTS {;}/*-- TRUE/FALSE --*/
             ;

more_par    : LEFT_PAR boolean_calc RIGHT_PAR {;} 
            ;
/*--------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------Variables Declaration----------------------------------------------*/

variables   : declaration multiple {;}
            | identifier more_class_copies {;}/*Class Declaration*/
			;

more_class_copies : identifier {;}
                  | identifier COMMA more_class_copies {;}
                  ;

declaration : DATA_TYPES {;}
            | STATIC DATA_TYPES {;}
            ;

multiple : identifier {;}
         | identifier COMMA multiple {;}
         | identifier EQUAL_OPERATOR one_or_more COMMA multiple {;}

         | identifier EQUAL_OPERATOR CONSTANT_CHARACTERS COMMA multiple {;}
         | identifier EQUAL_OPERATOR CONSTANT_CHARACTERS {;}

         | identifier EQUAL_OPERATOR CONSTANT_STRINGS COMMA multiple {;}
         | identifier EQUAL_OPERATOR CONSTANT_STRINGS {;} 

         | identifier EQUAL_OPERATOR boolean_calc COMMA multiple {;}
         | identifier EQUAL_OPERATOR boolean_calc {;}

         | identifier mtrx {;}
         | identifier mtrx COMMA multiple {;}
         | identifier EQUAL_OPERATOR one_or_more {;}
         ;

mtrx     : LEFT_SQUARE_PAR no RIGHT_SQUARE_PAR {;}
         | LEFT_SQUARE_PAR no RIGHT_SQUARE_PAR mtrx {;}
         | LEFT_SQUARE_PAR no with_id RIGHT_SQUARE_PAR {;}
         | LEFT_SQUARE_PAR no with_id RIGHT_SQUARE_PAR mtrx {;}
         ;

no       : number {;}
         | identifier {;}
         | par {;}
         | identifier DOT identifier {;}
         | identifier DOT call_function {;}
         | call_function {;}
         ; 

par     : LEFT_PAR no RIGHT_PAR {;}/*-- Paragraph with positive integer value --*/
        | LEFT_PAR no with_id RIGHT_PAR {;}
        ;

with_id  : Mtrx_size_values {;}
         | Mtrx_size_values with_id{;}
         ; 

Mtrx_size_values  : operators number {;}
                  | operators identifier {;}
                  | operators identifier mtrx {;}
                  | operators par {;}
                  | operators identifier DOT identifier {;}
                  | operators identifier DOT call_function {;}
                  | operators call_function {;}/*-- Call Function --*/
                  ; 

/*---------------No, Par and With_id are for creating the size of the matrix that should be an integer----------*/

operators  : ART_OPERATORS {;}/*-- '*' and '/'  --*/
           | ART_NEG {;}
           ;
/*--------------------------------------------------------------------------------------------------------------*/

%%                     /* ----- C code ----- */

int main (void) {

if (yyparse() == 0){
    if (main_declaration==0)
    {
         printf("\n------------ Rejected! -------------------------------------------\n");
         printf("----- Main Function Does Not Exist -------------------------------\n\n");
    }
    else
    {
        printf("\n----- Accepted! --------------------------------------------------\n\n");
    }
    }
else {
    printf("\n----- Rejected! --------------------------------------------------\n\n");
    }

}

void yyerror (char *s) {printf("Parse Error in Line: %d\n", yylineno); return;} 


