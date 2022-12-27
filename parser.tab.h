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
    CLASS = 259,                   /* CLASS  */
    DEF = 260,                     /* DEF  */
    DEFINED = 261,                 /* DEFINED  */
    DO = 262,                      /* DO  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    ELSIF = 265,                   /* ELSIF  */
    END = 266,                     /* END  */
    FALSE = 267,                   /* FALSE  */
    FOR = 268,                     /* FOR  */
    IN = 269,                      /* IN  */
    NOT = 270,                     /* NOT  */
    OR = 271,                      /* OR  */
    RETURN = 272,                  /* RETURN  */
    SELF = 273,                    /* SELF  */
    THEN = 274,                    /* THEN  */
    TRUE = 275,                    /* TRUE  */
    UNTIL = 276,                   /* UNTIL  */
    WHILE = 277,                   /* WHILE  */
    ARITHMETIC_PLUS_OP = 278,      /* ARITHMETIC_PLUS_OP  */
    ARITHMETIC_MINUS_OP = 279,     /* ARITHMETIC_MINUS_OP  */
    ARITHMETIC_MUL_OP = 280,       /* ARITHMETIC_MUL_OP  */
    ARITHMETIC_DIV_OP = 281,       /* ARITHMETIC_DIV_OP  */
    ARITHMETIC_MOD_OP = 282,       /* ARITHMETIC_MOD_OP  */
    ARITHMETIC_POW_OP = 283,       /* ARITHMETIC_POW_OP  */
    EQL_OP = 284,                  /* EQL_OP  */
    NOT_EQL_OP = 285,              /* NOT_EQL_OP  */
    GREATER_OP = 286,              /* GREATER_OP  */
    LESS_OP = 287,                 /* LESS_OP  */
    GREATER_OR_EQL_OP = 288,       /* GREATER_OR_EQL_OP  */
    LESS_OR_EQL_OP = 289,          /* LESS_OR_EQL_OP  */
    COMB_COMPRASION_OP = 290,      /* COMB_COMPRASION_OP  */
    CASE_EQL_OP = 291,             /* CASE_EQL_OP  */
    ASSIGN_OP = 292,               /* ASSIGN_OP  */
    LOGICAL_AND_OP = 293,          /* LOGICAL_AND_OP  */
    LOGICAL_OR_OP = 294,           /* LOGICAL_OR_OP  */
    LOGICAL_NOT_OP = 295,          /* LOGICAL_NOT_OP  */
    INCLUSIVE_RANGE_OP = 296,      /* INCLUSIVE_RANGE_OP  */
    EXCLUSIVE_RANGE_OP = 297,      /* EXCLUSIVE_RANGE_OP  */
    OPEN_ROUND_BRACKET = 298,      /* OPEN_ROUND_BRACKET  */
    CLOSE_ROUND_BRACKET = 299,     /* CLOSE_ROUND_BRACKET  */
    OPEN_CURLY_BRACKET = 300,      /* OPEN_CURLY_BRACKET  */
    CLOSE_CURLY_BRACKET = 301,     /* CLOSE_CURLY_BRACKET  */
    OPEN_SQUARE_BRACKET = 302,     /* OPEN_SQUARE_BRACKET  */
    CLOSE_SQUARE_BRACKET = 303,    /* CLOSE_SQUARE_BRACKET  */
    DOT_SYMBOL = 304,              /* DOT_SYMBOL  */
    COMMA_SYMBOL = 305,            /* COMMA_SYMBOL  */
    SEMICOLON_SYMBOL = 306,        /* SEMICOLON_SYMBOL  */
    NEW_LINE_SYMBOL = 307,         /* NEW_LINE_SYMBOL  */
    STRING = 308,                  /* STRING  */
    INTEGER_NUMBER = 309,          /* INTEGER_NUMBER  */
    FLOAT_NUMBER = 310,            /* FLOAT_NUMBER  */
    VAR_OR_METHOD_NAME = 311,      /* VAR_OR_METHOD_NAME  */
    INSTANCE_VAR_NAME = 312,       /* INSTANCE_VAR_NAME  */
    CLASS_NAME = 313,              /* CLASS_NAME  */
    CLASS_VAR_NAME = 314,          /* CLASS_VAR_NAME  */
    UNARY_MINUS = 315,             /* UNARY_MINUS  */
    UNARY_PLUS = 316               /* UNARY_PLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "parser.y"

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
    struct method_param_struct* method_param_un;
    struct method_param_list* method_param_list_un;
    struct program_struct * program_un;
    struct program_item_struct * program_item_un;
    struct program_item_list_struct * program_item_list_un;
    struct def_method_stmt_list_struct * def_method_list_un;
    struct def_method_stmt_struct * def_method_un;

#line 148 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
