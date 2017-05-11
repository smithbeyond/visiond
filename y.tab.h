/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_LITERAL = 258,
     DOUBLE_LITERAL = 259,
     STRING_LITERAL = 260,
     REGEXP_LITERAL = 261,
     IDENTIFIER = 262,
     FUNCTION = 263,
     IF = 264,
     ELSE = 265,
     ELSIF = 266,
     WHILE = 267,
     FOR = 268,
     FOREACH = 269,
     RETURN_T = 270,
     BREAK = 271,
     CONTINUE = 272,
     NULL_T = 273,
     LP = 274,
     RP = 275,
     LC = 276,
     RC = 277,
     LB = 278,
     RB = 279,
     SEMICOLON = 280,
     COLON = 281,
     COMMA = 282,
     ASSIGN_T = 283,
     LOGICAL_AND = 284,
     LOGICAL_OR = 285,
     EQ = 286,
     NE = 287,
     GT = 288,
     GE = 289,
     LT = 290,
     LE = 291,
     ADD = 292,
     SUB = 293,
     MUL = 294,
     DIV = 295,
     MOD = 296,
     TRUE_T = 297,
     FALSE_T = 298,
     EXCLAMATION = 299,
     DOT = 300,
     ADD_ASSIGN_T = 301,
     SUB_ASSIGN_T = 302,
     MUL_ASSIGN_T = 303,
     DIV_ASSIGN_T = 304,
     MOD_ASSIGN_T = 305,
     INCREMENT = 306,
     DECREMENT = 307,
     CLOSURE = 308,
     GLOBAL_T = 309,
     TRY = 310,
     CATCH = 311,
     FINALLY = 312,
     THROW = 313,
     FINAL = 314
   };
#endif
/* Tokens.  */
#define INT_LITERAL 258
#define DOUBLE_LITERAL 259
#define STRING_LITERAL 260
#define REGEXP_LITERAL 261
#define IDENTIFIER 262
#define FUNCTION 263
#define IF 264
#define ELSE 265
#define ELSIF 266
#define WHILE 267
#define FOR 268
#define FOREACH 269
#define RETURN_T 270
#define BREAK 271
#define CONTINUE 272
#define NULL_T 273
#define LP 274
#define RP 275
#define LC 276
#define RC 277
#define LB 278
#define RB 279
#define SEMICOLON 280
#define COLON 281
#define COMMA 282
#define ASSIGN_T 283
#define LOGICAL_AND 284
#define LOGICAL_OR 285
#define EQ 286
#define NE 287
#define GT 288
#define GE 289
#define LT 290
#define LE 291
#define ADD 292
#define SUB 293
#define MUL 294
#define DIV 295
#define MOD 296
#define TRUE_T 297
#define FALSE_T 298
#define EXCLAMATION 299
#define DOT 300
#define ADD_ASSIGN_T 301
#define SUB_ASSIGN_T 302
#define MUL_ASSIGN_T 303
#define DIV_ASSIGN_T 304
#define MOD_ASSIGN_T 305
#define INCREMENT 306
#define DECREMENT 307
#define CLOSURE 308
#define GLOBAL_T 309
#define TRY 310
#define CATCH 311
#define FINALLY 312
#define THROW 313
#define FINAL 314




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 6 "crowbar.y"
{
    char                *identifier;
    CRB_ParameterList   *parameter_list;
    ArgumentList        *argument_list;
    Expression          *expression;
    ExpressionList      *expression_list;
    Statement           *statement;
    StatementList       *statement_list;
    CRB_Block           *block;
    Elsif               *elsif;
    AssignmentOperator  assignment_operator;
    IdentifierList      *identifier_list;
}
/* Line 1529 of yacc.c.  */
#line 181 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

