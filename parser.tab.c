/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 ".\\parser.y"

#include <stdio.h>
#include <stdbool.h>
#include "tree_nodes.h"
#include "create_tree.c"
#include "print_tree.h"
extern int yylex(void);
struct program_struct * root;


#line 82 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


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
    BEGIN = 259,                   /* BEGIN  */
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
    NIL = 271,                     /* NIL  */
    NOT = 272,                     /* NOT  */
    OR = 273,                      /* OR  */
    RETURN = 274,                  /* RETURN  */
    SELF = 275,                    /* SELF  */
    SUPER = 276,                   /* SUPER  */
    THEN = 277,                    /* THEN  */
    TRUE = 278,                    /* TRUE  */
    UNTIL = 279,                   /* UNTIL  */
    WHILE = 280,                   /* WHILE  */
    ARITHMETIC_PLUS_OP = 281,      /* ARITHMETIC_PLUS_OP  */
    ARITHMETIC_MINUS_OP = 282,     /* ARITHMETIC_MINUS_OP  */
    ARITHMETIC_MUL_OP = 283,       /* ARITHMETIC_MUL_OP  */
    ARITHMETIC_DIV_OP = 284,       /* ARITHMETIC_DIV_OP  */
    ARITHMETIC_MOD_OP = 285,       /* ARITHMETIC_MOD_OP  */
    ARITHMETIC_POW_OP = 286,       /* ARITHMETIC_POW_OP  */
    EQL_OP = 287,                  /* EQL_OP  */
    NOT_EQL_OP = 288,              /* NOT_EQL_OP  */
    GREATER_OP = 289,              /* GREATER_OP  */
    LESS_OP = 290,                 /* LESS_OP  */
    GREATER_OR_EQL_OP = 291,       /* GREATER_OR_EQL_OP  */
    LESS_OR_EQL_OP = 292,          /* LESS_OR_EQL_OP  */
    COMB_COMPRASION_OP = 293,      /* COMB_COMPRASION_OP  */
    CASE_EQL_OP = 294,             /* CASE_EQL_OP  */
    ASSIGN_OP = 295,               /* ASSIGN_OP  */
    LOGICAL_AND_OP = 296,          /* LOGICAL_AND_OP  */
    LOGICAL_OR_OP = 297,           /* LOGICAL_OR_OP  */
    LOGICAL_NOT_OP = 298,          /* LOGICAL_NOT_OP  */
    INCLUSIVE_RANGE_OP = 299,      /* INCLUSIVE_RANGE_OP  */
    EXCLUSIVE_RANGE_OP = 300,      /* EXCLUSIVE_RANGE_OP  */
    OPEN_ROUND_BRACKET = 301,      /* OPEN_ROUND_BRACKET  */
    CLOSE_ROUND_BRACKET = 302,     /* CLOSE_ROUND_BRACKET  */
    OPEN_SQUARE_BRACKET = 303,     /* OPEN_SQUARE_BRACKET  */
    CLOSE_SQUARE_BRACKET = 304,    /* CLOSE_SQUARE_BRACKET  */
    DOT_SYMBOL = 305,              /* DOT_SYMBOL  */
    COMMA_SYMBOL = 306,            /* COMMA_SYMBOL  */
    SEMICOLON_SYMBOL = 307,        /* SEMICOLON_SYMBOL  */
    NEW_LINE_SYMBOL = 308,         /* NEW_LINE_SYMBOL  */
    STRING = 309,                  /* STRING  */
    INTEGER_NUMBER = 310,          /* INTEGER_NUMBER  */
    FLOAT_NUMBER = 311,            /* FLOAT_NUMBER  */
    VAR_OR_METHOD_NAME = 312,      /* VAR_OR_METHOD_NAME  */
    INSTANCE_VAR_NAME = 313,       /* INSTANCE_VAR_NAME  */
    CLASS_NAME = 314,              /* CLASS_NAME  */
    UNARY_MINUS = 315,             /* UNARY_MINUS  */
    UNARY_PLUS = 316               /* UNARY_PLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 ".\\parser.y"

    int int_un;
    float float_un;
    char * string_un;
    char * var_name_un;
    char * instance_var_name_un;
    char * class_name_un;
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

#line 213 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_BEGIN = 4,                      /* BEGIN  */
  YYSYMBOL_CLASS = 5,                      /* CLASS  */
  YYSYMBOL_DEF = 6,                        /* DEF  */
  YYSYMBOL_DEFINED = 7,                    /* DEFINED  */
  YYSYMBOL_DO = 8,                         /* DO  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_ELSIF = 11,                     /* ELSIF  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_FALSE = 13,                     /* FALSE  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_IN = 15,                        /* IN  */
  YYSYMBOL_NIL = 16,                       /* NIL  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_OR = 18,                        /* OR  */
  YYSYMBOL_RETURN = 19,                    /* RETURN  */
  YYSYMBOL_SELF = 20,                      /* SELF  */
  YYSYMBOL_SUPER = 21,                     /* SUPER  */
  YYSYMBOL_THEN = 22,                      /* THEN  */
  YYSYMBOL_TRUE = 23,                      /* TRUE  */
  YYSYMBOL_UNTIL = 24,                     /* UNTIL  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_ARITHMETIC_PLUS_OP = 26,        /* ARITHMETIC_PLUS_OP  */
  YYSYMBOL_ARITHMETIC_MINUS_OP = 27,       /* ARITHMETIC_MINUS_OP  */
  YYSYMBOL_ARITHMETIC_MUL_OP = 28,         /* ARITHMETIC_MUL_OP  */
  YYSYMBOL_ARITHMETIC_DIV_OP = 29,         /* ARITHMETIC_DIV_OP  */
  YYSYMBOL_ARITHMETIC_MOD_OP = 30,         /* ARITHMETIC_MOD_OP  */
  YYSYMBOL_ARITHMETIC_POW_OP = 31,         /* ARITHMETIC_POW_OP  */
  YYSYMBOL_EQL_OP = 32,                    /* EQL_OP  */
  YYSYMBOL_NOT_EQL_OP = 33,                /* NOT_EQL_OP  */
  YYSYMBOL_GREATER_OP = 34,                /* GREATER_OP  */
  YYSYMBOL_LESS_OP = 35,                   /* LESS_OP  */
  YYSYMBOL_GREATER_OR_EQL_OP = 36,         /* GREATER_OR_EQL_OP  */
  YYSYMBOL_LESS_OR_EQL_OP = 37,            /* LESS_OR_EQL_OP  */
  YYSYMBOL_COMB_COMPRASION_OP = 38,        /* COMB_COMPRASION_OP  */
  YYSYMBOL_CASE_EQL_OP = 39,               /* CASE_EQL_OP  */
  YYSYMBOL_ASSIGN_OP = 40,                 /* ASSIGN_OP  */
  YYSYMBOL_LOGICAL_AND_OP = 41,            /* LOGICAL_AND_OP  */
  YYSYMBOL_LOGICAL_OR_OP = 42,             /* LOGICAL_OR_OP  */
  YYSYMBOL_LOGICAL_NOT_OP = 43,            /* LOGICAL_NOT_OP  */
  YYSYMBOL_INCLUSIVE_RANGE_OP = 44,        /* INCLUSIVE_RANGE_OP  */
  YYSYMBOL_EXCLUSIVE_RANGE_OP = 45,        /* EXCLUSIVE_RANGE_OP  */
  YYSYMBOL_OPEN_ROUND_BRACKET = 46,        /* OPEN_ROUND_BRACKET  */
  YYSYMBOL_CLOSE_ROUND_BRACKET = 47,       /* CLOSE_ROUND_BRACKET  */
  YYSYMBOL_OPEN_SQUARE_BRACKET = 48,       /* OPEN_SQUARE_BRACKET  */
  YYSYMBOL_CLOSE_SQUARE_BRACKET = 49,      /* CLOSE_SQUARE_BRACKET  */
  YYSYMBOL_DOT_SYMBOL = 50,                /* DOT_SYMBOL  */
  YYSYMBOL_COMMA_SYMBOL = 51,              /* COMMA_SYMBOL  */
  YYSYMBOL_SEMICOLON_SYMBOL = 52,          /* SEMICOLON_SYMBOL  */
  YYSYMBOL_NEW_LINE_SYMBOL = 53,           /* NEW_LINE_SYMBOL  */
  YYSYMBOL_STRING = 54,                    /* STRING  */
  YYSYMBOL_INTEGER_NUMBER = 55,            /* INTEGER_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 56,              /* FLOAT_NUMBER  */
  YYSYMBOL_VAR_OR_METHOD_NAME = 57,        /* VAR_OR_METHOD_NAME  */
  YYSYMBOL_INSTANCE_VAR_NAME = 58,         /* INSTANCE_VAR_NAME  */
  YYSYMBOL_CLASS_NAME = 59,                /* CLASS_NAME  */
  YYSYMBOL_UNARY_MINUS = 60,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 61,                /* UNARY_PLUS  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_program_item = 64,              /* program_item  */
  YYSYMBOL_program_items_list_not_empty = 65, /* program_items_list_not_empty  */
  YYSYMBOL_program_items_list = 66,        /* program_items_list  */
  YYSYMBOL_expr = 67,                      /* expr  */
  YYSYMBOL_stmt_ends = 68,                 /* stmt_ends  */
  YYSYMBOL_new_lines_op = 69,              /* new_lines_op  */
  YYSYMBOL_new_lines = 70,                 /* new_lines  */
  YYSYMBOL_stmt_ends_op = 71,              /* stmt_ends_op  */
  YYSYMBOL_stmt = 72,                      /* stmt  */
  YYSYMBOL_stmt_list_not_empty = 73,       /* stmt_list_not_empty  */
  YYSYMBOL_stmt_list = 74,                 /* stmt_list  */
  YYSYMBOL_stmt_block = 75,                /* stmt_block  */
  YYSYMBOL_if_start_stmt = 76,             /* if_start_stmt  */
  YYSYMBOL_elsif_stmt = 77,                /* elsif_stmt  */
  YYSYMBOL_elsif_stmt_list = 78,           /* elsif_stmt_list  */
  YYSYMBOL_if_stmt = 79,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 80,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 81,                /* while_stmt  */
  YYSYMBOL_until_stmt = 82,                /* until_stmt  */
  YYSYMBOL_method_param = 83,              /* method_param  */
  YYSYMBOL_method_params_list = 84,        /* method_params_list  */
  YYSYMBOL_method_params_list_not_empty = 85, /* method_params_list_not_empty  */
  YYSYMBOL_def_method_stmt = 86,           /* def_method_stmt  */
  YYSYMBOL_expr_list = 87,                 /* expr_list  */
  YYSYMBOL_expr_list_not_empty = 88,       /* expr_list_not_empty  */
  YYSYMBOL_class_declaration = 89,         /* class_declaration  */
  YYSYMBOL_def_method_list = 90            /* def_method_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1048

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  310

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   146,   146,   149,   150,   151,   154,   155,   158,   159,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   209,   210,   211,   212,   215,
     216,   219,   220,   223,   224,   227,   228,   229,   230,   231,
     232,   233,   234,   237,   238,   241,   242,   245,   248,   249,
     250,   253,   254,   255,   258,   259,   262,   263,   264,   265,
     268,   269,   270,   271,   274,   275,   278,   279,   282,   283,
     286,   287,   290,   291,   294,   295,   298,   299,   302,   303,
     306,   307,   310,   311
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AND", "BEGIN",
  "CLASS", "DEF", "DEFINED", "DO", "IF", "ELSE", "ELSIF", "END", "FALSE",
  "FOR", "IN", "NIL", "NOT", "OR", "RETURN", "SELF", "SUPER", "THEN",
  "TRUE", "UNTIL", "WHILE", "ARITHMETIC_PLUS_OP", "ARITHMETIC_MINUS_OP",
  "ARITHMETIC_MUL_OP", "ARITHMETIC_DIV_OP", "ARITHMETIC_MOD_OP",
  "ARITHMETIC_POW_OP", "EQL_OP", "NOT_EQL_OP", "GREATER_OP", "LESS_OP",
  "GREATER_OR_EQL_OP", "LESS_OR_EQL_OP", "COMB_COMPRASION_OP",
  "CASE_EQL_OP", "ASSIGN_OP", "LOGICAL_AND_OP", "LOGICAL_OR_OP",
  "LOGICAL_NOT_OP", "INCLUSIVE_RANGE_OP", "EXCLUSIVE_RANGE_OP",
  "OPEN_ROUND_BRACKET", "CLOSE_ROUND_BRACKET", "OPEN_SQUARE_BRACKET",
  "CLOSE_SQUARE_BRACKET", "DOT_SYMBOL", "COMMA_SYMBOL", "SEMICOLON_SYMBOL",
  "NEW_LINE_SYMBOL", "STRING", "INTEGER_NUMBER", "FLOAT_NUMBER",
  "VAR_OR_METHOD_NAME", "INSTANCE_VAR_NAME", "CLASS_NAME", "UNARY_MINUS",
  "UNARY_PLUS", "$accept", "program", "program_item",
  "program_items_list_not_empty", "program_items_list", "expr",
  "stmt_ends", "new_lines_op", "new_lines", "stmt_ends_op", "stmt",
  "stmt_list_not_empty", "stmt_list", "stmt_block", "if_start_stmt",
  "elsif_stmt", "elsif_stmt_list", "if_stmt", "for_stmt", "while_stmt",
  "until_stmt", "method_param", "method_params_list",
  "method_params_list_not_empty", "def_method_stmt", "expr_list",
  "expr_list_not_empty", "class_declaration", "def_method_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-107)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     529,   -28,   -49,   -43,   -26,   -26,  -107,   -26,  -107,   -26,
      67,   -13,  -107,  -107,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,  -107,  -107,  -107,    -5,  -107,    39,  -107,   529,  -107,
     254,  -107,   -28,    65,   -28,   -28,   -28,   -28,  -107,  -107,
     -28,   -28,  -107,   593,   -31,   -20,   -26,   435,  -107,   435,
       1,   435,   254,  -107,   -26,   435,   435,   435,   435,   435,
     435,   435,   -26,  -107,  -107,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
    -107,  -107,   -28,   -26,   -28,  -107,    85,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,   593,    44,   -26,    58,     9,   593,
    -107,   948,   803,    52,    63,   948,  -107,    25,   634,   677,
      22,    22,    22,   368,   -26,    34,   -26,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,    29,   593,   435,  -107,   -28,   -28,  -107,  -107,
     -28,    30,  -107,    17,    51,  -107,    45,    47,    87,    -9,
      -7,   593,    78,   -26,   -26,    55,   -28,   593,   -28,   593,
    -107,    56,   -26,    57,   -26,   948,   948,   923,   923,   -12,
     -12,    22,    22,    22,    22,   531,   531,    21,    21,    21,
      21,   531,   531,   883,   595,   998,   973,   973,   368,    59,
      92,   843,   593,  -107,  -107,   -28,   -28,  -107,   435,   -28,
     -26,   -28,    89,  -107,   -28,   435,   435,   435,   593,    95,
     593,   100,  -107,   435,  -107,    70,    69,   435,   -28,    -9,
     593,   104,   117,    58,  -107,   883,   593,     9,  -107,   -28,
     593,   720,   763,    88,   122,   -28,   124,   -28,   368,  -107,
    -107,    91,  -107,   118,  -107,   -28,   -28,    48,   127,  -107,
     593,  -107,   -28,   593,   -28,   593,  -107,   -28,  -107,   -28,
    -107,  -107,  -107,   -28,   593,  -107,   -28,   -28,  -107,   593,
     129,   593,   131,  -107,  -107,   593,  -107,  -107,  -107,   132,
     -28,   133,   -28,  -107,   -28,  -107,   -28,  -107,  -107,  -107
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,    63,     0,     0,    59,    59,    16,    59,    13,    59,
       0,     0,    14,    15,    59,    59,    59,    59,    59,    59,
      59,    12,    10,    11,    49,    50,     0,     6,     9,     2,
       0,     3,    63,     0,    63,    63,    63,    63,     4,     5,
      55,    56,    64,    75,     0,     0,    61,     0,    60,     0,
       0,     0,     0,    72,    59,     0,     0,     0,     0,     0,
     106,   106,    59,     1,     7,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      65,    66,    63,    59,    63,    84,     0,    67,    68,    69,
      70,    57,    58,    73,    76,     0,    59,     0,   100,    75,
      62,    41,    59,     0,     0,    42,    71,     0,     0,     0,
      18,    20,    17,    59,    59,   107,    59,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,    86,    63,    63,    85,    74,
      63,     0,   112,     0,    98,   102,     0,   101,     0,    55,
      56,    75,     0,    59,    59,    53,     0,    75,    63,    75,
     108,     0,    59,     0,    59,    43,    44,    39,    40,    24,
      25,    21,    22,    23,    19,    31,    33,    26,    27,    28,
      29,    30,    32,    38,    34,    35,    36,    37,    59,    51,
       0,    59,    75,    88,    77,     0,     0,   113,     0,    63,
      59,    63,     0,    78,    63,     0,     0,   106,    75,     0,
      75,     0,    45,     0,    47,     0,     0,   106,    63,    55,
      75,     0,     0,     0,   110,    99,    75,     0,   104,    63,
      75,     0,     0,     0,     0,    63,     0,    63,    59,    48,
      46,     0,    87,     0,    81,    63,    63,     0,     0,   103,
      75,    80,    63,    75,    63,    75,    54,    63,    96,    63,
      94,   109,    52,    63,    75,    89,     0,    63,    79,    75,
       0,    75,     0,    97,    95,    75,    82,   111,   105,     0,
      63,     0,    63,    83,    63,    90,    63,    91,    92,    93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,   119,  -107,  -107,   378,   -10,   246,   -37,   -29,
      12,  -107,   -98,  -107,  -107,    50,  -107,  -107,  -107,  -107,
    -107,   -97,  -107,  -107,  -106,   -59,  -107,  -107,   -92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,    28,    29,    30,    42,    47,    48,    43,
     103,   104,   105,    32,    33,    95,    96,    34,    35,    36,
      37,   165,   166,   167,    38,   124,   125,    39,   163
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,   162,   126,    91,   106,    97,    98,    99,   100,   110,
      44,   168,    31,   -59,    45,   -61,    71,    72,    73,    74,
      90,    40,    41,     3,    40,    41,   108,    46,    83,   216,
     101,   102,    40,    41,   107,   109,    88,    54,    89,    63,
      31,    62,   116,    40,   170,    40,   170,    69,    70,    71,
      72,    73,    74,    74,     3,   210,   160,   217,   113,   114,
     286,    83,    83,   153,     3,   155,   164,   173,   184,    88,
      88,    89,    89,   223,     4,    92,    93,    94,   174,   229,
       6,   231,   175,     8,     9,   182,   209,    11,    12,   215,
      13,   218,   219,    16,    17,   156,    93,   157,   220,   221,
     224,   227,   171,   232,   238,   237,   234,   255,   177,   179,
      18,   249,   257,    19,   242,    20,   159,   259,   260,    40,
      41,    21,    22,    23,    24,    25,   265,   212,   213,   266,
     254,   214,   256,   110,   277,   276,   279,   162,   282,   287,
     283,   300,   264,   302,   304,   306,   158,    64,   268,   230,
     269,   267,   271,     0,     0,     0,     0,     0,     0,   101,
     102,   217,     0,     0,     0,     0,   228,     0,   253,     0,
       0,     0,   288,     0,     0,   290,     0,   292,   261,     0,
       0,     0,     0,     0,     0,     0,   296,     0,     0,     0,
     246,   299,   248,   301,     0,   250,     0,   303,     0,     0,
       0,   240,     0,     0,     0,   243,   244,     0,     0,   262,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     270,     0,     0,     0,     0,     0,   278,     0,   280,   101,
       0,     0,     0,     0,     0,     0,   284,   285,     0,     0,
       0,   273,   275,   289,     0,   291,     0,     0,   293,     0,
     294,    49,     0,    50,   295,    51,     0,    65,   298,     0,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,   305,    66,   307,     0,   308,   297,   309,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,    86,    87,
     117,     0,    88,     0,    89,     0,    40,    41,   127,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
     181,    65,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,     0,    52,     0,
       0,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,    86,    87,     0,   222,    88,     0,    89,   225,
     226,    46,     0,     0,     0,   111,     0,   112,   233,   115,
     235,     0,     0,   118,   119,   120,   121,   122,   123,   123,
       0,     0,     4,     0,     0,     0,     0,     0,     6,     0,
       0,     8,     9,     0,   236,    11,    12,   241,    13,     0,
       0,    16,    17,     0,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,    19,     0,    20,     0,   263,     0,     0,     0,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   281,   123,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
       0,     0,   211,     1,     2,     3,     4,     0,     5,     0,
       0,     0,     6,     7,     0,     8,     9,     0,    10,    11,
      12,     0,    13,    14,    15,    16,    17,    69,    70,    71,
      72,    73,    74,   -62,   -62,    77,    78,    79,    80,   -62,
     -62,    83,    18,     0,     0,    19,     0,    20,     0,    88,
       0,    89,     0,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     1,     0,     0,
       4,     0,     5,   251,   252,   123,     6,     7,     0,     8,
       9,   258,    10,    11,    12,   123,    13,    14,    15,    16,
      17,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    18,    65,     0,    19,
       0,    20,   176,    88,     0,    89,     0,    21,    22,    23,
      24,    25,    66,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,    86,    87,
      65,     0,    88,     0,    89,   178,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,    86,    87,    65,     0,    88,     0,    89,   272,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,     0,     0,     0,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     0,    86,    87,    65,     0,    88,     0,
      89,   274,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    65,    86,    87,     0,
       0,    88,     0,    89,     0,    40,    41,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    65,    86,    87,     0,
       0,    88,     0,    89,     0,   169,   170,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    65,    86,    87,     0,
       0,    88,     0,    89,     0,   239,   170,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    65,    86,    87,     0,
       0,    88,     0,    89,     0,     0,     0,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,    86,    87,     0,
       0,    88,     0,    89,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,    86,    87,     0,     0,    88,     0,    89,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,   -62,   -62,     0,
       0,    88,     0,    89,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,     0,    88,     0,    89
};

static const yytype_int16 yycheck[] =
{
      10,   107,    61,    32,    35,    34,    35,    36,    37,    46,
      59,   109,     0,    22,    57,    22,    28,    29,    30,    31,
      30,    52,    53,     6,    52,    53,    46,    53,    40,    12,
      40,    41,    52,    53,    44,    45,    48,    50,    50,     0,
      28,    46,    52,    52,    53,    52,    53,    26,    27,    28,
      29,    30,    31,    31,     6,   153,    12,   163,    57,    58,
      12,    40,    40,    92,     6,    94,    57,    15,   127,    48,
      48,    50,    50,   171,     7,    10,    11,    12,    15,   177,
      13,   179,    57,    16,    17,    51,    57,    20,    21,    59,
      23,    40,    47,    26,    27,    10,    11,    12,    51,    12,
      22,    46,   112,    47,    12,    46,    49,    12,   118,   119,
      43,    22,    12,    46,   212,    48,   104,    47,    49,    52,
      53,    54,    55,    56,    57,    58,    22,   156,   157,    12,
     228,   160,   230,   170,    12,    47,    12,   243,    47,    12,
      22,    12,   240,    12,    12,    12,    96,    28,   246,   178,
     247,   243,   250,    -1,    -1,    -1,    -1,    -1,    -1,   169,
     170,   267,    -1,    -1,    -1,    -1,   176,    -1,   227,    -1,
      -1,    -1,   270,    -1,    -1,   273,    -1,   275,   237,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,
     219,   289,   221,   291,    -1,   224,    -1,   295,    -1,    -1,
      -1,   211,    -1,    -1,    -1,   215,   216,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,   255,    -1,   257,   239,
      -1,    -1,    -1,    -1,    -1,    -1,   265,   266,    -1,    -1,
      -1,   251,   252,   272,    -1,   274,    -1,    -1,   277,    -1,
     279,     5,    -1,     7,   283,     9,    -1,     3,   287,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,   300,    18,   302,    -1,   304,   286,   306,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      54,    -1,    48,    -1,    50,    -1,    52,    53,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,     3,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    10,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    -1,   169,    48,    -1,    50,   173,
     174,    53,    -1,    -1,    -1,    47,    -1,    49,   182,    51,
     184,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,   208,    20,    21,   211,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,   239,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   258,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,   154,     4,     5,     6,     7,    -1,     9,    -1,
      -1,    -1,    13,    14,    -1,    16,    17,    -1,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    43,    -1,    -1,    46,    -1,    48,    -1,    48,
      -1,    50,    -1,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,     4,    -1,    -1,
       7,    -1,     9,   225,   226,   227,    13,    14,    -1,    16,
      17,   233,    19,    20,    21,   237,    23,    24,    25,    26,
      27,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    43,     3,    -1,    46,
      -1,    48,     8,    48,    -1,    50,    -1,    54,    55,    56,
      57,    58,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
       3,    -1,    48,    -1,    50,     8,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,     3,    -1,    48,    -1,    50,     8,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,     3,    -1,    48,    -1,
      50,     8,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,    44,    45,    -1,
      -1,    48,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,    44,    45,    -1,
      -1,    48,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,    44,    45,    -1,
      -1,    48,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,    44,    45,    -1,
      -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    -1,
      -1,    48,    -1,    50,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    -1,    -1,    48,    -1,    50,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    -1,
      -1,    48,    -1,    50,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,     9,    13,    14,    16,    17,
      19,    20,    21,    23,    24,    25,    26,    27,    43,    46,
      48,    54,    55,    56,    57,    58,    63,    64,    65,    66,
      67,    72,    75,    76,    79,    80,    81,    82,    86,    89,
      52,    53,    68,    71,    59,    57,    53,    69,    70,    69,
      69,    69,    67,    68,    50,    69,    69,    69,    69,    69,
      69,    69,    46,     0,    64,     3,    18,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    44,    45,    48,    50,
      68,    71,    10,    11,    12,    77,    78,    71,    71,    71,
      71,    68,    68,    72,    73,    74,    35,    68,    46,    68,
      70,    67,    67,    57,    58,    67,    68,    69,    67,    67,
      67,    67,    67,    67,    87,    88,    87,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    71,    69,    71,    10,    12,    77,    72,
      12,    69,    86,    90,    57,    83,    84,    85,    74,    52,
      53,    68,    69,    15,    15,    57,     8,    68,     8,    68,
      69,    69,    51,    69,    87,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    57,
      74,    67,    71,    71,    71,    59,    12,    86,    40,    47,
      51,    12,    69,    74,    22,    69,    69,    46,    68,    74,
      71,    74,    47,    69,    49,    69,    69,    46,    12,    52,
      68,    69,    74,    68,    68,    67,    71,    69,    71,    22,
      71,    67,    67,    87,    74,    12,    74,    12,    67,    47,
      49,    87,    71,    69,    74,    22,    12,    90,    74,    83,
      71,    74,     8,    68,     8,    68,    47,    12,    71,    12,
      71,    69,    47,    22,    71,    71,    12,    12,    74,    71,
      74,    71,    74,    71,    71,    71,    74,    68,    71,    74,
      12,    74,    12,    74,    12,    71,    12,    71,    71,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    74,    75,    76,    76,
      76,    77,    77,    77,    78,    78,    79,    79,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     3,     4,     4,     5,     6,     5,     6,     1,
       1,     4,     7,     4,     7,     1,     1,     2,     2,     0,
       1,     1,     2,     0,     1,     2,     2,     2,     2,     2,
       2,     3,     2,     1,     2,     0,     1,     5,     5,     8,
       7,     5,     7,     8,     1,     2,     3,     6,     4,     7,
      10,    10,    11,    11,     7,     8,     7,     8,     1,     3,
       0,     1,     1,     4,     6,     9,     0,     1,     2,     5,
       6,     9,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: program_items_list  */
