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
#line 1 "parser.y"

#include <stdio.h>
#include <stdbool.h>
#include "tree_nodes.h"
#include "create_tree.c"
#include "print_tree.h"

extern int yylex(void);

struct program_struct * root;


#line 84 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ALIAS = 3,                      /* ALIAS  */
  YYSYMBOL_AND = 4,                        /* AND  */
  YYSYMBOL_BEGIN = 5,                      /* BEGIN  */
  YYSYMBOL_BREAK = 6,                      /* BREAK  */
  YYSYMBOL_CASE = 7,                       /* CASE  */
  YYSYMBOL_CLASS = 8,                      /* CLASS  */
  YYSYMBOL_DEF = 9,                        /* DEF  */
  YYSYMBOL_DEFINED = 10,                   /* DEFINED  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_ELSIF = 14,                     /* ELSIF  */
  YYSYMBOL_END = 15,                       /* END  */
  YYSYMBOL_ENSURE = 16,                    /* ENSURE  */
  YYSYMBOL_FALSE = 17,                     /* FALSE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_IN = 19,                        /* IN  */
  YYSYMBOL_MODULE = 20,                    /* MODULE  */
  YYSYMBOL_NEXT = 21,                      /* NEXT  */
  YYSYMBOL_NIL = 22,                       /* NIL  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_REDO = 25,                      /* REDO  */
  YYSYMBOL_RESCUE = 26,                    /* RESCUE  */
  YYSYMBOL_RETRY = 27,                     /* RETRY  */
  YYSYMBOL_RETURN = 28,                    /* RETURN  */
  YYSYMBOL_SELF = 29,                      /* SELF  */
  YYSYMBOL_SUPER = 30,                     /* SUPER  */
  YYSYMBOL_THEN = 31,                      /* THEN  */
  YYSYMBOL_TRUE = 32,                      /* TRUE  */
  YYSYMBOL_UNDEF = 33,                     /* UNDEF  */
  YYSYMBOL_UNLESS = 34,                    /* UNLESS  */
  YYSYMBOL_UNTIL = 35,                     /* UNTIL  */
  YYSYMBOL_WHEN = 36,                      /* WHEN  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_YIELD = 38,                     /* YIELD  */
  YYSYMBOL_ARITHMETIC_PLUS_OP = 39,        /* ARITHMETIC_PLUS_OP  */
  YYSYMBOL_ARITHMETIC_MINUS_OP = 40,       /* ARITHMETIC_MINUS_OP  */
  YYSYMBOL_ARITHMETIC_MUL_OP = 41,         /* ARITHMETIC_MUL_OP  */
  YYSYMBOL_ARITHMETIC_DIV_OP = 42,         /* ARITHMETIC_DIV_OP  */
  YYSYMBOL_ARITHMETIC_MOD_OP = 43,         /* ARITHMETIC_MOD_OP  */
  YYSYMBOL_ARITHMETIC_POW_OP = 44,         /* ARITHMETIC_POW_OP  */
  YYSYMBOL_EQL_OP = 45,                    /* EQL_OP  */
  YYSYMBOL_NOT_EQL_OP = 46,                /* NOT_EQL_OP  */
  YYSYMBOL_GREATER_OP = 47,                /* GREATER_OP  */
  YYSYMBOL_LESS_OP = 48,                   /* LESS_OP  */
  YYSYMBOL_GREATER_OR_EQL_OP = 49,         /* GREATER_OR_EQL_OP  */
  YYSYMBOL_LESS_OR_EQL_OP = 50,            /* LESS_OR_EQL_OP  */
  YYSYMBOL_COMB_COMPRASION_OP = 51,        /* COMB_COMPRASION_OP  */
  YYSYMBOL_CASE_EQL_OP = 52,               /* CASE_EQL_OP  */
  YYSYMBOL_RECEIVER_EQL_OP = 53,           /* RECEIVER_EQL_OP  */
  YYSYMBOL_OBJ_ID_EQL_OP = 54,             /* OBJ_ID_EQL_OP  */
  YYSYMBOL_ASSIGN_OP = 55,                 /* ASSIGN_OP  */
  YYSYMBOL_ADD_ASSIGN_OP = 56,             /* ADD_ASSIGN_OP  */
  YYSYMBOL_SUB_ASSIGN_OP = 57,             /* SUB_ASSIGN_OP  */
  YYSYMBOL_MUL_ASSIGN_OP = 58,             /* MUL_ASSIGN_OP  */
  YYSYMBOL_DIV_ASSIGN_OP = 59,             /* DIV_ASSIGN_OP  */
  YYSYMBOL_MOD_ASSIGN_OP = 60,             /* MOD_ASSIGN_OP  */
  YYSYMBOL_POW_ASSIGN_OP = 61,             /* POW_ASSIGN_OP  */
  YYSYMBOL_LOGICAL_AND_OP = 62,            /* LOGICAL_AND_OP  */
  YYSYMBOL_LOGICAL_OR_OP = 63,             /* LOGICAL_OR_OP  */
  YYSYMBOL_LOGICAL_NOT_OP = 64,            /* LOGICAL_NOT_OP  */
  YYSYMBOL_INCLUSIVE_RANGE_OP = 65,        /* INCLUSIVE_RANGE_OP  */
  YYSYMBOL_EXCLUSIVE_RANGE_OP = 66,        /* EXCLUSIVE_RANGE_OP  */
  YYSYMBOL_OPEN_ROUND_BRACKET = 67,        /* OPEN_ROUND_BRACKET  */
  YYSYMBOL_CLOSE_ROUND_BRACKET = 68,       /* CLOSE_ROUND_BRACKET  */
  YYSYMBOL_OPEN_CURLY_BRACKET = 69,        /* OPEN_CURLY_BRACKET  */
  YYSYMBOL_CLOSE_CURLY_BRACKET = 70,       /* CLOSE_CURLY_BRACKET  */
  YYSYMBOL_OPEN_SQUARE_BRACKET = 71,       /* OPEN_SQUARE_BRACKET  */
  YYSYMBOL_CLOSE_SQUARE_BRACKET = 72,      /* CLOSE_SQUARE_BRACKET  */
  YYSYMBOL_COMMERCIAL_AT = 73,             /* COMMERCIAL_AT  */
  YYSYMBOL_QUESTION_SYMBOL = 74,           /* QUESTION_SYMBOL  */
  YYSYMBOL_DOT_SYMBOL = 75,                /* DOT_SYMBOL  */
  YYSYMBOL_COMMA_SYMBOL = 76,              /* COMMA_SYMBOL  */
  YYSYMBOL_COLON_SYMBOL = 77,              /* COLON_SYMBOL  */
  YYSYMBOL_DOUBLE_COLON_SYMBOL = 78,       /* DOUBLE_COLON_SYMBOL  */
  YYSYMBOL_SEMICOLON_SYMBOL = 79,          /* SEMICOLON_SYMBOL  */
  YYSYMBOL_NEW_LINE_SYMBOL = 80,           /* NEW_LINE_SYMBOL  */
  YYSYMBOL_STRING = 81,                    /* STRING  */
  YYSYMBOL_INTEGER_NUMBER = 82,            /* INTEGER_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 83,              /* FLOAT_NUMBER  */
  YYSYMBOL_VAR_OR_METHOD_NAME = 84,        /* VAR_OR_METHOD_NAME  */
  YYSYMBOL_INSTANCE_VAR_NAME = 85,         /* INSTANCE_VAR_NAME  */
  YYSYMBOL_CLASS_VAR_NAME = 86,            /* CLASS_VAR_NAME  */
  YYSYMBOL_CLASS_NAME = 87,                /* CLASS_NAME  */
  YYSYMBOL_UNARY_MINUS = 88,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 89,                /* UNARY_PLUS  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_program = 91,                   /* program  */
  YYSYMBOL_program_item = 92,              /* program_item  */
  YYSYMBOL_program_items_list_not_empty = 93, /* program_items_list_not_empty  */
  YYSYMBOL_program_items_list = 94,        /* program_items_list  */
  YYSYMBOL_expr = 95,                      /* expr  */
  YYSYMBOL_stmt_ends = 96,                 /* stmt_ends  */
  YYSYMBOL_new_lines_op = 97,              /* new_lines_op  */
  YYSYMBOL_new_lines = 98,                 /* new_lines  */
  YYSYMBOL_stmt_ends_op = 99,              /* stmt_ends_op  */
  YYSYMBOL_stmt = 100,                     /* stmt  */
  YYSYMBOL_stmt_list_not_empty = 101,      /* stmt_list_not_empty  */
  YYSYMBOL_stmt_list = 102,                /* stmt_list  */
  YYSYMBOL_stmt_block = 103,               /* stmt_block  */
  YYSYMBOL_if_start_stmt = 104,            /* if_start_stmt  */
  YYSYMBOL_elsif_stmt = 105,               /* elsif_stmt  */
  YYSYMBOL_elsif_stmt_list = 106,          /* elsif_stmt_list  */
  YYSYMBOL_if_stmt = 107,                  /* if_stmt  */
  YYSYMBOL_for_stmt = 108,                 /* for_stmt  */
  YYSYMBOL_while_stmt = 109,               /* while_stmt  */
  YYSYMBOL_until_stmt = 110,               /* until_stmt  */
  YYSYMBOL_method_param = 111,             /* method_param  */
  YYSYMBOL_method_params_list = 112,       /* method_params_list  */
  YYSYMBOL_method_params_list_not_empty = 113, /* method_params_list_not_empty  */
  YYSYMBOL_def_method_stmt = 114,          /* def_method_stmt  */
  YYSYMBOL_expr_list = 115,                /* expr_list  */
  YYSYMBOL_expr_list_not_empty = 116,      /* expr_list_not_empty  */
  YYSYMBOL_class_declaration = 117,        /* class_declaration  */
  YYSYMBOL_def_method_list = 118           /* def_method_list  */
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
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   344


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   178,   178,   181,   182,   183,   186,   187,   190,   191,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   241,   242,   243,   244,   247,
     248,   251,   252,   255,   256,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   274,   275,
     278,   279,   282,   285,   286,   287,   290,   291,   292,   295,
     296,   299,   300,   301,   302,   305,   306,   307,   308,   311,
     312,   315,   316,   319,   320,   323,   324,   327,   328,   331,
     332,   335,   336,   339,   340,   343,   344,   347,   348
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
  "\"end of file\"", "error", "\"invalid token\"", "ALIAS", "AND",
  "BEGIN", "BREAK", "CASE", "CLASS", "DEF", "DEFINED", "DO", "IF", "ELSE",
  "ELSIF", "END", "ENSURE", "FALSE", "FOR", "IN", "MODULE", "NEXT", "NIL",
  "NOT", "OR", "REDO", "RESCUE", "RETRY", "RETURN", "SELF", "SUPER",
  "THEN", "TRUE", "UNDEF", "UNLESS", "UNTIL", "WHEN", "WHILE", "YIELD",
  "ARITHMETIC_PLUS_OP", "ARITHMETIC_MINUS_OP", "ARITHMETIC_MUL_OP",
  "ARITHMETIC_DIV_OP", "ARITHMETIC_MOD_OP", "ARITHMETIC_POW_OP", "EQL_OP",
  "NOT_EQL_OP", "GREATER_OP", "LESS_OP", "GREATER_OR_EQL_OP",
  "LESS_OR_EQL_OP", "COMB_COMPRASION_OP", "CASE_EQL_OP", "RECEIVER_EQL_OP",
  "OBJ_ID_EQL_OP", "ASSIGN_OP", "ADD_ASSIGN_OP", "SUB_ASSIGN_OP",
  "MUL_ASSIGN_OP", "DIV_ASSIGN_OP", "MOD_ASSIGN_OP", "POW_ASSIGN_OP",
  "LOGICAL_AND_OP", "LOGICAL_OR_OP", "LOGICAL_NOT_OP",
  "INCLUSIVE_RANGE_OP", "EXCLUSIVE_RANGE_OP", "OPEN_ROUND_BRACKET",
  "CLOSE_ROUND_BRACKET", "OPEN_CURLY_BRACKET", "CLOSE_CURLY_BRACKET",
  "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "COMMERCIAL_AT",
  "QUESTION_SYMBOL", "DOT_SYMBOL", "COMMA_SYMBOL", "COLON_SYMBOL",
  "DOUBLE_COLON_SYMBOL", "SEMICOLON_SYMBOL", "NEW_LINE_SYMBOL", "STRING",
  "INTEGER_NUMBER", "FLOAT_NUMBER", "VAR_OR_METHOD_NAME",
  "INSTANCE_VAR_NAME", "CLASS_VAR_NAME", "CLASS_NAME", "UNARY_MINUS",
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

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     259,   -61,   -77,   -63,   763,   763,  -103,    21,  -103,   763,
     737,   -46,  -103,  -103,   763,   763,   763,   763,   763,   763,
     -41,  -103,  -103,  -103,   -24,  -103,    54,  -103,   259,  -103,
     543,  -103,   -61,    86,   -61,   -61,   -61,   -61,  -103,  -103,
     -61,   -61,  -103,   285,   -31,   -29,   954,   592,    28,    42,
     954,   543,  -103,     7,   347,   396,   -12,   -12,   -12,   690,
      29,    13,   -41,   763,  -103,   -41,  -103,  -103,   763,   763,
     763,   763,   763,   763,   763,   763,   763,   763,   763,   763,
     763,   763,   763,   763,   763,   763,   763,   763,   763,   763,
     763,   763,    11,  -103,  -103,   -61,   763,   -61,  -103,   115,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,   285,    87,    20,
     100,    26,   285,   -27,   -22,   285,    82,   763,   763,  -103,
      49,   -61,   285,   -61,   285,  -103,  -103,   -41,  -103,    45,
     763,   954,   954,   917,   917,    78,    78,   -12,   -12,   -12,
     -12,  1065,  1065,    92,    92,    92,    92,  1065,  1065,   954,
    1079,  1028,   991,   991,   819,    56,   285,   641,  -103,   -61,
     -61,  -103,  -103,   -61,   -61,  -103,    27,    70,  -103,    58,
      63,   125,   110,  -103,   -61,   445,   494,   763,   285,   127,
     285,   128,   763,  -103,    76,  -103,   763,   135,   -27,   285,
     120,   285,  -103,  -103,   100,   -61,  -103,   763,   -61,    26,
     -61,   -61,   285,   -61,   285,   -61,   285,    84,   141,   -61,
     143,   -61,   690,  -103,    91,   -61,   131,  -103,   -61,   153,
      47,  -103,   868,   285,  -103,  -103,   285,  -103,   285,   155,
     285,   156,  -103,   -61,  -103,   -61,  -103,  -103,  -103,  -103,
     -61,   285,   -61,   -61,   157,  -103,   158,   -61,   161,   -61,
    -103,  -103,   285,  -103,  -103,  -103,   -61,   -61,  -103,   -61,
    -103,  -103,  -103,  -103,  -103
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,    63,     0,     0,     0,     0,    16,     0,    13,     0,
       0,     0,    14,    15,     0,     0,     0,     0,     0,   111,
      59,    12,    10,    11,    49,    50,     0,     6,     9,     2,
       0,     3,    66,     0,    68,    70,    72,    74,     4,     5,
      55,    56,    64,    80,     0,     0,    41,    59,     0,     0,
      42,     0,    77,     0,     0,     0,    18,    20,    17,    59,
       0,   112,    61,   111,    60,    59,     1,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    67,    63,     0,    63,    89,     0,
      69,    71,    73,    75,    57,    58,    78,    81,     0,     0,
       0,   105,    80,    55,    56,    80,     0,     0,     0,    76,
      53,     0,    80,    63,    80,   113,    45,    59,    62,     0,
     111,    43,    44,    39,    40,    24,    25,    21,    22,    23,
      19,    31,    33,    26,    27,    28,    29,    30,    32,    38,
      34,    35,    36,    37,     0,    51,    80,    59,    91,    63,
      63,    90,    79,    63,     0,   117,     0,   103,   107,     0,
     106,     0,     0,    83,    63,     0,     0,   111,    80,     0,
      80,     0,     0,    47,     0,    46,   111,     0,    55,    80,
       0,    80,    93,    82,     0,     0,   118,     0,    63,     0,
      63,    63,    80,    63,    80,    63,    80,     0,     0,    63,
       0,    63,    59,    48,     0,    63,     0,    86,    63,     0,
       0,   115,   104,    80,   108,   109,    80,    85,    80,     0,
      80,     0,    54,    63,   101,    63,    99,   114,    52,    92,
      63,    80,    63,     0,     0,    84,     0,    63,     0,    63,
     102,   100,    80,    87,    94,   116,    63,    63,    95,    63,
      96,    88,   110,    97,    98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,   149,  -103,  -103,    -3,   -10,   -19,   -59,     1,
       5,  -103,    33,  -103,  -103,    81,  -103,  -103,  -103,  -103,
    -103,   -18,  -103,  -103,  -102,   -40,  -103,  -103,    -8
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,    28,    29,    30,    42,    63,    64,    43,
     106,   107,   108,    32,    33,    98,    99,    34,    35,    36,
      37,   168,   169,   170,    38,    60,    61,    39,   166
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    46,    47,   128,   -59,    31,    50,    51,   165,   -61,
      44,    54,    55,    56,    57,    58,    59,   109,    40,    41,
      93,    45,    94,   129,   100,   101,   102,   103,   116,    53,
     104,   105,    77,    31,   110,   112,     3,   115,   111,    62,
     125,   119,   195,    65,   122,   124,   130,   117,    40,    41,
      40,    41,    40,   114,    66,   128,     3,    40,   114,    91,
      59,   118,   243,    92,   196,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   127,
     184,   120,   165,   157,   172,   155,   156,   126,   158,    95,
      96,    97,   163,   104,   105,    48,    49,   164,   182,     3,
     167,   178,   162,   174,   175,   176,   177,   183,   196,    74,
      75,    76,    77,   186,   180,   197,   198,    59,   159,    96,
     160,    72,    73,    74,    75,    76,    77,   207,   190,   199,
     200,   201,   209,   211,   213,   171,   214,   189,   173,    91,
     215,   218,   232,    92,   194,   179,   233,   181,   235,   238,
     191,   192,   240,    91,   193,   204,   206,    92,   242,   216,
     247,   249,   256,   257,    59,   202,   259,    67,   104,   212,
     161,   224,     0,    59,     0,   221,   220,     0,     0,   187,
       0,     0,     0,   237,   222,     0,     0,     0,     0,   223,
       0,   225,   226,     0,   228,     0,   230,     0,     0,     0,
     234,   208,   236,   210,     0,     0,   239,     0,     0,   241,
       0,     0,   217,     0,   219,     0,     0,     0,     0,     0,
       0,     0,     0,   255,   250,   227,   251,   229,     0,   231,
       0,   252,     0,   254,     0,     0,     0,     0,   258,     0,
     260,     0,     0,     0,     0,     0,   244,   262,   263,   245,
     264,   246,     0,   248,     1,     0,     0,     2,     3,     4,
       0,     5,     0,     0,   253,     0,     6,     7,     0,     0,
       0,     8,     9,     0,     0,   261,     0,    10,    11,    12,
       1,    13,     0,     0,    14,     4,    15,     5,    16,    17,
       0,     0,     6,     7,     0,     0,     0,     8,     9,     0,
       0,     0,     0,    10,    11,    12,     0,    13,     0,     0,
      14,     0,    15,    18,    16,    17,    19,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,    23,    24,    25,     0,     0,     0,     0,    18,
       0,    68,    19,     0,     0,     0,    20,     0,   121,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      68,     0,    86,     0,     0,     0,     0,   123,     0,    87,
      88,     0,    89,    90,     0,     0,     0,     0,    91,     0,
      69,     0,    92,     0,     0,     0,    40,    41,     0,     0,
       0,    70,     0,    71,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    68,
       0,    86,     0,     0,     0,     0,   203,     0,    87,    88,
       0,    89,    90,     0,     0,     0,     0,    91,     0,    69,
       0,    92,     0,     0,     0,    40,    41,     0,     0,     0,
      70,     0,    71,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    68,     0,
      86,     0,     0,     0,     0,   205,     0,    87,    88,     0,
      89,    90,     0,     0,     0,     0,    91,     0,    69,     0,
      92,     0,     0,     0,    40,    41,     0,     0,     0,    70,
       0,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    68,     0,    86,
       0,     0,     0,     0,     0,     0,    87,    88,     0,    89,
      90,     0,     0,     0,     0,    91,     0,    69,     0,    92,
       0,     0,     0,    40,    41,     0,     0,     0,    70,     0,
      71,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    68,     0,    86,     0,
       0,     0,     0,     0,     0,    87,    88,     0,    89,    90,
       0,     0,     0,     0,    91,     0,    69,     0,    92,     0,
       0,     0,    40,    41,     0,     0,     0,    70,     0,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    68,     0,    86,     0,     0,
       0,     0,     0,     0,    87,    88,     0,    89,    90,     0,
       0,     0,     0,    91,     0,    69,     0,    92,     0,     0,
       0,   113,   114,     0,     0,     0,    70,     0,    71,     0,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    68,     0,    86,     0,     0,     0,
       0,     0,     0,    87,    88,     0,    89,    90,     0,     0,
       0,     0,    91,     0,    69,     0,    92,     0,     0,     0,
     188,   114,     0,     0,     0,    70,     0,    71,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,    86,     0,     4,     0,     0,
       0,     0,    87,    88,     6,    89,    90,     0,     0,     8,
       9,    91,     0,     0,     0,    92,    11,    12,     0,    13,
      62,     0,     0,     4,     0,     0,    16,    17,     0,     0,
       6,     0,     0,     0,     0,     8,     9,     0,     0,     0,
       0,     0,    11,    12,     0,    13,     0,     0,     0,     0,
       0,    18,    16,    17,    19,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,    40,    41,    21,    22,
      23,    24,    25,    68,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,    69,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,    70,     0,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    68,     0,    86,     0,     0,     0,     0,     0,
       0,    87,    88,     0,    89,    90,     0,     0,     0,     0,
      91,   185,    69,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,    71,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    68,     0,    86,     0,     0,     0,     0,     0,     0,
      87,    88,     0,    89,    90,     0,     0,     0,     0,    91,
       0,    69,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,    86,     0,     0,     0,     0,     0,     0,    87,
      88,     0,    89,    90,     0,     0,     0,     0,    91,     0,
       0,     0,    92,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,     0,    86,
       0,     0,     0,     0,     0,     0,    87,    88,     0,    89,
      90,     0,     0,     0,     0,    91,     0,     0,     0,    92,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,     0,   -62,   -62,     0,     0,
       0,     0,    91,     0,     0,     0,    92,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,    92,    72,    73,    74,    75,    76,    77,
     -62,   -62,    80,    81,    82,    83,   -62,   -62,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,    91,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,    92
};

