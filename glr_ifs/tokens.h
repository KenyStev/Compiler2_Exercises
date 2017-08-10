/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_TOKENS_H_INCLUDED
# define YY_YY_TOKENS_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "expr.y" /* glr.c:197  */

	#include "ast.h"

#line 48 "tokens.h" /* glr.c:197  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OP_ADD = 258,
    OP_SUB = 259,
    OP_MUL = 260,
    OP_DIV = 261,
    OP_ASIGN = 262,
    TK_RIGHT_PAR = 263,
    TK_LEFT_PAR = 264,
    TK_RIGHT_CURLY_BRAKET = 265,
    TK_LEFT_CURLY_BRAKET = 266,
    OP_EQUAL = 267,
    OP_DISTINCT = 268,
    OP_GRATER_EQUAL_THAN = 269,
    OP_LESS_EQUAL_THAN = 270,
    OP_GRATER_THAN = 271,
    OP_LESS_THAN = 272,
    KW_IF = 273,
    KW_ELSE = 274,
    KW_PRINT = 275,
    KW_VARINDEX = 276,
    TK_NUMBER = 277,
    PT_COMMA = 278,
    KW_HEX = 279,
    KW_DEC = 280,
    KW_BIN = 281,
    TK_EOL = 282,
    TK_ERROR = 283
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "expr.y" /* glr.c:197  */

	Statement *statement_t;
	Expr *expr_t;
	char *string_t;
	int int_t;

#line 96 "tokens.h" /* glr.c:197  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOKENS_H_INCLUDED  */