#line 146 ".\\parser.y"
                                                                                           { root=create_program_struct((yyvsp[0].program_item_list_un)); }
#line 1628 "parser.tab.c"
    break;

  case 3: /* program_item: stmt  */
#line 149 ".\\parser.y"
                                                                                           { (yyval.program_item_un)=create_stmt_program_item((yyvsp[0].stmt_un)); }
#line 1634 "parser.tab.c"
    break;

  case 4: /* program_item: def_method_stmt  */
#line 150 ".\\parser.y"
                                                                                           { (yyval.program_item_un)=create_def_method_program_item((yyvsp[0].def_method_un)); }
#line 1640 "parser.tab.c"
    break;

  case 5: /* program_item: class_declaration  */
#line 151 ".\\parser.y"
                                                                                           { (yyval.program_item_un)=(yyvsp[0].program_item_un); }
#line 1646 "parser.tab.c"
    break;

  case 6: /* program_items_list_not_empty: program_item  */
#line 154 ".\\parser.y"
                                                                                           { (yyval.program_item_list_un)=create_program_item_list((yyvsp[0].program_item_un)); }
#line 1652 "parser.tab.c"
    break;

  case 7: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 155 ".\\parser.y"
                                                                                           { (yyval.program_item_list_un)=add_to_program_item_list((yyvsp[-1].program_item_list_un), (yyvsp[0].program_item_un)); }