static const yytype_int16 yycheck[] =
{
      10,     4,     5,    62,    31,     0,     9,    10,   110,    31,
      87,    14,    15,    16,    17,    18,    19,    48,    79,    80,
      30,    84,    32,    63,    34,    35,    36,    37,    47,    75,
      40,    41,    44,    28,    44,    45,     9,    47,    67,    80,
      59,    51,    15,    67,    54,    55,    65,    19,    79,    80,
      79,    80,    79,    80,     0,   114,     9,    79,    80,    71,
      63,    19,    15,    75,   166,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    76,
     130,    84,   194,    96,   113,    84,    95,    68,    97,    13,
      14,    15,    15,   113,   114,    84,    85,    87,   127,     9,
      84,   121,   107,    31,   117,   118,    67,    72,   220,    41,
      42,    43,    44,    67,   123,    55,    68,   130,    13,    14,
      15,    39,    40,    41,    42,    43,    44,   177,   157,    76,
      15,    31,    15,    15,    68,   112,   186,   157,   115,    71,
      15,    31,    68,    75,   164,   122,    15,   124,    15,    68,
     159,   160,    31,    71,   163,   175,   176,    75,    15,   188,
      15,    15,    15,    15,   177,   174,    15,    28,   188,   182,
      99,   199,    -1,   186,    -1,   195,   194,    -1,    -1,   156,
      -1,    -1,    -1,   212,   197,    -1,    -1,    -1,    -1,   198,
      -1,   200,   201,    -1,   203,    -1,   205,    -1,    -1,    -1,
     209,   178,   211,   180,    -1,    -1,   215,    -1,    -1,   218,
      -1,    -1,   189,    -1,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,   233,   202,   235,   204,    -1,   206,
      -1,   240,    -1,   242,    -1,    -1,    -1,    -1,   247,    -1,
     249,    -1,    -1,    -1,    -1,    -1,   223,   256,   257,   226,
     259,   228,    -1,   230,     5,    -1,    -1,     8,     9,    10,
      -1,    12,    -1,    -1,   241,    -1,    17,    18,    -1,    -1,
      -1,    22,    23,    -1,    -1,   252,    -1,    28,    29,    30,
       5,    32,    -1,    -1,    35,    10,    37,    12,    39,    40,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    32,    -1,    -1,
      35,    -1,    37,    64,    39,    40,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    64,
      -1,     4,    67,    -1,    -1,    -1,    71,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       4,    -1,    55,    -1,    -1,    -1,    -1,    11,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    71,    -1,
      24,    -1,    75,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    35,    -1,    37,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     4,
      -1,    55,    -1,    -1,    -1,    -1,    11,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    71,    -1,    24,
      -1,    75,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     4,    -1,
      55,    -1,    -1,    -1,    -1,    11,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    71,    -1,    24,    -1,
      75,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    35,
      -1,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     4,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    -1,    71,    -1,    24,    -1,    75,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     4,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    71,    -1,    24,    -1,    75,    -1,
      -1,    -1,    79,    80,    -1,    -1,    -1,    35,    -1,    37,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     4,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    71,    -1,    24,    -1,    75,    -1,    -1,
      -1,    79,    80,    -1,    -1,    -1,    35,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     4,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    71,    -1,    24,    -1,    75,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    10,    -1,    -1,
      -1,    -1,    62,    63,    17,    65,    66,    -1,    -1,    22,
      23,    71,    -1,    -1,    -1,    75,    29,    30,    -1,    32,
      80,    -1,    -1,    10,    -1,    -1,    39,    40,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    64,    39,    40,    67,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,     4,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     4,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    24,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     4,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    71,
      -1,    24,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    75,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    75,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     8,     9,    10,    12,    17,    18,    22,    23,
      28,    29,    30,    32,    35,    37,    39,    40,    64,    67,
      71,    81,    82,    83,    84,    85,    91,    92,    93,    94,
      95,   100,   103,   104,   107,   108,   109,   110,   114,   117,
      79,    80,    96,    99,    87,    84,    95,    95,    84,    85,
      95,    95,    96,    75,    95,    95,    95,    95,    95,    95,
     115,   116,    80,    97,    98,    67,     0,    92,     4,    24,
      35,    37,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    55,    62,    63,    65,
      66,    71,    75,    96,    96,    13,    14,    15,   105,   106,
      96,    96,    96,    96,    96,    96,   100,   101,   102,    48,
      96,    67,    96,    79,    80,    96,    97,    19,    19,    96,
      84,    11,    96,    11,    96,    97,    68,    76,    98,   115,
      97,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    84,    99,    95,    99,    13,
      15,   105,   100,    15,    87,   114,   118,    84,   111,   112,
     113,   102,    97,   102,    31,    95,    95,    67,    96,   102,
      99,   102,    97,    72,   115,    72,    67,   102,    79,    96,
      97,    99,    99,    99,    96,    15,   114,    55,    68,    76,
      15,    31,    99,    11,    96,    11,    96,   115,   102,    15,
     102,    15,    95,    68,   115,    15,    97,   102,    31,   102,
     118,    96,    95,    99,   111,    99,    99,   102,    99,   102,
      99,   102,    68,    15,    99,    15,    99,    97,    68,    99,
      31,    99,    15,    15,   102,   102,   102,    15,   102,    15,
      99,    99,    99,   102,    99,    96,    15,    15,    99,    15,
      99,   102,    99,    99,    99
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    90,    91,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   101,
     102,   102,   103,   104,   104,   104,   105,   105,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     4,     4,     5,     1,
       1,     3,     6,     3,     6,     1,     1,     2,     2,     0,
       1,     1,     2,     0,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     3,     2,     1,     2,
       0,     1,     5,     4,     7,     6,     4,     6,     7,     1,
       2,     3,     6,     4,     7,     8,     8,     9,     9,     6,
       7,     6,     7,     1,     3,     0,     1,     1,     3,     6,
       9,     0,     1,     2,     5,     6,     8,     1,     2
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
#line 178 "parser.y"
                                                                                           { root=create_program_struct((yyvsp[0].program_item_list_un)); }
#line 1554 "parser.tab.c"
    break;

  case 3: /* program_item: stmt  */
#line 181 "parser.y"
                                                                                           { (yyval.program_item_un)=create_stmt_program_item((yyvsp[0].stmt_un)); }
#line 1560 "parser.tab.c"
    break;

  case 4: /* program_item: def_method_stmt  */
#line 182 "parser.y"
                                                                                           { (yyval.program_item_un)=create_def_method_program_item((yyvsp[0].def_method_un)); }
#line 1566 "parser.tab.c"
    break;

  case 5: /* program_item: class_declaration  */
#line 183 "parser.y"
                                                                                           { (yyval.program_item_un)=(yyvsp[0].program_item_un); }
#line 1572 "parser.tab.c"
    break;

  case 6: /* program_items_list_not_empty: program_item  */
#line 186 "parser.y"
                                                                                           { (yyval.program_item_list_un)=create_program_item_list((yyvsp[0].program_item_un)); }
#line 1578 "parser.tab.c"
    break;

  case 7: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 187 "parser.y"
                                                                                           { (yyval.program_item_list_un)=add_to_program_item_list((yyvsp[-1].program_item_list_un), (yyvsp[0].program_item_un)); }
#line 1584 "parser.tab.c"
    break;

  case 8: /* program_items_list: %empty  */
#line 190 "parser.y"
                                                                                           { (yyval.program_item_list_un)=0; }
#line 1590 "parser.tab.c"
    break;

  case 9: /* program_items_list: program_items_list_not_empty  */
#line 191 "parser.y"
                                                                                           { (yyval.program_item_list_un)=(yyvsp[0].program_item_list_un); }
#line 1596 "parser.tab.c"
    break;

  case 10: /* expr: INTEGER_NUMBER  */
#line 194 "parser.y"
                                                                                           { (yyval.expr_un)=create_const_integer_expr(Integer, (yyvsp[0].int_un)); }
#line 1602 "parser.tab.c"
    break;

  case 11: /* expr: FLOAT_NUMBER  */
#line 195 "parser.y"
                                                                                           { (yyval.expr_un)=create_const_float_expr((yyvsp[0].float_un));}
#line 1608 "parser.tab.c"
    break;

  case 12: /* expr: STRING  */
#line 196 "parser.y"
                                                                                           { (yyval.expr_un)=create_const_string_expr(String, (yyvsp[0].string_un)); }
#line 1614 "parser.tab.c"
    break;

  case 13: /* expr: NIL  */
#line 197 "parser.y"
                                                                                           { }
#line 1620 "parser.tab.c"
    break;

  case 14: /* expr: SUPER  */
#line 198 "parser.y"
                                                                                           { }
#line 1626 "parser.tab.c"
    break;

  case 15: /* expr: TRUE  */
#line 199 "parser.y"
                                                                                           { (yyval.expr_un)=create_const_integer_expr(Boolean, 1); }
#line 1632 "parser.tab.c"
    break;

  case 16: /* expr: FALSE  */
#line 200 "parser.y"
                                                                                           { (yyval.expr_un)=create_const_integer_expr(Boolean, 0); }
#line 1638 "parser.tab.c"
    break;

  case 17: /* expr: LOGICAL_NOT_OP expr  */
#line 201 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(logical_not, (yyvsp[0].expr_un), 0); }
#line 1644 "parser.tab.c"
    break;

  case 18: /* expr: ARITHMETIC_PLUS_OP expr  */
#line 202 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(unary_plus, (yyvsp[0].expr_un), 0); }
#line 1650 "parser.tab.c"
    break;

  case 19: /* expr: expr ARITHMETIC_POW_OP expr  */
#line 203 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(pow_, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1656 "parser.tab.c"
    break;

  case 20: /* expr: ARITHMETIC_MINUS_OP expr  */
#line 204 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(unary_minus, (yyvsp[0].expr_un), 0); }
#line 1662 "parser.tab.c"
    break;

  case 21: /* expr: expr ARITHMETIC_MUL_OP expr  */
#line 205 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(mul, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1668 "parser.tab.c"
    break;

  case 22: /* expr: expr ARITHMETIC_DIV_OP expr  */
#line 206 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(div_, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1674 "parser.tab.c"
    break;

  case 23: /* expr: expr ARITHMETIC_MOD_OP expr  */
#line 207 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(mod, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1680 "parser.tab.c"
    break;

  case 24: /* expr: expr ARITHMETIC_PLUS_OP expr  */
#line 208 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(plus, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1686 "parser.tab.c"
    break;

  case 25: /* expr: expr ARITHMETIC_MINUS_OP expr  */
#line 209 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(minus, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1692 "parser.tab.c"
    break;

  case 26: /* expr: expr GREATER_OP expr  */
#line 210 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(greater, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1698 "parser.tab.c"
    break;

  case 27: /* expr: expr LESS_OP expr  */
#line 211 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(less, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1704 "parser.tab.c"
    break;

  case 28: /* expr: expr GREATER_OR_EQL_OP expr  */
#line 212 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(greater_eql, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1710 "parser.tab.c"
    break;

  case 29: /* expr: expr LESS_OR_EQL_OP expr  */
#line 213 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(less_eql, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1716 "parser.tab.c"
    break;

  case 30: /* expr: expr COMB_COMPRASION_OP expr  */
#line 214 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(comb_comprassion, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1722 "parser.tab.c"
    break;

  case 31: /* expr: expr EQL_OP expr  */
#line 215 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(equal, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1728 "parser.tab.c"
    break;

  case 32: /* expr: expr CASE_EQL_OP expr  */
#line 216 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(case_equal, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1734 "parser.tab.c"
    break;

  case 33: /* expr: expr NOT_EQL_OP expr  */
#line 217 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(not_equal, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1740 "parser.tab.c"
    break;

  case 34: /* expr: expr LOGICAL_AND_OP expr  */
#line 218 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(logical_and, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1746 "parser.tab.c"
    break;

  case 35: /* expr: expr LOGICAL_OR_OP expr  */
#line 219 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(logical_or, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1752 "parser.tab.c"
    break;

  case 36: /* expr: expr INCLUSIVE_RANGE_OP expr  */
#line 220 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(inclusive_range, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1758 "parser.tab.c"
    break;

  case 37: /* expr: expr EXCLUSIVE_RANGE_OP expr  */
#line 221 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(exclusive_range, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1764 "parser.tab.c"
    break;

  case 38: /* expr: expr ASSIGN_OP expr  */
#line 222 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(assign, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1770 "parser.tab.c"
    break;

  case 39: /* expr: expr UNTIL expr  */
#line 223 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(until_op, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1776 "parser.tab.c"
    break;

  case 40: /* expr: expr WHILE expr  */
#line 224 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(while_op, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1782 "parser.tab.c"
    break;

  case 41: /* expr: DEFINED expr  */
#line 225 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(defined, (yyvsp[0].expr_un), 0); }
#line 1788 "parser.tab.c"
    break;

  case 42: /* expr: NOT expr  */
#line 226 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(not, (yyvsp[0].expr_un), 0); }
#line 1794 "parser.tab.c"
    break;

  case 43: /* expr: expr AND expr  */
#line 227 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(and, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1800 "parser.tab.c"
    break;

  case 44: /* expr: expr OR expr  */
#line 228 "parser.y"
                                                                                           { (yyval.expr_un)=create_op_expr(or, (yyvsp[-2].expr_un), (yyvsp[0].expr_un)); }
#line 1806 "parser.tab.c"
    break;

  case 45: /* expr: OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 229 "parser.y"
                                                                                           { (yyval.expr_un)=(yyvsp[-1].expr_list_un); }
#line 1812 "parser.tab.c"
    break;

  case 46: /* expr: expr OPEN_SQUARE_BRACKET expr CLOSE_SQUARE_BRACKET  */
#line 230 "parser.y"
                                                                                               { (yyval.expr_un)=create_op_expr(member_access, (yyvsp[-3].expr_un), (yyvsp[-1].expr_un)); }
#line 1818 "parser.tab.c"
    break;

  case 47: /* expr: OPEN_SQUARE_BRACKET new_lines_op expr_list CLOSE_SQUARE_BRACKET  */
#line 231 "parser.y"
                                                                                           { (yyval.expr_un)=create_array_struct((yyvsp[-1].expr_list_un)); }
#line 1824 "parser.tab.c"
    break;

  case 48: /* expr: VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET new_lines_op expr_list CLOSE_ROUND_BRACKET  */
#line 232 "parser.y"
                                                                                           { (yyval.expr_un)=create_method_call_expr((yyvsp[-4].var_name_un), (yyvsp[-1].expr_list_un));}
#line 1830 "parser.tab.c"
    break;

  case 49: /* expr: VAR_OR_METHOD_NAME  */
#line 233 "parser.y"
                                                                                           { (yyval.expr_un)=create_const_string_expr(var_or_method, (yyvsp[0].var_name_un)); }
#line 1836 "parser.tab.c"
    break;

  case 50: /* expr: INSTANCE_VAR_NAME  */
#line 234 "parser.y"
                                                                                           { (yyval.expr_un)=create_const_string_expr(instance_var, (yyvsp[0].instance_var_name_un)); }
#line 1842 "parser.tab.c"
    break;

  case 51: /* expr: expr DOT_SYMBOL VAR_OR_METHOD_NAME  */
#line 235 "parser.y"
                                                                                           { (yyval.expr_un)=create_field_call_expr((yyvsp[-2].expr_un), (yyvsp[0].var_name_un)); }
#line 1848 "parser.tab.c"
    break;

  case 52: /* expr: expr DOT_SYMBOL VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 236 "parser.y"
                                                                                           { (yyval.expr_un)=create_object_method_call_expr((yyvsp[-5].expr_un), (yyvsp[-3].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 1854 "parser.tab.c"
    break;

  case 53: /* expr: SELF DOT_SYMBOL VAR_OR_METHOD_NAME  */
#line 237 "parser.y"
                                                                                           { (yyval.expr_un)=create_self_field_call_expr((yyvsp[0].var_name_un)); }
#line 1860 "parser.tab.c"
    break;

  case 54: /* expr: SELF DOT_SYMBOL VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 238 "parser.y"
                                                                                           { (yyval.expr_un)=create_self_method_call_expr((yyvsp[-3].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 1866 "parser.tab.c"
    break;

  case 65: /* stmt: expr stmt_ends  */
#line 259 "parser.y"
                                { (yyval.stmt_un)=create_expr_stmt((yyvsp[-1].expr_un)); }
#line 1872 "parser.tab.c"
    break;

  case 66: /* stmt: stmt_block  */
#line 260 "parser.y"
                                { (yyval.stmt_un)=create_block_stmt((yyvsp[0].block_un)); }
#line 1878 "parser.tab.c"
    break;

  case 67: /* stmt: stmt_block stmt_ends  */
#line 261 "parser.y"
                                { (yyval.stmt_un)=create_block_stmt((yyvsp[-1].block_un)); }
#line 1884 "parser.tab.c"
    break;

  case 68: /* stmt: if_stmt  */
#line 262 "parser.y"
                                { (yyval.stmt_un)=(yyvsp[0].stmt_un); }
#line 1890 "parser.tab.c"
    break;

  case 69: /* stmt: if_stmt stmt_ends  */
#line 263 "parser.y"
                                { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1896 "parser.tab.c"
    break;

  case 70: /* stmt: for_stmt  */
#line 264 "parser.y"
                                { (yyval.stmt_un)=(yyvsp[0].stmt_un); }
#line 1902 "parser.tab.c"
    break;

  case 71: /* stmt: for_stmt stmt_ends  */
#line 265 "parser.y"
                                { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1908 "parser.tab.c"
    break;

  case 72: /* stmt: while_stmt  */
#line 266 "parser.y"
                                { (yyval.stmt_un)=(yyvsp[0].stmt_un); }
#line 1914 "parser.tab.c"
    break;

  case 73: /* stmt: while_stmt stmt_ends  */
#line 267 "parser.y"
                                { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1920 "parser.tab.c"
    break;

  case 74: /* stmt: until_stmt  */
#line 268 "parser.y"
                                { (yyval.stmt_un)=(yyvsp[0].stmt_un); }
#line 1926 "parser.tab.c"
    break;

  case 75: /* stmt: until_stmt stmt_ends  */
#line 269 "parser.y"
                                { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1932 "parser.tab.c"
    break;

  case 76: /* stmt: RETURN expr stmt_ends  */
#line 270 "parser.y"
                                { (yyval.stmt_un)=create_return_stmt((yyvsp[-1].expr_un)); }
#line 1938 "parser.tab.c"
    break;

  case 77: /* stmt: RETURN stmt_ends  */
#line 271 "parser.y"
                                { (yyval.stmt_un)=create_return_stmt(0); }
#line 1944 "parser.tab.c"
    break;

  case 78: /* stmt_list_not_empty: stmt  */
#line 274 "parser.y"
                                                                                                        { (yyval.stmt_list_un)=create_stmt_list((yyvsp[0].stmt_un)); }
#line 1950 "parser.tab.c"
    break;

  case 79: /* stmt_list_not_empty: stmt_list_not_empty stmt  */
#line 275 "parser.y"
                                                                                                        { (yyval.stmt_list_un)=add_to_stmt_list((yyvsp[-1].stmt_list_un), (yyvsp[0].stmt_un)); }
#line 1956 "parser.tab.c"
    break;

  case 80: /* stmt_list: %empty  */
#line 278 "parser.y"
                                                                                                        { (yyval.stmt_list_un)=0; }
#line 1962 "parser.tab.c"
    break;

  case 81: /* stmt_list: stmt_list_not_empty  */
#line 279 "parser.y"
                                                                                                        { (yyval.stmt_list_un)=(yyvsp[0].stmt_list_un); }
#line 1968 "parser.tab.c"
    break;

  case 82: /* stmt_block: BEGIN stmt_ends_op stmt_list END stmt_ends_op  */
#line 282 "parser.y"
                                                                                                        { (yyval.block_un)=create_stmt_block_struct((yyvsp[-2].stmt_list_un)); }
#line 1974 "parser.tab.c"
    break;

  case 83: /* if_start_stmt: IF expr stmt_ends stmt_list  */
#line 285 "parser.y"
                                                                                                        { (yyval.if_part_un)=create_if_part_struct((yyvsp[-2].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1980 "parser.tab.c"
    break;

  case 84: /* if_start_stmt: IF expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list  */
#line 286 "parser.y"
                                                                                                        { (yyval.if_part_un)=create_if_part_struct((yyvsp[-5].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1986 "parser.tab.c"
    break;

  case 85: /* if_start_stmt: IF expr new_lines_op THEN stmt_ends_op stmt_list  */
#line 287 "parser.y"
                                                                                                        { (yyval.if_part_un)=create_if_part_struct((yyvsp[-4].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1992 "parser.tab.c"
    break;

  case 86: /* elsif_stmt: ELSIF expr stmt_ends stmt_list  */
#line 290 "parser.y"
                                                                                                        { (yyval.if_part_un)=create_if_part_struct((yyvsp[-2].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1998 "parser.tab.c"
    break;

  case 87: /* elsif_stmt: ELSIF expr new_lines_op THEN stmt_ends_op stmt_list  */
#line 291 "parser.y"
                                                                                                        { (yyval.if_part_un)=create_if_part_struct((yyvsp[-4].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2004 "parser.tab.c"
    break;

  case 88: /* elsif_stmt: ELSIF expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list  */
#line 292 "parser.y"
                                                                                                        { (yyval.if_part_un)=create_if_part_struct((yyvsp[-5].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2010 "parser.tab.c"
    break;

  case 89: /* elsif_stmt_list: elsif_stmt  */
#line 295 "parser.y"
                                                                                                        { (yyval.elsif_list_un)=create_elsif_stmt_list((yyvsp[0].if_part_un)); }
#line 2016 "parser.tab.c"
    break;

  case 90: /* elsif_stmt_list: elsif_stmt_list elsif_stmt  */
#line 296 "parser.y"
                                                                                                        { (yyval.elsif_list_un)=add_to_elsif_stmt_list((yyvsp[-1].elsif_list_un), (yyvsp[0].if_part_un)); }
#line 2022 "parser.tab.c"
    break;

  case 91: /* if_stmt: if_start_stmt END stmt_ends_op  */
#line 299 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_if_stmt((yyvsp[-2].if_part_un), 0, 0); }
#line 2028 "parser.tab.c"
    break;

  case 92: /* if_stmt: if_start_stmt ELSE stmt_ends_op stmt_list END stmt_ends_op  */
#line 300 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_if_stmt((yyvsp[-5].if_part_un), 0, (yyvsp[-2].stmt_list_un)); }
#line 2034 "parser.tab.c"
    break;

  case 93: /* if_stmt: if_start_stmt elsif_stmt_list END stmt_ends_op  */
#line 301 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_if_stmt((yyvsp[-3].if_part_un), (yyvsp[-2].elsif_list_un), 0); }
#line 2040 "parser.tab.c"
    break;

  case 94: /* if_stmt: if_start_stmt elsif_stmt_list ELSE stmt_ends_op stmt_list END stmt_ends_op  */
#line 302 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_if_stmt((yyvsp[-6].if_part_un), (yyvsp[-5].elsif_list_un), (yyvsp[-2].stmt_list_un)); }
#line 2046 "parser.tab.c"
    break;

  case 95: /* for_stmt: FOR VAR_OR_METHOD_NAME IN expr stmt_ends stmt_list END stmt_ends_op  */
#line 305 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_for_stmt((yyvsp[-6].var_name_un), (yyvsp[-4].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2052 "parser.tab.c"
    break;

  case 96: /* for_stmt: FOR INSTANCE_VAR_NAME IN expr stmt_ends stmt_list END stmt_ends_op  */
#line 306 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_for_stmt((yyvsp[-6].instance_var_name_un), (yyvsp[-4].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2058 "parser.tab.c"
    break;

  case 97: /* for_stmt: FOR VAR_OR_METHOD_NAME IN expr DO stmt_ends_op stmt_list END stmt_ends_op  */
#line 307 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_for_stmt((yyvsp[-7].var_name_un), (yyvsp[-5].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2064 "parser.tab.c"
    break;

  case 98: /* for_stmt: FOR INSTANCE_VAR_NAME IN expr DO stmt_ends_op stmt_list END stmt_ends_op  */
#line 308 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_for_stmt((yyvsp[-7].instance_var_name_un), (yyvsp[-5].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2070 "parser.tab.c"
    break;

  case 99: /* while_stmt: WHILE expr stmt_ends stmt_list END stmt_ends_op  */
#line 311 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_while_stmt((yyvsp[-4].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2076 "parser.tab.c"
    break;

  case 100: /* while_stmt: WHILE expr DO stmt_ends_op stmt_list END stmt_ends_op  */
#line 312 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_while_stmt((yyvsp[-5].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2082 "parser.tab.c"
    break;

  case 101: /* until_stmt: UNTIL expr stmt_ends stmt_list END stmt_ends_op  */
#line 315 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_until_stmt((yyvsp[-4].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2088 "parser.tab.c"
    break;

  case 102: /* until_stmt: UNTIL expr DO stmt_ends stmt_list END stmt_ends_op  */
#line 316 "parser.y"
                                                                                                        { (yyval.stmt_un)=create_until_stmt((yyvsp[-5].expr_un), (yyvsp[-2].stmt_list_un)); }
#line 2094 "parser.tab.c"
    break;

  case 103: /* method_param: VAR_OR_METHOD_NAME  */
#line 319 "parser.y"
                                                                                                        { (yyval.method_param_un)=create_method_param_struct((yyvsp[0].var_name_un), 0); }
#line 2100 "parser.tab.c"
    break;

  case 104: /* method_param: VAR_OR_METHOD_NAME ASSIGN_OP expr  */
#line 320 "parser.y"
                                                                                                            { (yyval.method_param_un)=create_method_param_struct((yyvsp[-2].var_name_un), (yyvsp[0].expr_un)); }
#line 2106 "parser.tab.c"
    break;

  case 105: /* method_params_list: %empty  */
#line 323 "parser.y"
                                                                                                        { (yyval.method_param_list_un)=0; }
#line 2112 "parser.tab.c"
    break;

  case 106: /* method_params_list: method_params_list_not_empty  */
#line 324 "parser.y"
                                                                                                            { (yyval.method_param_list_un)=(yyvsp[0].method_param_list_un); }
#line 2118 "parser.tab.c"
    break;

  case 107: /* method_params_list_not_empty: method_param  */
#line 327 "parser.y"
                                                                                                        { (yyval.method_param_list_un)=create_method_param_list((yyvsp[0].method_param_un)); }
#line 2124 "parser.tab.c"
    break;

  case 108: /* method_params_list_not_empty: method_params_list_not_empty COMMA_SYMBOL method_param  */
#line 328 "parser.y"
                                                                                                            { (yyval.method_param_list_un)=add_to_method_param_list((yyvsp[-2].method_param_list_un), (yyvsp[0].method_param_un)); }
#line 2130 "parser.tab.c"
    break;

  case 109: /* def_method_stmt: DEF VAR_OR_METHOD_NAME stmt_ends stmt_list END stmt_ends_op  */
#line 331 "parser.y"
                                                                                                                                    { (yyval.def_method_un)=create_def_method_struct((yyvsp[-4].var_name_un), 0, (yyvsp[-2].stmt_list_un)); }
#line 2136 "parser.tab.c"
    break;

  case 110: /* def_method_stmt: DEF VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET method_params_list CLOSE_ROUND_BRACKET stmt_ends_op stmt_list END stmt_ends_op  */
#line 332 "parser.y"
                                                                                                                                    { (yyval.def_method_un)=create_def_method_struct((yyvsp[-7].var_name_un), (yyvsp[-5].method_param_list_un), (yyvsp[-2].stmt_list_un)); }
#line 2142 "parser.tab.c"
    break;

  case 111: /* expr_list: %empty  */
#line 335 "parser.y"
                                                                                                        { (yyval.expr_list_un)=0; }
#line 2148 "parser.tab.c"
    break;

  case 112: /* expr_list: expr_list_not_empty  */
#line 336 "parser.y"
                                                                                                            { (yyval.expr_list_un)=(yyvsp[0].expr_list_un); }
#line 2154 "parser.tab.c"
    break;

  case 113: /* expr_list_not_empty: expr new_lines_op  */
#line 339 "parser.y"
                                                                                                        { (yyval.expr_list_un)=create_expr_list((yyvsp[-1].expr_un)); }
#line 2160 "parser.tab.c"
    break;

  case 114: /* expr_list_not_empty: expr_list_not_empty COMMA_SYMBOL new_lines_op expr new_lines_op  */
#line 340 "parser.y"
                                                                                                            { (yyval.expr_list_un)=add_to_expr_list((yyvsp[-4].expr_list_un), (yyvsp[-1].expr_un)); }
#line 2166 "parser.tab.c"
    break;

  case 115: /* class_declaration: CLASS CLASS_NAME stmt_ends def_method_list END stmt_ends  */
#line 343 "parser.y"
                                                                                                        { (yyval.program_item_un)=create_class_declaration_program_item((yyvsp[-4].class_name_un), 0, (yyvsp[-2].def_method_list_un)); }
#line 2172 "parser.tab.c"
    break;

  case 116: /* class_declaration: CLASS CLASS_NAME LESS_OP CLASS_NAME stmt_ends def_method_list END stmt_ends  */
#line 344 "parser.y"
                                                                                                        { (yyval.program_item_un)=create_class_declaration_program_item((yyvsp[-6].class_name_un), (yyvsp[-4].class_name_un), (yyvsp[-2].def_method_list_un)); }
#line 2178 "parser.tab.c"
    break;

  case 117: /* def_method_list: def_method_stmt  */
#line 347 "parser.y"
                                                                                                        { (yyval.def_method_list_un)=create_def_method_list((yyvsp[0].def_method_un)); }
#line 2184 "parser.tab.c"
    break;

  case 118: /* def_method_list: def_method_list def_method_stmt  */
#line 348 "parser.y"
                                                                                                        { (yyval.def_method_list_un)=add_to_def_method_list((yyvsp[-1].def_method_list_un), (yyvsp[0].def_method_un)); }
#line 2190 "parser.tab.c"
    break;


#line 2194 "parser.tab.c"

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

#line 351 "parser.y"
