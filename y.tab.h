/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    number = 258,
    identifier = 259,
    REAL_POSITIVES = 260,
    ART_OPERATORS = 261,
    RATIONAL_OPERATORS = 262,
    EQUAL_OPERATOR = 263,
    LOGICAL_OPERATORS = 264,
    ACT_OPERATORS = 265,
    ART_NEG = 266,
    BOOLEAN_CONSTANTS = 267,
    DATA_TYPES = 268,
    COLON = 269,
    COMMA = 270,
    LEFT_SQUARE_PAR = 271,
    RIGHT_SQUARE_PAR = 272,
    LEFT_PAR = 273,
    RIGHT_PAR = 274,
    STATIC = 275,
    VOID = 276,
    BEG = 277,
    END = 278,
    ART1_OPERATORS = 279,
    RETURN_KEYWORD = 280,
    IFS = 281,
    EIS = 282,
    ELS = 283,
    WHILE_KWD = 284,
    DO = 285,
    BRK = 286,
    CONT = 287,
    FOR_LOOP = 288,
    CONSTANT_CHARACTERS = 289,
    CONSTANT_STRINGS = 290,
    CLASS = 291,
    PUBLIC = 292,
    PRIVATE = 293,
    NEW = 294,
    DOT = 295,
    MAIN = 296,
    EXCLAMATION_MARK = 297
  };
#endif
/* Tokens.  */
#define number 258
#define identifier 259
#define REAL_POSITIVES 260
#define ART_OPERATORS 261
#define RATIONAL_OPERATORS 262
#define EQUAL_OPERATOR 263
#define LOGICAL_OPERATORS 264
#define ACT_OPERATORS 265
#define ART_NEG 266
#define BOOLEAN_CONSTANTS 267
#define DATA_TYPES 268
#define COLON 269
#define COMMA 270
#define LEFT_SQUARE_PAR 271
#define RIGHT_SQUARE_PAR 272
#define LEFT_PAR 273
#define RIGHT_PAR 274
#define STATIC 275
#define VOID 276
#define BEG 277
#define END 278
#define ART1_OPERATORS 279
#define RETURN_KEYWORD 280
#define IFS 281
#define EIS 282
#define ELS 283
#define WHILE_KWD 284
#define DO 285
#define BRK 286
#define CONT 287
#define FOR_LOOP 288
#define CONSTANT_CHARACTERS 289
#define CONSTANT_STRINGS 290
#define CLASS 291
#define PUBLIC 292
#define PRIVATE 293
#define NEW 294
#define DOT 295
#define MAIN 296
#define EXCLAMATION_MARK 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 20 "calc.y" /* yacc.c:1909  */
int num; char* id; char* art_op; char* ra_op; char* eq_op; char* log_op;
        char* act_op; char* bln_const; float re; char* data_tp; char* cln; char* art1_op;
        char* cm; char* LS; char* RS; char* LP; char* RP; char * stk; char* vd; char* bg;
        char* en; char* rek; char* ifs; char* eis; char* els; char* whl; char* dwhl; 
        char* brk; char* cont; char* art_neg; char* for_loop; char* cnst_strings; char* cnst_char;
        char* class; char* public; char* private; char* new; char* dot; char* main; char* ex_mark;

#line 146 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