#line 1658 "parser.tab.c"
    break;

  case 8: /* program_items_list: %empty  */
#line 158 ".\\parser.y"
                                                                                           { (yyval.program_item_list_un)=0; }
#line 1664 "parser.tab.c"
    break;

  case 9: /* program_items_list: program_items_list_not_empty  */
#line 159 ".\\parser.y"
                                                                                           { (yyval.program_item_list_un)=(yyvsp[0].program_item_list_un); }
#line 1670 "parser.tab.c"
    break;

  case 10: /* expr: INTEGER_NUMBER  */
#line 162 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_const_integer_expr(Integer, (yyvsp[0].int_un)); }
#line 1676 "parser.tab.c"
    break;

  case 11: /* expr: FLOAT_NUMBER  */
#line 163 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_const_float_expr((yyvsp[0].float_un));}
#line 1682 "parser.tab.c"
    break;

  case 12: /* expr: STRING  */
#line 164 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_const_string_expr(String, (yyvsp[0].string_un)); }
#line 1688 "parser.tab.c"
    break;

  case 13: /* expr: NIL  */
#line 165 ".\\parser.y"
                                                                                           { }
#line 1694 "parser.tab.c"
    break;

  case 14: /* expr: SUPER  */
#line 166 ".\\parser.y"
                                                                                           { }
