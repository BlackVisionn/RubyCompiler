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
#include "tree_nodes.h"
#include "print_tree.h"
#include "create_tree.c"

struct program_struct * root;
void yyerror(const char* s);

#line 81 "parser.tab.c"

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
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_CLASS = 4,                      /* CLASS  */
  YYSYMBOL_DEF = 5,                        /* DEF  */
  YYSYMBOL_DEFINED = 6,                    /* DEFINED  */
  YYSYMBOL_DO = 7,                         /* DO  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_ELSIF = 10,                     /* ELSIF  */
  YYSYMBOL_END = 11,                       /* END  */
  YYSYMBOL_FALSE = 12,                     /* FALSE  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_IN = 14,                        /* IN  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_SELF = 18,                      /* SELF  */
  YYSYMBOL_THEN = 19,                      /* THEN  */
  YYSYMBOL_TRUE = 20,                      /* TRUE  */
  YYSYMBOL_UNTIL = 21,                     /* UNTIL  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_ARITHMETIC_PLUS_OP = 23,        /* ARITHMETIC_PLUS_OP  */
  YYSYMBOL_ARITHMETIC_MINUS_OP = 24,       /* ARITHMETIC_MINUS_OP  */
  YYSYMBOL_ARITHMETIC_MUL_OP = 25,         /* ARITHMETIC_MUL_OP  */
  YYSYMBOL_ARITHMETIC_DIV_OP = 26,         /* ARITHMETIC_DIV_OP  */
  YYSYMBOL_ARITHMETIC_MOD_OP = 27,         /* ARITHMETIC_MOD_OP  */
  YYSYMBOL_ARITHMETIC_POW_OP = 28,         /* ARITHMETIC_POW_OP  */
  YYSYMBOL_EQL_OP = 29,                    /* EQL_OP  */
  YYSYMBOL_NOT_EQL_OP = 30,                /* NOT_EQL_OP  */
  YYSYMBOL_GREATER_OP = 31,                /* GREATER_OP  */
  YYSYMBOL_LESS_OP = 32,                   /* LESS_OP  */
  YYSYMBOL_GREATER_OR_EQL_OP = 33,         /* GREATER_OR_EQL_OP  */
  YYSYMBOL_LESS_OR_EQL_OP = 34,            /* LESS_OR_EQL_OP  */
  YYSYMBOL_COMB_COMPRASION_OP = 35,        /* COMB_COMPRASION_OP  */
  YYSYMBOL_CASE_EQL_OP = 36,               /* CASE_EQL_OP  */
  YYSYMBOL_ASSIGN_OP = 37,                 /* ASSIGN_OP  */
  YYSYMBOL_LOGICAL_AND_OP = 38,            /* LOGICAL_AND_OP  */
  YYSYMBOL_LOGICAL_OR_OP = 39,             /* LOGICAL_OR_OP  */
  YYSYMBOL_LOGICAL_NOT_OP = 40,            /* LOGICAL_NOT_OP  */
  YYSYMBOL_INCLUSIVE_RANGE_OP = 41,        /* INCLUSIVE_RANGE_OP  */
  YYSYMBOL_EXCLUSIVE_RANGE_OP = 42,        /* EXCLUSIVE_RANGE_OP  */
  YYSYMBOL_OPEN_ROUND_BRACKET = 43,        /* OPEN_ROUND_BRACKET  */
  YYSYMBOL_CLOSE_ROUND_BRACKET = 44,       /* CLOSE_ROUND_BRACKET  */
  YYSYMBOL_OPEN_CURLY_BRACKET = 45,        /* OPEN_CURLY_BRACKET  */
  YYSYMBOL_CLOSE_CURLY_BRACKET = 46,       /* CLOSE_CURLY_BRACKET  */
  YYSYMBOL_OPEN_SQUARE_BRACKET = 47,       /* OPEN_SQUARE_BRACKET  */
  YYSYMBOL_CLOSE_SQUARE_BRACKET = 48,      /* CLOSE_SQUARE_BRACKET  */
  YYSYMBOL_DOT_SYMBOL = 49,                /* DOT_SYMBOL  */
  YYSYMBOL_COMMA_SYMBOL = 50,              /* COMMA_SYMBOL  */
  YYSYMBOL_SEMICOLON_SYMBOL = 51,          /* SEMICOLON_SYMBOL  */
  YYSYMBOL_NEW_LINE_SYMBOL = 52,           /* NEW_LINE_SYMBOL  */
  YYSYMBOL_STRING = 53,                    /* STRING  */
  YYSYMBOL_INTEGER_NUMBER = 54,            /* INTEGER_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 55,              /* FLOAT_NUMBER  */
  YYSYMBOL_VAR_OR_METHOD_NAME = 56,        /* VAR_OR_METHOD_NAME  */
  YYSYMBOL_INSTANCE_VAR_NAME = 57,         /* INSTANCE_VAR_NAME  */
  YYSYMBOL_CLASS_NAME = 58,                /* CLASS_NAME  */
  YYSYMBOL_CLASS_VAR_NAME = 59,            /* CLASS_VAR_NAME  */
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
  YYSYMBOL_if_start_stmt = 75,             /* if_start_stmt  */
  YYSYMBOL_elsif_stmt = 76,                /* elsif_stmt  */
  YYSYMBOL_elsif_stmt_list = 77,           /* elsif_stmt_list  */
  YYSYMBOL_if_stmt = 78,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 79,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 80,                /* while_stmt  */
  YYSYMBOL_until_stmt = 81,                /* until_stmt  */
  YYSYMBOL_method_param = 82,              /* method_param  */
  YYSYMBOL_method_params_list = 83,        /* method_params_list  */
  YYSYMBOL_method_params_list_not_empty = 84, /* method_params_list_not_empty  */
  YYSYMBOL_def_method_stmt = 85,           /* def_method_stmt  */
  YYSYMBOL_expr_list = 86,                 /* expr_list  */
  YYSYMBOL_expr_list_not_empty = 87,       /* expr_list_not_empty  */
  YYSYMBOL_class_declaration = 88,         /* class_declaration  */
  YYSYMBOL_def_method_list_op = 89,        /* def_method_list_op  */
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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   952

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  286

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
       0,   147,   147,   150,   151,   152,   155,   156,   159,   160,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   208,   209,   210,   211,   214,   215,   218,
     219,   222,   223,   226,   227,   228,   229,   230,   231,   232,
     235,   236,   239,   240,   243,   244,   245,   248,   249,   250,
     253,   254,   257,   258,   259,   260,   263,   264,   265,   266,
     269,   270,   273,   274,   277,   278,   281,   282,   285,   286,
     289,   290,   293,   294,   297,   298,   301,   302,   306,   307,
     310,   311
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
  "\"end of file\"", "error", "\"invalid token\"", "AND", "CLASS", "DEF",
  "DEFINED", "DO", "IF", "ELSE", "ELSIF", "END", "FALSE", "FOR", "IN",
  "NOT", "OR", "RETURN", "SELF", "THEN", "TRUE", "UNTIL", "WHILE",
  "ARITHMETIC_PLUS_OP", "ARITHMETIC_MINUS_OP", "ARITHMETIC_MUL_OP",
  "ARITHMETIC_DIV_OP", "ARITHMETIC_MOD_OP", "ARITHMETIC_POW_OP", "EQL_OP",
  "NOT_EQL_OP", "GREATER_OP", "LESS_OP", "GREATER_OR_EQL_OP",
  "LESS_OR_EQL_OP", "COMB_COMPRASION_OP", "CASE_EQL_OP", "ASSIGN_OP",
  "LOGICAL_AND_OP", "LOGICAL_OR_OP", "LOGICAL_NOT_OP",
  "INCLUSIVE_RANGE_OP", "EXCLUSIVE_RANGE_OP", "OPEN_ROUND_BRACKET",
  "CLOSE_ROUND_BRACKET", "OPEN_CURLY_BRACKET", "CLOSE_CURLY_BRACKET",
  "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "DOT_SYMBOL",
  "COMMA_SYMBOL", "SEMICOLON_SYMBOL", "NEW_LINE_SYMBOL", "STRING",
  "INTEGER_NUMBER", "FLOAT_NUMBER", "VAR_OR_METHOD_NAME",
  "INSTANCE_VAR_NAME", "CLASS_NAME", "CLASS_VAR_NAME", "UNARY_MINUS",
  "UNARY_PLUS", "$accept", "program", "program_item",
  "program_items_list_not_empty", "program_items_list", "expr",
  "stmt_ends", "new_lines_op", "new_lines", "stmt_ends_op", "stmt",
  "stmt_list_not_empty", "stmt_list", "if_start_stmt", "elsif_stmt",
  "elsif_stmt_list", "if_stmt", "for_stmt", "while_stmt", "until_stmt",
  "method_param", "method_params_list", "method_params_list_not_empty",
  "def_method_stmt", "expr_list", "expr_list_not_empty",
  "class_declaration", "def_method_list_op", "def_method_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-65)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     272,   -34,   -21,    -9,    -9,   -65,    -9,    -9,   410,     6,
     -65,    -9,    -9,    -9,    -9,    -9,    -9,    -9,   -65,   -65,
     -65,     3,   -65,    51,   -65,   272,   -65,   600,   -65,    94,
     -35,   -35,   -35,   -35,   -65,   -65,   -26,    -2,    -9,    76,
     -65,    76,    29,    76,   -35,   -35,   600,   -65,    -9,    76,
      76,    76,    76,    76,    76,    76,    -9,   -65,   -65,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,   -65,   -35,    -9,   -65,   -65,    99,
     -65,   -65,   -65,   -65,   -65,    -9,    82,    39,   358,   -65,
     849,   637,    83,    92,   849,   -65,   -65,   -65,    56,   452,
     489,     5,     5,     5,   711,    70,    67,    72,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    62,   358,    76,   -35,   -65,   -65,    63,
     -65,   111,    82,    87,   -65,    81,    77,   -65,   358,   115,
     -12,    -4,   358,   116,    -9,    -9,    91,   -35,   358,   -35,
     358,   -65,   -65,    -9,   -65,    93,   849,   849,   822,   822,
      -5,    -5,     5,     5,     5,     5,   876,   876,   893,   893,
     893,   893,   876,   876,   849,   903,   361,   275,   275,   748,
      95,   125,   674,   358,   -35,   -35,   -65,    76,   -35,    -9,
     -65,   -35,   120,   -65,   -35,    76,    76,    76,   358,   129,
     358,   130,    76,   -65,   -65,    76,   -65,   -12,   358,   123,
     132,    82,   -65,   785,   358,    39,   -65,   -35,   358,   526,
     563,   100,   135,   -65,   136,   -65,   711,   105,   131,   -65,
     -35,   -65,   140,   143,   -65,   358,   -65,   -35,   358,   -35,
     358,   -65,   -65,   -65,   -65,   -65,   -35,   358,   -35,   -35,
     -65,   358,   144,   358,   145,   358,   -65,   -65,   -65,   147,
     -65,   148,   -65,   -65,   -65,   -65
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     0,    57,    57,    14,    57,    57,     0,     0,
      13,    57,    57,    57,    57,    57,    57,    57,    12,    10,
      11,    47,    48,     0,     6,     9,     2,     0,     3,     0,
      61,    61,    61,    61,     4,     5,     0,     0,    59,     0,
      58,     0,     0,     0,    53,    54,     0,    69,    57,     0,
       0,     0,     0,     0,   102,   102,    57,     1,     7,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    63,    61,    57,    82,    80,     0,
      62,    64,    65,    66,    67,    57,   108,    96,    72,    60,
      39,    57,     0,     0,    40,    55,    56,    68,     0,     0,
       0,    16,    18,    15,    57,     0,   103,     0,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     0,    61,    84,    81,     0,
     110,     0,   109,    94,    98,     0,    97,    70,    73,     0,
      53,    54,    72,     0,    57,    57,    51,    61,    72,    61,
      72,   104,    43,    57,    45,     0,    41,    42,    37,    38,
      22,    23,    19,    20,    21,    17,    29,    31,    24,    25,
      26,    27,    28,    30,    36,    32,    33,    34,    35,     0,
      49,     0,    57,    72,     0,     0,   111,     0,    61,    57,
      71,    61,     0,    74,    61,     0,     0,   102,    72,     0,
      72,     0,     0,    46,    44,   102,    83,    53,    72,     0,
       0,   108,   106,    95,    72,     0,   100,    61,    72,     0,
       0,     0,     0,    92,     0,    90,    57,     0,     0,    77,
      61,    85,     0,     0,    99,    72,    76,    61,    72,    61,
      72,    52,    93,    91,   105,    50,    61,    72,     0,    61,
      75,    72,     0,    72,     0,    72,    78,   107,   101,     0,
      86,     0,    87,    79,    88,    89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   139,   -65,   -65,   220,    -8,    -3,   -33,    -1,
       2,   -65,   -55,   -65,    78,   -65,   -65,   -65,   -65,   -65,
     -64,   -65,   -65,   -62,   -37,   -65,   -65,   -59,   -65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    23,    24,    25,    26,    27,    90,    39,    40,    91,
     157,   158,   159,    29,    88,    89,    30,    31,    32,    33,
     154,   155,   156,    34,   115,   116,    35,   151,   152
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    41,    28,    42,    43,    99,    95,   -57,    49,    50,
      51,    52,    53,    54,    55,   -59,    44,    45,   117,    84,
      65,    66,    67,    68,    36,    44,    45,    28,    96,    98,
      92,    93,    94,    68,   150,    37,   105,   106,   107,    44,
     161,    97,    82,    38,    83,   108,    56,    44,   161,    44,
      45,    57,    82,   118,    83,    48,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   175,     3,   145,   144,   102,   103,     2,     5,   201,
     206,     7,   149,   162,     9,   153,    10,   164,   163,    13,
      14,   168,   170,    85,    86,    87,   165,   213,   146,    86,
     147,   171,   166,   219,   172,   221,    15,   173,   200,    16,
     174,   204,   205,    17,   207,   208,   211,   209,    99,    18,
      19,    20,    21,    22,   217,   214,   226,   223,   225,   237,
     243,   245,   250,   251,   261,   203,   262,   263,   230,   265,
     266,   268,   105,   106,   269,   280,   282,   212,   284,   285,
     210,   215,   216,   242,    58,   244,   218,   148,   220,   150,
     222,   254,   252,   249,     0,     0,     0,     0,     0,   253,
     241,     0,     0,   256,     0,     0,     0,     0,   247,     0,
       0,     0,     0,     0,   228,     0,   231,   232,     0,   229,
     270,     0,     0,   272,     0,   274,   235,   234,     0,     0,
     236,     0,   276,   238,     0,     0,   279,     0,   281,   105,
     283,     0,     0,     0,   248,     0,     0,     0,    46,     0,
       0,   258,   260,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,   264,     0,     0,     0,     0,     0,   267,
       0,     0,     0,     0,     0,     0,   271,     0,   273,   100,
     277,   101,     0,   104,     0,   275,     0,     0,   278,   109,
     110,   111,   112,   113,   114,   114,     1,     2,     3,     0,
       4,     0,     0,     0,     5,     6,     0,     7,     0,     8,
       9,     0,    10,    11,    12,    13,    14,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    15,    78,    79,    16,   -60,   -60,     0,    17,
       0,     0,    82,     0,    83,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,     0,     3,   202,     4,     0,     0,     0,
       5,     6,     0,     7,     0,     8,     9,     0,    10,    11,
      12,    13,    14,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    15,    78,
       0,    16,     0,     0,     0,    17,     0,     0,    82,     0,
      83,    18,    19,    20,    21,    22,     3,     0,     0,     0,
       0,     0,     5,     0,     0,     7,     0,   233,     9,     0,
      10,     0,     0,    13,    14,   239,   240,   114,     0,     0,
       0,     0,   246,     0,     0,   114,     0,     0,     0,     0,
      15,     0,     0,    16,     0,    59,     0,    17,     0,   167,
       0,    44,    45,    18,    19,    20,    21,    22,    60,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    59,    80,    81,     0,   169,     0,     0,    82,
       0,    83,     0,    44,    45,    60,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    59,
      80,    81,     0,   257,     0,     0,    82,     0,    83,     0,
      44,    45,    60,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    59,    80,    81,     0,
     259,     0,     0,    82,     0,    83,     0,    44,    45,    60,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    59,    80,    81,     0,     0,     0,     0,
      82,     0,    83,     0,    44,    45,    60,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      59,    80,    81,     0,     0,     0,     0,    82,     0,    83,
       0,    44,    45,    60,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    59,    80,    81,
       0,     0,     0,     0,    82,     0,    83,     0,   160,   161,
      60,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    59,    80,    81,     0,     0,     0,
       0,    82,     0,    83,     0,   227,   161,    60,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    59,    80,    81,     0,     0,     0,     0,    82,     0,
      83,     0,     0,    38,    60,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    59,    80,
      81,     0,     0,     0,     0,    82,   224,    83,     0,     0,
       0,    60,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    59,    80,    81,     0,     0,
       0,     0,    82,     0,    83,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,    82,
       0,    83,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,    82,     0,    83,    63,
      64,    65,    66,    67,    68,   -60,   -60,    71,    72,    73,
      74,   -60,   -60,     0,     0,     0,    63,    64,    65,    66,
      67,    68,     0,    82,     0,    83,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      82,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      82,     0,    83
};

