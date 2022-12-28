/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AND = 258,                     /* AND  */
    BEGIN_KEYWORD = 259,           /* BEGIN_KEYWORD  */
    CLASS = 260,                   /* CLASS  */
    DEF = 261,                     /* DEF  */
    DEFINED = 262,                 /* DEFINED  */
    DO = 263,                      /* DO  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    ELSIF = 266,                   /* ELSIF  */
    END = 267,                     /* END  */
    FALSE = 268,                   /* FALSE  */
    FOR = 269,                     /* FOR  */
    IN = 270,                      /* IN  */
    NOT = 271,                     /* NOT  */
    OR = 272,                      /* OR  */
    RETURN = 273,                  /* RETURN  */
    SELF = 274,                    /* SELF  */
    SUPER = 275,                   /* SUPER  */
    THEN = 276,                    /* THEN  */
    TRUE = 277,                    /* TRUE  */
    UNTIL = 278,                   /* UNTIL  */
    WHILE = 279,                   /* WHILE  */
    ARITHMETIC_PLUS_OP = 280,      /* ARITHMETIC_PLUS_OP  */
    ARITHMETIC_MINUS_OP = 281,     /* ARITHMETIC_MINUS_OP  */
    ARITHMETIC_MUL_OP = 282,       /* ARITHMETIC_MUL_OP  */
    ARITHMETIC_DIV_OP = 283,       /* ARITHMETIC_DIV_OP  */
    ARITHMETIC_MOD_OP = 284,       /* ARITHMETIC_MOD_OP  */
    ARITHMETIC_POW_OP = 285,       /* ARITHMETIC_POW_OP  */
    EQL_OP = 286,                  /* EQL_OP  */
    NOT_EQL_OP = 287,              /* NOT_EQL_OP  */
    GREATER_OP = 288,              /* GREATER_OP  */
    LESS_OP = 289,                 /* LESS_OP  */
    GREATER_OR_EQL_OP = 290,       /* GREATER_OR_EQL_OP  */
    LESS_OR_EQL_OP = 291,          /* LESS_OR_EQL_OP  */
    COMB_COMPRASION_OP = 292,      /* COMB_COMPRASION_OP  */
    CASE_EQL_OP = 293,             /* CASE_EQL_OP  */
    ASSIGN_OP = 294,               /* ASSIGN_OP  */
    LOGICAL_AND_OP = 295,          /* LOGICAL_AND_OP  */
    LOGICAL_OR_OP = 296,           /* LOGICAL_OR_OP  */
    LOGICAL_NOT_OP = 297,          /* LOGICAL_NOT_OP  */
    INCLUSIVE_RANGE_OP = 298,      /* INCLUSIVE_RANGE_OP  */
    EXCLUSIVE_RANGE_OP = 299,      /* EXCLUSIVE_RANGE_OP  */
    OPEN_ROUND_BRACKET = 300,      /* OPEN_ROUND_BRACKET  */
    CLOSE_ROUND_BRACKET = 301,     /* CLOSE_ROUND_BRACKET  */
    OPEN_CURLY_BRACKET = 302,      /* OPEN_CURLY_BRACKET  */
    CLOSE_CURLY_BRACKET = 303,     /* CLOSE_CURLY_BRACKET  */
    OPEN_SQUARE_BRACKET = 304,     /* OPEN_SQUARE_BRACKET  */
    CLOSE_SQUARE_BRACKET = 305,    /* CLOSE_SQUARE_BRACKET  */
    COMMERCIAL_AT = 306,           /* COMMERCIAL_AT  */
    DOT_SYMBOL = 307,              /* DOT_SYMBOL  */
    COMMA_SYMBOL = 308,            /* COMMA_SYMBOL  */
    SEMICOLON_SYMBOL = 309,        /* SEMICOLON_SYMBOL  */
    NEW_LINE_SYMBOL = 310,         /* NEW_LINE_SYMBOL  */
    STR = 311,                     /* STR  */
    INTEGER_NUMBER = 312,          /* INTEGER_NUMBER  */
    FLOAT_NUMBER = 313,            /* FLOAT_NUMBER  */
    VAR_OR_METHOD_NAME = 314,      /* VAR_OR_METHOD_NAME  */
    INSTANCE_VAR_NAME = 315,       /* INSTANCE_VAR_NAME  */
    CLASS_NAME = 316,              /* CLASS_NAME  */
    CLASS_VAR_NAME = 317,          /* CLASS_VAR_NAME  */
    UNARY_MINUS = 318,             /* UNARY_MINUS  */
    UNARY_PLUS = 319               /* UNARY_PLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

    int int_un;
    float float_un;
    char * string_un;
    char * var_name_un;
    char * instance_var_name_un;
    char * class_name_un;
    char * class_var_name_un;
    struct expr_struct * expr_un; 
    struct stmt_struct * stmt_un;
    struct stmt_list_struct * stmt_list_un;
    struct expr_list_struct * expr_list_un;
    struct if_part_stmt_struct * if_part_un;
    struct elsif_stmt_list * elsif_list_un;
    struct stmt_block_struct* block_un;    
    struct method_param_struct* method_param_un;
    struct method_param_list* method_param_list_un;
    struct program_struct * program_un;
    struct program_item_struct * program_item_un;
    struct program_item_list_struct * program_item_list_un;
    struct def_method_stmt_list_struct * def_method_list_un;
    struct def_method_stmt_struct * def_method_un;

#line 152 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