#line 1700 "parser.tab.c"
    break;

  case 15: /* expr: TRUE  */
#line 167 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_const_integer_expr(Boolean, 1); }
#line 1706 "parser.tab.c"
    break;

  case 16: /* expr: FALSE  */
#line 168 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_const_integer_expr(Boolean, 0); }
#line 1712 "parser.tab.c"
    break;

  case 17: /* expr: LOGICAL_NOT_OP new_lines_op expr  */
#line 169 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(logical_not, (yyvsp[0].expr_un), 0); }
#line 1718 "parser.tab.c"
    break;

  case 18: /* expr: ARITHMETIC_PLUS_OP new_lines_op expr  */
#line 170 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(unary_plus, (yyvsp[0].expr_un), 0); }
#line 1724 "parser.tab.c"
    break;

  case 19: /* expr: expr ARITHMETIC_POW_OP new_lines_op expr  */
#line 171 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(pow_, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1730 "parser.tab.c"
    break;

  case 20: /* expr: ARITHMETIC_MINUS_OP new_lines_op expr  */
#line 172 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(unary_minus, (yyvsp[0].expr_un), 0); }
#line 1736 "parser.tab.c"
    break;

  case 21: /* expr: expr ARITHMETIC_MUL_OP new_lines_op expr  */
#line 173 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(mul, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1742 "parser.tab.c"
    break;

  case 22: /* expr: expr ARITHMETIC_DIV_OP new_lines_op expr  */
