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
    ALIAS = 258,                   /* ALIAS  */
    AND = 259,                     /* AND  */
    BEGIN = 260,                   /* BEGIN  */
    BREAK = 261,                   /* BREAK  */
    CASE = 262,                    /* CASE  */
    CLASS = 263,                   /* CLASS  */
    DEF = 264,                     /* DEF  */
    DEFINED = 265,                 /* DEFINED  */
    DO = 266,                      /* DO  */
    IF = 267,                      /* IF  */
    ELSE = 268,                    /* ELSE  */
    ELSIF = 269,                   /* ELSIF  */
    END = 270,                     /* END  */
    ENSURE = 271,                  /* ENSURE  */
    FALSE = 272,                   /* FALSE  */
    FOR = 273,                     /* FOR  */
    IN = 274,                      /* IN  */
    MODULE = 275,                  /* MODULE  */
    NEXT = 276,                    /* NEXT  */
    NIL = 277,                     /* NIL  */
    NOT = 278,                     /* NOT  */
    OR = 279,                      /* OR  */
    REDO = 280,                    /* REDO  */
    RESCUE = 281,                  /* RESCUE  */
    RETRY = 282,                   /* RETRY  */
    RETURN = 283,                  /* RETURN  */
    SELF = 284,                    /* SELF  */
    SUPER = 285,                   /* SUPER  */
    THEN = 286,                    /* THEN  */
    TRUE = 287,                    /* TRUE  */
    UNDEF = 288,                   /* UNDEF  */
    UNLESS = 289,                  /* UNLESS  */
    UNTIL = 290,                   /* UNTIL  */
    WHEN = 291,                    /* WHEN  */
    WHILE = 292,                   /* WHILE  */
    YIELD = 293,                   /* YIELD  */
    ARITHMETIC_PLUS_OP = 294,      /* ARITHMETIC_PLUS_OP  */
    ARITHMETIC_MINUS_OP = 295,     /* ARITHMETIC_MINUS_OP  */
    ARITHMETIC_MUL_OP = 296,       /* ARITHMETIC_MUL_OP  */
    ARITHMETIC_DIV_OP = 297,       /* ARITHMETIC_DIV_OP  */
    ARITHMETIC_MOD_OP = 298,       /* ARITHMETIC_MOD_OP  */
    ARITHMETIC_POW_OP = 299,       /* ARITHMETIC_POW_OP  */
    EQL_OP = 300,                  /* EQL_OP  */
    NOT_EQL_OP = 301,              /* NOT_EQL_OP  */
    GREATER_OP = 302,              /* GREATER_OP  */
    LESS_OP = 303,                 /* LESS_OP  */
    GREATER_OR_EQL_OP = 304,       /* GREATER_OR_EQL_OP  */
    LESS_OR_EQL_OP = 305,          /* LESS_OR_EQL_OP  */
    COMB_COMPRASION_OP = 306,      /* COMB_COMPRASION_OP  */
    CASE_EQL_OP = 307,             /* CASE_EQL_OP  */
    RECEIVER_EQL_OP = 308,         /* RECEIVER_EQL_OP  */
    OBJ_ID_EQL_OP = 309,           /* OBJ_ID_EQL_OP  */
    ASSIGN_OP = 310,               /* ASSIGN_OP  */
    ADD_ASSIGN_OP = 311,           /* ADD_ASSIGN_OP  */
    SUB_ASSIGN_OP = 312,           /* SUB_ASSIGN_OP  */
    MUL_ASSIGN_OP = 313,           /* MUL_ASSIGN_OP  */
    DIV_ASSIGN_OP = 314,           /* DIV_ASSIGN_OP  */
    MOD_ASSIGN_OP = 315,           /* MOD_ASSIGN_OP  */
    POW_ASSIGN_OP = 316,           /* POW_ASSIGN_OP  */
    LOGICAL_AND_OP = 317,          /* LOGICAL_AND_OP  */
    LOGICAL_OR_OP = 318,           /* LOGICAL_OR_OP  */
    LOGICAL_NOT_OP = 319,          /* LOGICAL_NOT_OP  */
    INCLUSIVE_RANGE_OP = 320,      /* INCLUSIVE_RANGE_OP  */
    EXCLUSIVE_RANGE_OP = 321,      /* EXCLUSIVE_RANGE_OP  */
    OPEN_ROUND_BRACKET = 322,      /* OPEN_ROUND_BRACKET  */
    CLOSE_ROUND_BRACKET = 323,     /* CLOSE_ROUND_BRACKET  */
    OPEN_CURLY_BRACKET = 324,      /* OPEN_CURLY_BRACKET  */
    CLOSE_CURLY_BRACKET = 325,     /* CLOSE_CURLY_BRACKET  */
    OPEN_SQUARE_BRACKET = 326,     /* OPEN_SQUARE_BRACKET  */
    CLOSE_SQUARE_BRACKET = 327,    /* CLOSE_SQUARE_BRACKET  */
    COMMERCIAL_AT = 328,           /* COMMERCIAL_AT  */
    QUESTION_SYMBOL = 329,         /* QUESTION_SYMBOL  */
    DOT_SYMBOL = 330,              /* DOT_SYMBOL  */
    COMMA_SYMBOL = 331,            /* COMMA_SYMBOL  */
    COLON_SYMBOL = 332,            /* COLON_SYMBOL  */
    DOUBLE_COLON_SYMBOL = 333,     /* DOUBLE_COLON_SYMBOL  */
    SEMICOLON_SYMBOL = 334,        /* SEMICOLON_SYMBOL  */
    NEW_LINE_SYMBOL = 335,         /* NEW_LINE_SYMBOL  */
    STRING = 336,                  /* STRING  */
    INTEGER_NUMBER = 337,          /* INTEGER_NUMBER  */
    FLOAT_NUMBER = 338,            /* FLOAT_NUMBER  */
    VAR_OR_METHOD_NAME = 339,      /* VAR_OR_METHOD_NAME  */
    INSTANCE_VAR_NAME = 340,       /* INSTANCE_VAR_NAME  */
    CLASS_VAR_NAME = 341,          /* CLASS_VAR_NAME  */
    CLASS_NAME = 342,              /* CLASS_NAME  */
    UNARY_MINUS = 343,             /* UNARY_MINUS  */
    UNARY_PLUS = 344               /* UNARY_PLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

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

#line 177 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