static const yytype_int16 yycheck[] =
{
       8,     4,     0,     6,     7,    38,    32,    19,    11,    12,
      13,    14,    15,    16,    17,    19,    51,    52,    55,    27,
      25,    26,    27,    28,    58,    51,    52,    25,    36,    37,
      31,    32,    33,    28,    96,    56,    44,    45,    46,    51,
      52,    43,    47,    52,    49,    48,    43,    51,    52,    51,
      52,     0,    47,    56,    49,    49,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   118,     6,    86,    85,    56,    57,     5,    12,   144,
     152,    15,    95,   101,    18,    56,    20,    14,   101,    23,
      24,   109,   110,     9,    10,    11,    14,   162,     9,    10,
      11,   114,    56,   168,    44,   170,    40,    50,    56,    43,
      48,    58,    11,    47,    37,    44,    11,    50,   161,    53,
      54,    55,    56,    57,    43,    19,    11,    44,    43,    19,
      11,    11,    19,    11,    44,   146,    11,    11,   203,    44,
      19,    11,   160,   161,    11,    11,    11,   160,    11,    11,
     158,   164,   165,   218,    25,   220,   167,    89,   169,   231,
     173,   235,   231,   228,    -1,    -1,    -1,    -1,    -1,   234,
     217,    -1,    -1,   238,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,   202,    -1,   204,   205,    -1,   202,
     255,    -1,    -1,   258,    -1,   260,   209,   208,    -1,    -1,
     211,    -1,   267,   214,    -1,    -1,   271,    -1,   273,   227,
     275,    -1,    -1,    -1,   227,    -1,    -1,    -1,     8,    -1,
      -1,   239,   240,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   250,
      -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,   259,    39,
     268,    41,    -1,    43,    -1,   266,    -1,    -1,   269,    49,
      50,    51,    52,    53,    54,    55,     4,     5,     6,    -1,
       8,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    40,    38,    39,    43,    41,    42,    -1,    47,
      -1,    -1,    47,    -1,    49,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,    -1,     6,   145,     8,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    40,    38,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    47,    -1,
      49,    53,    54,    55,    56,    57,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,   207,    18,    -1,
      20,    -1,    -1,    23,    24,   215,   216,   217,    -1,    -1,
      -1,    -1,   222,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,     3,    -1,    47,    -1,     7,
      -1,    51,    52,    53,    54,    55,    56,    57,    16,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     3,    41,    42,    -1,     7,    -1,    -1,    47,
      -1,    49,    -1,    51,    52,    16,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     3,
      41,    42,    -1,     7,    -1,    -1,    47,    -1,    49,    -1,
      51,    52,    16,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     3,    41,    42,    -1,
       7,    -1,    -1,    47,    -1,    49,    -1,    51,    52,    16,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     3,    41,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    -1,    51,    52,    16,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       3,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      -1,    51,    52,    16,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     3,    41,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    51,    52,
      16,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     3,    41,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    -1,    51,    52,    16,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     3,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    -1,    -1,    52,    16,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     3,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     3,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    -1,    47,    -1,    49,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     8,    12,    13,    15,    17,    18,
      20,    21,    22,    23,    24,    40,    43,    47,    53,    54,
      55,    56,    57,    63,    64,    65,    66,    67,    72,    75,
      78,    79,    80,    81,    85,    88,    58,    56,    52,    69,
      70,    69,    69,    69,    51,    52,    67,    68,    49,    69,
      69,    69,    69,    69,    69,    69,    43,     0,    64,     3,
      16,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    47,    49,    68,     9,    10,    11,    76,    77,
      68,    71,    71,    71,    71,    32,    68,    43,    68,    70,
      67,    67,    56,    57,    67,    68,    68,    68,    69,    67,
      67,    67,    67,    67,    67,    86,    87,    86,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    71,    69,     9,    11,    76,    69,
      85,    89,    90,    56,    82,    83,    84,    72,    73,    74,
      51,    52,    68,    69,    14,    14,    56,     7,    68,     7,
      68,    69,    44,    50,    48,    86,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      56,    74,    67,    71,    58,    11,    85,    37,    44,    50,
      72,    11,    69,    74,    19,    69,    69,    43,    71,    74,
      71,    74,    69,    44,    48,    43,    11,    51,    68,    69,
      74,    68,    68,    67,    71,    69,    71,    19,    71,    67,
      67,    86,    74,    11,    74,    11,    67,    86,    69,    74,
      19,    11,    89,    74,    82,    71,    74,     7,    68,     7,
      68,    44,    11,    11,    69,    44,    19,    71,    11,    11,
      74,    71,    74,    71,    74,    71,    74,    68,    71,    74,
      11,    74,    11,    74,    11,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    75,    76,    76,    76,
      77,    77,    78,    78,    78,    78,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    89,    89,
      90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     3,
       3,     4,     4,     4,     5,     4,     5,     1,     1,     4,
       7,     4,     7,     1,     1,     2,     2,     0,     1,     1,
       2,     0,     1,     2,     2,     2,     2,     2,     3,     2,
       1,     2,     0,     1,     5,     8,     7,     5,     7,     8,
       1,     2,     2,     5,     3,     6,     9,     9,    10,    10,
       6,     7,     6,     7,     1,     3,     0,     1,     1,     4,
       6,     9,     0,     1,     2,     5,     6,     9,     0,     1,
       1,     2
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
#line 147 "parser.y"
                                                                        { root=create_program_struct((yyvsp[0].program_item_list_un)); }
#line 1481 "parser.tab.c"
    break;

  case 3: /* program_item: stmt  */
#line 150 "parser.y"
                                                                        { (yyval.program_item_un)=create_stmt_program_item((yyvsp[0].stmt_un)); }
#line 1487 "parser.tab.c"
    break;

  case 4: /* program_item: def_method_stmt  */
#line 151 "parser.y"
                                                                        { (yyval.program_item_un)=create_def_method_program_item((yyvsp[0].def_method_un)); }
#line 1493 "parser.tab.c"
    break;

  case 5: /* program_item: class_declaration  */
#line 152 "parser.y"
                                                                        { (yyval.program_item_un)=(yyvsp[0].program_item_un); }
#line 1499 "parser.tab.c"
    break;

  case 6: /* program_items_list_not_empty: program_item  */
#line 155 "parser.y"
                                                                        { (yyval.program_item_list_un)=create_program_item_list((yyvsp[0].program_item_un)); }
#line 1505 "parser.tab.c"
    break;

  case 7: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 156 "parser.y"
                                                                        { (yyval.program_item_list_un)=add_to_program_item_list((yyvsp[-1].program_item_list_un), (yyvsp[0].program_item_un)); }
#line 1511 "parser.tab.c"
    break;

  case 8: /* program_items_list: %empty  */
#line 159 "parser.y"
                                                                        { (yyval.program_item_list_un)=0; }
#line 1517 "parser.tab.c"
    break;

  case 9: /* program_items_list: program_items_list_not_empty  */
#line 160 "parser.y"
                                                                        { (yyval.program_item_list_un)=(yyvsp[0].program_item_list_un); }
#line 1523 "parser.tab.c"
    break;

  case 10: /* expr: INTEGER_NUMBER  */
#line 163 "parser.y"
                                                                                                     { (yyval.expr_un)=create_const_integer_expr(Integer, (yyvsp[0].int_un)); }
#line 1529 "parser.tab.c"
    break;

  case 11: /* expr: FLOAT_NUMBER  */
#line 164 "parser.y"
                                                                                                     { (yyval.expr_un)=create_const_float_expr((yyvsp[0].float_un)); }
#line 1535 "parser.tab.c"
    break;

  case 12: /* expr: STRING  */
#line 165 "parser.y"
                                                                                                     { (yyval.expr_un)=create_const_string_expr(String, (yyvsp[0].string_un)); }
#line 1541 "parser.tab.c"
    break;

  case 13: /* expr: TRUE  */
#line 166 "parser.y"
                                                                                                     { (yyval.expr_un)=create_const_integer_expr(Boolean, 1); }
#line 1547 "parser.tab.c"
    break;

  case 14: /* expr: FALSE  */
#line 167 "parser.y"
                                                                                                     { (yyval.expr_un)=create_const_integer_expr(Boolean, 0); }
#line 1553 "parser.tab.c"
    break;

  case 15: /* expr: LOGICAL_NOT_OP new_lines_op expr  */
#line 168 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(logical_not, (yyvsp[0].expr_un), 0); }
#line 1559 "parser.tab.c"
    break;

  case 16: /* expr: ARITHMETIC_PLUS_OP new_lines_op expr  */
#line 169 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(unary_plus, (yyvsp[0].expr_un), 0); }
#line 1565 "parser.tab.c"
    break;

  case 17: /* expr: expr ARITHMETIC_POW_OP new_lines_op expr  */
#line 170 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(pow_, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1571 "parser.tab.c"
    break;

  case 18: /* expr: ARITHMETIC_MINUS_OP new_lines_op expr  */
#line 171 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(unary_minus, (yyvsp[0].expr_un), 0); }
#line 1577 "parser.tab.c"
    break;

  case 19: /* expr: expr ARITHMETIC_MUL_OP new_lines_op expr  */
#line 172 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(mul, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1583 "parser.tab.c"
    break;

  case 20: /* expr: expr ARITHMETIC_DIV_OP new_lines_op expr  */
#line 173 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(div_, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1589 "parser.tab.c"
    break;

  case 21: /* expr: expr ARITHMETIC_MOD_OP new_lines_op expr  */
#line 174 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(mod, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1595 "parser.tab.c"
    break;

  case 22: /* expr: expr ARITHMETIC_PLUS_OP new_lines_op expr  */
#line 175 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(plus, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1601 "parser.tab.c"
    break;

  case 23: /* expr: expr ARITHMETIC_MINUS_OP new_lines_op expr  */
#line 176 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(minus, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1607 "parser.tab.c"
    break;

  case 24: /* expr: expr GREATER_OP new_lines_op expr  */
#line 177 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(greater, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1613 "parser.tab.c"
    break;

  case 25: /* expr: expr LESS_OP new_lines_op expr  */
#line 178 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(less, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1619 "parser.tab.c"
    break;

  case 26: /* expr: expr GREATER_OR_EQL_OP new_lines_op expr  */
#line 179 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(greater_eql, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1625 "parser.tab.c"
    break;

  case 27: /* expr: expr LESS_OR_EQL_OP new_lines_op expr  */
#line 180 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(less_eql, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1631 "parser.tab.c"
    break;

  case 28: /* expr: expr COMB_COMPRASION_OP new_lines_op expr  */
#line 181 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(comb_comprassion, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1637 "parser.tab.c"
    break;

  case 29: /* expr: expr EQL_OP new_lines_op expr  */
#line 182 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1643 "parser.tab.c"
    break;

  case 30: /* expr: expr CASE_EQL_OP new_lines_op expr  */
#line 183 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(case_equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1649 "parser.tab.c"
    break;

  case 31: /* expr: expr NOT_EQL_OP new_lines_op expr  */
#line 184 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(not_equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1655 "parser.tab.c"
    break;

  case 32: /* expr: expr LOGICAL_AND_OP new_lines_op expr  */
#line 185 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(logical_and, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1661 "parser.tab.c"
    break;

  case 33: /* expr: expr LOGICAL_OR_OP new_lines_op expr  */
#line 186 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(logical_or, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1667 "parser.tab.c"
    break;

  case 34: /* expr: expr INCLUSIVE_RANGE_OP new_lines_op expr  */
#line 187 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(inclusive_range, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1673 "parser.tab.c"
    break;

  case 35: /* expr: expr EXCLUSIVE_RANGE_OP new_lines_op expr  */
#line 188 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(exclusive_range, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1679 "parser.tab.c"
    break;

  case 36: /* expr: expr ASSIGN_OP new_lines_op expr  */
#line 189 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(assign, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1685 "parser.tab.c"
    break;

  case 37: /* expr: expr UNTIL new_lines_op expr  */
#line 190 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(until_op, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1691 "parser.tab.c"
    break;

  case 38: /* expr: expr WHILE new_lines_op expr  */
#line 191 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(while_op, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1697 "parser.tab.c"
    break;

  case 39: /* expr: DEFINED new_lines_op expr  */
#line 192 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(defined, (yyvsp[0].expr_un), 0); }
#line 1703 "parser.tab.c"
    break;

  case 40: /* expr: NOT new_lines_op expr  */
#line 193 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(not, (yyvsp[0].expr_un), 0); }
#line 1709 "parser.tab.c"
    break;

  case 41: /* expr: expr AND new_lines_op expr  */
#line 194 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(and, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1715 "parser.tab.c"
    break;

  case 42: /* expr: expr OR new_lines_op expr  */
#line 195 "parser.y"
                                                                                                     { (yyval.expr_un)=create_op_expr(or, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1721 "parser.tab.c"
    break;

  case 43: /* expr: OPEN_ROUND_BRACKET new_lines_op expr_list CLOSE_ROUND_BRACKET  */
#line 196 "parser.y"
                                                                                                     { (yyval.expr_un)=(yyvsp[-1].expr_list_un); }
#line 1727 "parser.tab.c"
    break;

  case 44: /* expr: expr OPEN_SQUARE_BRACKET new_lines_op expr CLOSE_SQUARE_BRACKET  */
#line 197 "parser.y"
                                                                                                         { (yyval.expr_un)=create_op_expr(member_access, (yyvsp[-4].expr_un), (yyvsp[-1].expr_un)); }
#line 1733 "parser.tab.c"
    break;

  case 45: /* expr: OPEN_SQUARE_BRACKET new_lines_op expr_list CLOSE_SQUARE_BRACKET  */
#line 198 "parser.y"
                                                                                                     { (yyval.expr_un)=create_array_struct((yyvsp[-1].expr_list_un)); }
#line 1739 "parser.tab.c"
    break;

  case 46: /* expr: VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET new_lines_op expr_list CLOSE_ROUND_BRACKET  */
#line 199 "parser.y"
                                                                                                        { (yyval.expr_un)=create_method_call_expr((yyvsp[-4].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 1745 "parser.tab.c"
    break;

  case 47: /* expr: VAR_OR_METHOD_NAME  */
#line 200 "parser.y"
                                                                                                        { (yyval.expr_un)=create_const_string_expr(var_or_method, (yyvsp[0].var_name_un)); }
#line 1751 "parser.tab.c"
    break;

  case 48: /* expr: INSTANCE_VAR_NAME  */
#line 201 "parser.y"
                                                                                                     { (yyval.expr_un)=create_const_string_expr(instance_var, (yyvsp[0].instance_var_name_un)); }
#line 1757 "parser.tab.c"
    break;

  case 49: /* expr: expr DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME  */
#line 202 "parser.y"
                                                                                                        { (yyval.expr_un)=create_field_call_expr((yyvsp[-3].expr_un), (yyvsp[0].var_name_un)); }
#line 1763 "parser.tab.c"
    break;

  case 50: /* expr: expr DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 203 "parser.y"
                                                                                                        { (yyval.expr_un)=create_object_method_call_expr((yyvsp[-6].expr_un), (yyvsp[-3].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 1769 "parser.tab.c"
    break;

  case 51: /* expr: SELF DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME  */
#line 204 "parser.y"
                                                                                                        { (yyval.expr_un)=create_self_field_call_expr((yyvsp[0].var_name_un)); }
#line 1775 "parser.tab.c"
    break;

  case 52: /* expr: SELF DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 205 "parser.y"
                                                                                                        { (yyval.expr_un)=create_self_method_call_expr((yyvsp[-3].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 1781 "parser.tab.c"
    break;

  case 63: /* stmt: expr stmt_ends  */
#line 226 "parser.y"
                                    { (yyval.stmt_un)=create_expr_stmt((yyvsp[-1].expr_un)); }
#line 1787 "parser.tab.c"
    break;

  case 64: /* stmt: if_stmt stmt_ends_op  */
#line 227 "parser.y"
                                    { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1793 "parser.tab.c"
    break;

  case 65: /* stmt: for_stmt stmt_ends_op  */
#line 228 "parser.y"
                                    { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1799 "parser.tab.c"
    break;

  case 66: /* stmt: while_stmt stmt_ends_op  */
#line 229 "parser.y"
                                    { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1805 "parser.tab.c"
    break;

  case 67: /* stmt: until_stmt stmt_ends_op  */
#line 230 "parser.y"
                                    { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 1811 "parser.tab.c"
    break;

  case 68: /* stmt: RETURN expr stmt_ends  */
#line 231 "parser.y"
                                    { (yyval.stmt_un)=create_return_stmt((yyvsp[-1].expr_un)); }
#line 1817 "parser.tab.c"
    break;

  case 69: /* stmt: RETURN stmt_ends  */
#line 232 "parser.y"
                                    { (yyval.stmt_un)=create_return_stmt(0); }
#line 1823 "parser.tab.c"
    break;

  case 70: /* stmt_list_not_empty: stmt  */
#line 235 "parser.y"
                                    { (yyval.stmt_list_un)=create_stmt_list((yyvsp[0].stmt_un)); }
#line 1829 "parser.tab.c"
    break;

  case 71: /* stmt_list_not_empty: stmt_list_not_empty stmt  */
#line 236 "parser.y"
                                    { (yyval.stmt_list_un)=add_to_stmt_list((yyvsp[-1].stmt_list_un), (yyvsp[0].stmt_un)); }
#line 1835 "parser.tab.c"
    break;

  case 72: /* stmt_list: %empty  */
#line 239 "parser.y"
                                    { (yyval.stmt_list_un)=0; }
#line 1841 "parser.tab.c"
    break;

  case 73: /* stmt_list: stmt_list_not_empty  */
#line 240 "parser.y"
                                    { (yyval.stmt_list_un)=(yyvsp[0].stmt_list_un); }
#line 1847 "parser.tab.c"
    break;

  case 74: /* if_start_stmt: IF new_lines_op expr stmt_ends stmt_list  */
#line 243 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-2].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1853 "parser.tab.c"
    break;

  case 75: /* if_start_stmt: IF new_lines_op expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list  */
#line 244 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-5].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1859 "parser.tab.c"
    break;

  case 76: /* if_start_stmt: IF new_lines_op expr new_lines_op THEN stmt_ends_op stmt_list  */
#line 245 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-4].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1865 "parser.tab.c"
    break;

  case 77: /* elsif_stmt: ELSIF new_lines_op expr stmt_ends stmt_list  */
#line 248 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-2].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1871 "parser.tab.c"
    break;

  case 78: /* elsif_stmt: ELSIF new_lines_op expr new_lines_op THEN stmt_ends_op stmt_list  */
#line 249 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-4].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1877 "parser.tab.c"
    break;

  case 79: /* elsif_stmt: ELSIF new_lines_op expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list  */
#line 250 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-5].expr_un), (yyvsp[0].stmt_list_un)); }
#line 1883 "parser.tab.c"
    break;

  case 80: /* elsif_stmt_list: elsif_stmt  */
#line 253 "parser.y"
                                                                                            { (yyval.elsif_list_un)=create_elsif_stmt_list((yyvsp[0].if_part_un)); }
#line 1889 "parser.tab.c"
    break;

  case 81: /* elsif_stmt_list: elsif_stmt_list elsif_stmt  */
#line 254 "parser.y"
                                                                                            { (yyval.elsif_list_un)=add_to_elsif_stmt_list((yyvsp[-1].elsif_list_un), (yyvsp[0].if_part_un)); }
#line 1895 "parser.tab.c"
    break;

  case 82: /* if_stmt: if_start_stmt END  */
#line 257 "parser.y"
                                                                                            { (yyval.stmt_un)=create_if_stmt((yyvsp[-1].if_part_un), 0, 0); }
#line 1901 "parser.tab.c"
    break;

  case 83: /* if_stmt: if_start_stmt ELSE stmt_ends_op stmt_list END  */
#line 258 "parser.y"
                                                                                            { (yyval.stmt_un)=create_if_stmt((yyvsp[-4].if_part_un), 0, (yyvsp[-1].stmt_list_un)); }
#line 1907 "parser.tab.c"
    break;

  case 84: /* if_stmt: if_start_stmt elsif_stmt_list END  */
#line 259 "parser.y"
                                                                                            { (yyval.stmt_un)=create_if_stmt((yyvsp[-2].if_part_un), (yyvsp[-1].elsif_list_un), 0); }
#line 1913 "parser.tab.c"
    break;

  case 85: /* if_stmt: if_start_stmt elsif_stmt_list ELSE stmt_ends_op stmt_list END  */
#line 260 "parser.y"
                                                                                            { (yyval.stmt_un)=create_if_stmt((yyvsp[-5].if_part_un), (yyvsp[-4].elsif_list_un), (yyvsp[-1].stmt_list_un)); }
#line 1919 "parser.tab.c"
    break;

  case 86: /* for_stmt: FOR new_lines_op VAR_OR_METHOD_NAME IN new_lines_op expr stmt_ends stmt_list END  */
#line 263 "parser.y"
                                                                                               { (yyval.stmt_un)=create_for_stmt((yyvsp[-6].var_name_un), (yyvsp[-3].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 1925 "parser.tab.c"
    break;

  case 87: /* for_stmt: FOR new_lines_op INSTANCE_VAR_NAME IN new_lines_op expr stmt_ends stmt_list END  */
#line 264 "parser.y"
                                                                                            { (yyval.stmt_un)=create_for_stmt((yyvsp[-6].instance_var_name_un), (yyvsp[-3].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 1931 "parser.tab.c"
    break;

  case 88: /* for_stmt: FOR new_lines_op VAR_OR_METHOD_NAME IN new_lines_op expr DO stmt_ends_op stmt_list END  */
#line 265 "parser.y"
                                                                                                   { (yyval.stmt_un)=create_for_stmt((yyvsp[-7].var_name_un), (yyvsp[-4].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 1937 "parser.tab.c"
    break;

  case 89: /* for_stmt: FOR new_lines_op INSTANCE_VAR_NAME IN new_lines_op expr DO stmt_ends_op stmt_list END  */
#line 266 "parser.y"
                                                                                            { (yyval.stmt_un)=create_for_stmt((yyvsp[-7].instance_var_name_un), (yyvsp[-4].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 1943 "parser.tab.c"
    break;

  case 90: /* while_stmt: WHILE new_lines_op expr stmt_ends stmt_list END  */
#line 269 "parser.y"
                                                                                            { (yyval.stmt_un)=create_while_stmt((yyvsp[-3].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 1949 "parser.tab.c"
    break;

  case 91: /* while_stmt: WHILE new_lines_op expr DO stmt_ends_op stmt_list END  */
#line 270 "parser.y"
                                                                                                { (yyval.stmt_un)=create_while_stmt((yyvsp[-4].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 1955 "parser.tab.c"
    break;

  case 92: /* until_stmt: UNTIL new_lines_op expr stmt_ends stmt_list END  */
#line 273 "parser.y"
                                                                                            { (yyval.stmt_un)=create_until_stmt((yyvsp[-3].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 1961 "parser.tab.c"
    break;

  case 93: /* until_stmt: UNTIL new_lines_op expr DO stmt_ends_op stmt_list END  */
#line 274 "parser.y"
                                                                                                { (yyval.stmt_un)=create_until_stmt((yyvsp[-4].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 1967 "parser.tab.c"
    break;

  case 94: /* method_param: VAR_OR_METHOD_NAME  */
#line 277 "parser.y"
                                                                                               { (yyval.method_param_un)=create_method_param_struct((yyvsp[0].var_name_un), 0); }
#line 1973 "parser.tab.c"
    break;

  case 95: /* method_param: VAR_OR_METHOD_NAME ASSIGN_OP expr  */
#line 278 "parser.y"
                                                                                                   { (yyval.method_param_un)=create_method_param_struct((yyvsp[-2].var_name_un), (yyvsp[0].expr_un)); }
#line 1979 "parser.tab.c"
    break;

  case 96: /* method_params_list: %empty  */
#line 281 "parser.y"
                                                                                            { (yyval.method_param_list_un)=0; }
#line 1985 "parser.tab.c"
    break;

  case 97: /* method_params_list: method_params_list_not_empty  */
#line 282 "parser.y"
                                                                                                { (yyval.method_param_list_un)=(yyvsp[0].method_param_list_un); }
#line 1991 "parser.tab.c"
    break;

  case 98: /* method_params_list_not_empty: method_param  */
#line 285 "parser.y"
                                                                                            { (yyval.method_param_list_un)=create_method_param_list((yyvsp[0].method_param_un)); }
#line 1997 "parser.tab.c"
    break;

  case 99: /* method_params_list_not_empty: method_params_list_not_empty COMMA_SYMBOL new_lines_op method_param  */
#line 286 "parser.y"
                                                                                                { (yyval.method_param_list_un)=add_to_method_param_list((yyvsp[-3].method_param_list_un), (yyvsp[0].method_param_un)); }
#line 2003 "parser.tab.c"
    break;

  case 100: /* def_method_stmt: DEF VAR_OR_METHOD_NAME stmt_ends stmt_list END stmt_ends_op  */
#line 289 "parser.y"
                                                                                                                                   { (yyval.def_method_un)=create_def_method_struct((yyvsp[-4].var_name_un), 0, (yyvsp[-2].stmt_list_un)); }
#line 2009 "parser.tab.c"
    break;

  case 101: /* def_method_stmt: DEF VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET method_params_list CLOSE_ROUND_BRACKET stmt_ends_op stmt_list END stmt_ends_op  */
#line 290 "parser.y"
                                                                                                                                   { (yyval.def_method_un)=create_def_method_struct((yyvsp[-7].var_name_un), (yyvsp[-5].method_param_list_un), (yyvsp[-2].stmt_list_un)); }
#line 2015 "parser.tab.c"
    break;

  case 102: /* expr_list: %empty  */
#line 293 "parser.y"
                                                                                                    { (yyval.expr_list_un)=0; }
#line 2021 "parser.tab.c"
    break;

  case 103: /* expr_list: expr_list_not_empty  */
#line 294 "parser.y"
                                                                                                        {(yyval.expr_list_un)=(yyvsp[0].expr_list_un); }
#line 2027 "parser.tab.c"
    break;

  case 104: /* expr_list_not_empty: expr new_lines_op  */
#line 297 "parser.y"
                                                                                                    { (yyval.expr_list_un)=create_expr_list((yyvsp[-1].expr_un)); }
#line 2033 "parser.tab.c"
    break;

  case 105: /* expr_list_not_empty: expr_list_not_empty COMMA_SYMBOL new_lines_op expr new_lines_op  */
#line 298 "parser.y"
                                                                                                        { (yyval.expr_list_un)=add_to_expr_list((yyvsp[-4].expr_list_un), (yyvsp[-1].expr_un)); }
#line 2039 "parser.tab.c"
    break;

  case 106: /* class_declaration: CLASS CLASS_NAME stmt_ends def_method_list_op END stmt_ends  */
#line 301 "parser.y"
                                                                                                    { (yyval.program_item_un)=create_class_declaration_program_item((yyvsp[-4].class_name_un), 0, (yyvsp[-2].def_method_list_un)); puts("class declaration"); }
#line 2045 "parser.tab.c"
    break;

  case 107: /* class_declaration: CLASS CLASS_NAME LESS_OP new_lines_op CLASS_NAME stmt_ends def_method_list_op END stmt_ends  */
#line 302 "parser.y"
                                                                                                    { (yyval.program_item_un)=create_class_declaration_program_item((yyvsp[-7].class_name_un), (yyvsp[-4].class_name_un), (yyvsp[-2].def_method_list_un)); puts("class declaration"); }
#line 2051 "parser.tab.c"
    break;

  case 108: /* def_method_list_op: %empty  */
#line 306 "parser.y"
                                                                                                    { (yyval.def_method_list_un)=0; }
#line 2057 "parser.tab.c"
    break;

  case 109: /* def_method_list_op: def_method_list  */
#line 307 "parser.y"
                                                                                                    { (yyval.def_method_list_un)=(yyvsp[0].def_method_list_un); }
#line 2063 "parser.tab.c"
    break;

  case 110: /* def_method_list: def_method_stmt  */
#line 310 "parser.y"
                                                                                                    { (yyval.def_method_list_un)=create_def_method_list((yyvsp[0].def_method_un)); }
#line 2069 "parser.tab.c"
    break;

  case 111: /* def_method_list: def_method_list def_method_stmt  */
#line 311 "parser.y"
                                                                                                    { (yyval.def_method_list_un)=add_to_def_method_list((yyvsp[-1].def_method_list_un), (yyvsp[0].def_method_un)); }
#line 2075 "parser.tab.c"
    break;


#line 2079 "parser.tab.c"

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

#line 314 "parser.y"


// void yyerror(const char* s) {
// 	fprintf(stderr, "Parse error: %s\n", s);
// 	exit(1);
// }

void yyerror(const char* message) {
    fprintf(stderr, message);
}