#line 174 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(div_, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1748 "parser.tab.c"
    break;

  case 23: /* expr: expr ARITHMETIC_MOD_OP new_lines_op expr  */
#line 175 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(mod, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1754 "parser.tab.c"
    break;

  case 24: /* expr: expr ARITHMETIC_PLUS_OP new_lines_op expr  */
#line 176 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(plus, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1760 "parser.tab.c"
    break;

  case 25: /* expr: expr ARITHMETIC_MINUS_OP new_lines_op expr  */
#line 177 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(minus, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1766 "parser.tab.c"
    break;

  case 26: /* expr: expr GREATER_OP new_lines_op expr  */
#line 178 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(greater, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1772 "parser.tab.c"
    break;

  case 27: /* expr: expr LESS_OP new_lines_op expr  */
#line 179 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(less, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1778 "parser.tab.c"
    break;

  case 28: /* expr: expr GREATER_OR_EQL_OP new_lines_op expr  */
#line 180 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(greater_eql, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1784 "parser.tab.c"
    break;

  case 29: /* expr: expr LESS_OR_EQL_OP new_lines_op expr  */
#line 181 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(less_eql, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1790 "parser.tab.c"
    break;

  case 30: /* expr: expr COMB_COMPRASION_OP new_lines_op expr  */
#line 182 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(comb_comprassion, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1796 "parser.tab.c"
    break;

  case 31: /* expr: expr EQL_OP new_lines_op expr  */
#line 183 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1802 "parser.tab.c"
    break;

  case 32: /* expr: expr CASE_EQL_OP new_lines_op expr  */
#line 184 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(case_equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1808 "parser.tab.c"
    break;

  case 33: /* expr: expr NOT_EQL_OP new_lines_op expr  */
#line 185 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(not_equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1814 "parser.tab.c"
    break;

  case 34: /* expr: expr LOGICAL_AND_OP new_lines_op expr  */
#line 186 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(logical_and, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1820 "parser.tab.c"
    break;

  case 35: /* expr: expr LOGICAL_OR_OP new_lines_op expr  */
#line 187 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(logical_or, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1826 "parser.tab.c"
    break;

  case 36: /* expr: expr INCLUSIVE_RANGE_OP new_lines_op expr  */
#line 188 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(inclusive_range, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1832 "parser.tab.c"
    break;

  case 37: /* expr: expr EXCLUSIVE_RANGE_OP new_lines_op expr  */
#line 189 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(exclusive_range, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1838 "parser.tab.c"
    break;

  case 38: /* expr: expr ASSIGN_OP new_lines_op expr  */
#line 190 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(assign, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1844 "parser.tab.c"
    break;

  case 39: /* expr: expr UNTIL new_lines_op expr  */
#line 191 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(until_op, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1850 "parser.tab.c"
    break;

  case 40: /* expr: expr WHILE new_lines_op expr  */
#line 192 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(while_op, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1856 "parser.tab.c"
    break;

  case 41: /* expr: DEFINED new_lines_op expr  */
#line 193 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(defined, (yyvsp[0].expr_un), 0); }
#line 1862 "parser.tab.c"
    break;

  case 42: /* expr: NOT new_lines_op expr  */
#line 194 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(not, (yyvsp[0].expr_un), 0); }
#line 1868 "parser.tab.c"
    break;

  case 43: /* expr: expr AND new_lines_op expr  */
#line 195 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(and, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1874 "parser.tab.c"
    break;

  case 44: /* expr: expr OR new_lines_op expr  */
#line 196 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(or, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1880 "parser.tab.c"
    break;

  case 45: /* expr: OPEN_ROUND_BRACKET new_lines_op expr_list new_lines_op CLOSE_ROUND_BRACKET  */
#line 197 ".\\parser.y"
                                                                                           { (yyval.expr_un)=(yyvsp[-2].expr_list_un); }
#line 1886 "parser.tab.c"
    break;

  case 46: /* expr: expr OPEN_SQUARE_BRACKET new_lines_op expr new_lines_op CLOSE_SQUARE_BRACKET  */
#line 198 ".\\parser.y"
                                                                                               { (yyval.expr_un)=create_op_expr(member_access, (yyvsp[-5].expr_un), (yyvsp[-2].expr_un)); }
#line 1892 "parser.tab.c"
    break;

  case 47: /* expr: OPEN_SQUARE_BRACKET new_lines_op expr_list new_lines_op CLOSE_SQUARE_BRACKET  */
#line 199 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_array_struct((yyvsp[-2].expr_list_un)); }
#line 1898 "parser.tab.c"
    break;

  case 48: /* expr: VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET new_lines_op expr_list new_lines_op CLOSE_ROUND_BRACKET  */
#line 200 ".\\parser.y"
                                                                                                        { (yyval.expr_un)=create_method_call_expr((yyvsp[-5].var_name_un), (yyvsp[-2].expr_list_un));}
#line 1904 "parser.tab.c"
    break;

  case 49: /* expr: VAR_OR_METHOD_NAME  */
#line 201 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_const_string_expr(var_or_method, (yyvsp[0].var_name_un)); }
#line 1910 "parser.tab.c"
    break;

  case 50: /* expr: INSTANCE_VAR_NAME  */
#line 202 ".\\parser.y"
                                                                                           { (yyval.expr_un)=create_const_string_expr(instance_var, (yyvsp[0].instance_var_name_un)); }
#line 1916 "parser.tab.c"
    break;

  case 51: /* expr: expr DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME  */
#line 203 ".\\parser.y"
                                                                                                       { (yyval.expr_un)=create_field_call_expr((yyvsp[-3].expr_un), (yyvsp[0].var_name_un)); }
#line 1922 "parser.tab.c"
    break;

  case 52: /* expr: expr DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 204 ".\\parser.y"
                                                                                                        { (yyval.expr_un)=create_object_method_call_expr((yyvsp[-6].expr_un), (yyvsp[-3].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 1928 "parser.tab.c"
    break;

  case 53: /* expr: SELF DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME  */
#line 205 ".\\parser.y"
                                                                                                        { (yyval.expr_un)=create_self_field_call_expr((yyvsp[0].var_name_un)); }
#line 1934 "parser.tab.c"
    break;

  case 54: /* expr: SELF DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 206 ".\\parser.y"
                                                                                                        { (yyval.expr_un)=create_self_method_call_expr((yyvsp[-3].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 1940 "parser.tab.c"
    break;

  case 65: /* stmt: expr stmt_ends  */
#line 227 ".\\parser.y"
                                { (yyval.stmt_un)=create_expr_stmt((yyvsp[-1].expr_un)); }
#line 1946 "parser.tab.c"
    break;

  case 66: /* stmt: stmt_block stmt_ends_op  */
#line 228 ".\\parser.y"
                                { (yyval.stmt_un)=create_block_stmt((yyvsp[-1].block_un)); }
#line 1952 "parser.tab.c"
    break;

  case 67: /* stmt: if_stmt stmt_ends_op  */
#line 229 ".\\parser.y"
                                { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1958 "parser.tab.c"
    break;

  case 68: /* stmt: for_stmt stmt_ends_op  */
#line 230 ".\\parser.y"
                                { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1964 "parser.tab.c"
    break;

  case 69: /* stmt: while_stmt stmt_ends_op  */
#line 231 ".\\parser.y"
                                { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1970 "parser.tab.c"
    break;

  case 70: /* stmt: until_stmt stmt_ends_op  */
#line 232 ".\\parser.y"
                                { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1976 "parser.tab.c"
    break;

  case 71: /* stmt: RETURN expr stmt_ends  */
#line 233 ".\\parser.y"
                                { (yyval.stmt_un)=create_return_stmt((yyvsp[-1].expr_un)); }
#line 1982 "parser.tab.c"
    break;

  case 72: /* stmt: RETURN stmt_ends  */
#line 234 ".\\parser.y"
                                { (yyval.stmt_un)=create_return_stmt(0); }
#line 1988 "parser.tab.c"
    break;

  case 73: /* stmt_list_not_empty: stmt  */
#line 237 ".\\parser.y"
                                                                                                        { (yyval.stmt_list_un)=create_stmt_list((yyvsp[0].stmt_un)); }
#line 1994 "parser.tab.c"
    break;

  case 74: /* stmt_list_not_empty: stmt_list_not_empty stmt  */
#line 238 ".\\parser.y"
                                                                                                        { (yyval.stmt_list_un)=add_to_stmt_list((yyvsp[-1].stmt_list_un), (yyvsp[0].stmt_un)); }
#line 2000 "parser.tab.c"
    break;

  case 75: /* stmt_list: %empty  */
#line 241 ".\\parser.y"
                                                                                                        { (yyval.stmt_list_un)=0; }
#line 2006 "parser.tab.c"
    break;

  case 76: /* stmt_list: stmt_list_not_empty  */
#line 242 ".\\parser.y"
                                                                                                        { (yyval.stmt_list_un)=(yyvsp[0].stmt_list_un); }
#line 2012 "parser.tab.c"
    break;

  case 77: /* stmt_block: BEGIN stmt_ends_op stmt_list END stmt_ends_op  */
#line 245 ".\\parser.y"
                                                                                                        { (yyval.block_un)=create_stmt_block_struct((yyvsp[-2].stmt_list_un)); }
#line 2018 "parser.tab.c"
    break;

  case 78: /* if_start_stmt: IF new_lines_op expr stmt_ends stmt_list  */
#line 248 ".\\parser.y"
                                                                                                                     { (yyval.if_part_un)=create_if_part_struct((yyvsp[-2].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2024 "parser.tab.c"
    break;

  case 79: /* if_start_stmt: IF new_lines_op expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list  */
#line 249 ".\\parser.y"
                                                                                                                     { (yyval.if_part_un)=create_if_part_struct((yyvsp[-5].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2030 "parser.tab.c"
    break;

  case 80: /* if_start_stmt: IF new_lines_op expr new_lines_op THEN stmt_ends_op stmt_list  */
#line 250 ".\\parser.y"
                                                                                                                     { (yyval.if_part_un)=create_if_part_struct((yyvsp[-4].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2036 "parser.tab.c"
    break;

  case 81: /* elsif_stmt: ELSIF new_lines_op expr stmt_ends stmt_list  */
#line 253 ".\\parser.y"
                                                                                                                     { (yyval.if_part_un)=create_if_part_struct((yyvsp[-2].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2042 "parser.tab.c"
    break;

  case 82: /* elsif_stmt: ELSIF new_lines_op expr new_lines_op THEN stmt_ends_op stmt_list  */
#line 254 ".\\parser.y"
                                                                                                                     { (yyval.if_part_un)=create_if_part_struct((yyvsp[-4].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2048 "parser.tab.c"
    break;

  case 83: /* elsif_stmt: ELSIF new_lines_op expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list  */
#line 255 ".\\parser.y"
                                                                                                                     { (yyval.if_part_un)=create_if_part_struct((yyvsp[-5].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2054 "parser.tab.c"
    break;

  case 84: /* elsif_stmt_list: elsif_stmt  */
#line 258 ".\\parser.y"
                                                                                                        { (yyval.elsif_list_un)=create_elsif_stmt_list((yyvsp[0].if_part_un)); }
#line 2060 "parser.tab.c"
    break;

  case 85: /* elsif_stmt_list: elsif_stmt_list elsif_stmt  */
#line 259 ".\\parser.y"
                                                                                                        { (yyval.elsif_list_un)=add_to_elsif_stmt_list((yyvsp[-1].elsif_list_un), (yyvsp[0].if_part_un)); }
#line 2066 "parser.tab.c"
    break;

  case 86: /* if_stmt: if_start_stmt END stmt_ends_op  */
#line 262 ".\\parser.y"
                                                                                                        { (yyval.stmt_un)=create_if_stmt((yyvsp[-2].if_part_un), 0, 0); }
#line 2072 "parser.tab.c"
    break;

  case 87: /* if_stmt: if_start_stmt ELSE stmt_ends_op stmt_list END stmt_ends_op  */
#line 263 ".\\parser.y"
                                                                                                        { (yyval.stmt_un)=create_if_stmt((yyvsp[-5].if_part_un), 0, (yyvsp[-2].stmt_list_un)); }
#line 2078 "parser.tab.c"
    break;

  case 88: /* if_stmt: if_start_stmt elsif_stmt_list END stmt_ends_op  */
#line 264 ".\\parser.y"
                                                                                                        { (yyval.stmt_un)=create_if_stmt((yyvsp[-3].if_part_un), (yyvsp[-2].elsif_list_un), 0); }
#line 2084 "parser.tab.c"
    break;

  case 89: /* if_stmt: if_start_stmt elsif_stmt_list ELSE stmt_ends_op stmt_list END stmt_ends_op  */
#line 265 ".\\parser.y"
                                                                                                        { (yyval.stmt_un)=create_if_stmt((yyvsp[-6].if_part_un), (yyvsp[-5].elsif_list_un), (yyvsp[-2].stmt_list_un)); }
#line 2090 "parser.tab.c"
    break;

  case 90: /* for_stmt: FOR new_lines_op VAR_OR_METHOD_NAME IN new_lines_op expr stmt_ends stmt_list END stmt_ends_op  */
#line 268 ".\\parser.y"
                                                                                                                                  { (yyval.stmt_un)=create_for_stmt((yyvsp[-7].var_name_un), (yyvsp[-4].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2096 "parser.tab.c"
    break;

  case 91: /* for_stmt: FOR new_lines_op INSTANCE_VAR_NAME IN new_lines_op expr stmt_ends stmt_list END stmt_ends_op  */
#line 269 ".\\parser.y"
                                                                                                                                  { (yyval.stmt_un)=create_for_stmt((yyvsp[-7].instance_var_name_un), (yyvsp[-4].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2102 "parser.tab.c"
    break;

  case 92: /* for_stmt: FOR new_lines_op VAR_OR_METHOD_NAME IN new_lines_op expr DO stmt_ends_op stmt_list END stmt_ends_op  */
#line 270 ".\\parser.y"
                                                                                                                                  { (yyval.stmt_un)=create_for_stmt((yyvsp[-8].var_name_un), (yyvsp[-5].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2108 "parser.tab.c"
    break;

  case 93: /* for_stmt: FOR new_lines_op INSTANCE_VAR_NAME IN new_lines_op expr DO stmt_ends_op stmt_list END stmt_ends_op  */
#line 271 ".\\parser.y"
                                                                                                                                  { (yyval.stmt_un)=create_for_stmt((yyvsp[-8].instance_var_name_un), (yyvsp[-5].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2114 "parser.tab.c"
    break;

  case 94: /* while_stmt: WHILE new_lines_op expr stmt_ends stmt_list END stmt_ends_op  */
#line 274 ".\\parser.y"
                                                                                                                     { (yyval.stmt_un)=create_while_stmt((yyvsp[-4].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2120 "parser.tab.c"
    break;

  case 95: /* while_stmt: WHILE new_lines_op expr DO stmt_ends_op stmt_list END stmt_ends_op  */
#line 275 ".\\parser.y"
                                                                                                                     { (yyval.stmt_un)=create_while_stmt((yyvsp[-5].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2126 "parser.tab.c"
    break;

  case 96: /* until_stmt: UNTIL new_lines_op expr stmt_ends stmt_list END stmt_ends_op  */
#line 278 ".\\parser.y"
                                                                                                                     { (yyval.stmt_un)=create_until_stmt((yyvsp[-4].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2132 "parser.tab.c"
    break;

  case 97: /* until_stmt: UNTIL new_lines_op expr DO stmt_ends stmt_list END stmt_ends_op  */
#line 279 ".\\parser.y"
                                                                                                                     { (yyval.stmt_un)=create_until_stmt((yyvsp[-5].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2138 "parser.tab.c"
    break;

  case 98: /* method_param: VAR_OR_METHOD_NAME  */
#line 282 ".\\parser.y"
                                                                                                        { (yyval.method_param_un)=create_method_param_struct((yyvsp[0].var_name_un), 0); }
#line 2144 "parser.tab.c"
    break;

  case 99: /* method_param: VAR_OR_METHOD_NAME ASSIGN_OP expr  */
#line 283 ".\\parser.y"
                                                                                                            { (yyval.method_param_un)=create_method_param_struct((yyvsp[-2].var_name_un), (yyvsp[0].expr_un)); }
#line 2150 "parser.tab.c"
    break;

  case 100: /* method_params_list: %empty  */
#line 286 ".\\parser.y"
                                                                                                        { (yyval.method_param_list_un)=0; }
#line 2156 "parser.tab.c"
    break;

  case 101: /* method_params_list: method_params_list_not_empty  */
#line 287 ".\\parser.y"
                                                                                                            { (yyval.method_param_list_un)=(yyvsp[0].method_param_list_un); }
#line 2162 "parser.tab.c"
    break;

  case 102: /* method_params_list_not_empty: method_param  */
#line 290 ".\\parser.y"
                                                                                                        { (yyval.method_param_list_un)=create_method_param_list((yyvsp[0].method_param_un)); }
#line 2168 "parser.tab.c"
    break;

  case 103: /* method_params_list_not_empty: method_params_list_not_empty COMMA_SYMBOL new_lines_op method_param  */
#line 291 ".\\parser.y"
                                                                                                                         { (yyval.method_param_list_un)=add_to_method_param_list((yyvsp[-3].method_param_list_un), (yyvsp[0].method_param_un)); }
#line 2174 "parser.tab.c"
    break;

  case 104: /* def_method_stmt: DEF VAR_OR_METHOD_NAME stmt_ends stmt_list END stmt_ends_op  */
#line 294 ".\\parser.y"
                                                                                                                                    { (yyval.def_method_un)=create_def_method_struct((yyvsp[-4].var_name_un), 0, (yyvsp[-2].stmt_list_un)); }
#line 2180 "parser.tab.c"
    break;

  case 105: /* def_method_stmt: DEF VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET method_params_list CLOSE_ROUND_BRACKET stmt_ends_op stmt_list END stmt_ends_op  */
#line 295 ".\\parser.y"
                                                                                                                                    { (yyval.def_method_un)=create_def_method_struct((yyvsp[-7].var_name_un), (yyvsp[-5].method_param_list_un), (yyvsp[-2].stmt_list_un)); }
#line 2186 "parser.tab.c"
    break;

  case 106: /* expr_list: %empty  */
#line 298 ".\\parser.y"
                                                                                                        { (yyval.expr_list_un)=0; }
#line 2192 "parser.tab.c"
    break;

  case 107: /* expr_list: expr_list_not_empty  */
#line 299 ".\\parser.y"
                                                                                                            { (yyval.expr_list_un)=(yyvsp[0].expr_list_un); }
#line 2198 "parser.tab.c"
    break;

  case 108: /* expr_list_not_empty: expr new_lines_op  */
#line 302 ".\\parser.y"
                                                                                                        { (yyval.expr_list_un)=create_expr_list((yyvsp[-1].expr_un)); }
#line 2204 "parser.tab.c"
    break;

  case 109: /* expr_list_not_empty: expr_list_not_empty COMMA_SYMBOL new_lines_op expr new_lines_op  */
#line 303 ".\\parser.y"
                                                                                                            { (yyval.expr_list_un)=add_to_expr_list((yyvsp[-4].expr_list_un), (yyvsp[-1].expr_un)); }
#line 2210 "parser.tab.c"
    break;

  case 110: /* class_declaration: CLASS CLASS_NAME stmt_ends def_method_list END stmt_ends  */
#line 306 ".\\parser.y"
                                                                                                        { (yyval.program_item_un)=create_class_declaration_program_item((yyvsp[-4].class_name_un), 0, (yyvsp[-2].def_method_list_un)); }
#line 2216 "parser.tab.c"
    break;

  case 111: /* class_declaration: CLASS CLASS_NAME LESS_OP new_lines_op CLASS_NAME stmt_ends def_method_list END stmt_ends  */
#line 307 ".\\parser.y"
                                                                                                                     { (yyval.program_item_un)=create_class_declaration_program_item((yyvsp[-7].class_name_un), (yyvsp[-4].class_name_un), (yyvsp[-2].def_method_list_un)); }
#line 2222 "parser.tab.c"
    break;

  case 112: /* def_method_list: def_method_stmt  */
#line 310 ".\\parser.y"
                                                                                                        { (yyval.def_method_list_un)=create_def_method_list((yyvsp[0].def_method_un)); }
#line 2228 "parser.tab.c"
    break;

  case 113: /* def_method_list: def_method_list def_method_stmt  */
#line 311 ".\\parser.y"
                                                                                                        { (yyval.def_method_list_un)=add_to_def_method_list((yyvsp[-1].def_method_list_un), (yyvsp[0].def_method_un)); }
#line 2234 "parser.tab.c"
    break;


#line 2238 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 314 ".\\parser.y"
