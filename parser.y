%{
#include <stdio.h>
#include "tree_nodes.h"
#include "print_tree.h"
#include "create_tree.c"

struct program_struct * root;
void yyerror(const char* s);
%}

%union {
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
}

%type <expr_un> expr
%type <stmt_un> stmt
%type <stmt_un> for_stmt
%type <stmt_un> while_stmt
%type <stmt_un> until_stmt
%type <stmt_un> if_stmt 
%type <def_method_un> def_method_stmt
%type <program_item_un> program_item 
%type <program_item_un> class_declaration
%type <def_method_list_un> def_method_list_op
%type <def_method_list_un> def_method_list
%type <stmt_list_un> stmt_list
%type <stmt_list_un> stmt_list_not_empty
%type <expr_list_un> expr_list_not_empty
%type <expr_list_un> expr_list
%type <if_part_un> if_start_stmt 
%type <if_part_un> elsif_stmt
%type <elsif_list_un> elsif_stmt_list
%type <method_param_un> method_param
%type <method_param_list_un> method_params_list_not_empty
%type <method_param_list_un> method_params_list
%type <program_un> program
%type <program_item_list_un> program_items_list
%type <program_item_list_un> program_items_list_not_empty

%token AND
%token CLASS
%token DEF
%token DEFINED
%token DO
%token IF
%token ELSE
%token ELSIF
%token END
%token FALSE
%token FOR
%token IN
%token NOT
%token OR
%token RETURN
%token SELF
%token THEN
%token TRUE
%token UNTIL
%token WHILE

%token ARITHMETIC_PLUS_OP
%token ARITHMETIC_MINUS_OP
%token ARITHMETIC_MUL_OP
%token ARITHMETIC_DIV_OP
%token ARITHMETIC_MOD_OP
%token ARITHMETIC_POW_OP

%token EQL_OP
%token NOT_EQL_OP
%token GREATER_OP
%token LESS_OP
%token GREATER_OR_EQL_OP
%token LESS_OR_EQL_OP
%token COMB_COMPRASION_OP
%token CASE_EQL_OP

%token ASSIGN_OP

%token LOGICAL_AND_OP
%token LOGICAL_OR_OP
%token LOGICAL_NOT_OP

%token INCLUSIVE_RANGE_OP
%token EXCLUSIVE_RANGE_OP

%token OPEN_ROUND_BRACKET
%token CLOSE_ROUND_BRACKET
%token OPEN_CURLY_BRACKET
%token CLOSE_CURLY_BRACKET
%token OPEN_SQUARE_BRACKET
%token CLOSE_SQUARE_BRACKET

%token DOT_SYMBOL
%token COMMA_SYMBOL
%token SEMICOLON_SYMBOL
%token NEW_LINE_SYMBOL

%token <string_un> STRING
%token <int_un> INTEGER_NUMBER
%token <float_un> FLOAT_NUMBER

%token <var_name_un> VAR_METHOD_NAME
%token <instance_var_name_un> INSTANCE_VAR_NAME
%token <class_name_un> CLASS_NAME


%start program

%left UNTIL WHILE
%left AND OR
%right NOT
%left DEFINED
%right ASSIGN_OP
%nonassoc INCLUSIVE_RANGE_OP EXCLUSIVE_RANGE_OP
%left LOGICAL_OR_OP
%left LOGICAL_AND_OP
%nonassoc COMB_COMPRASION_OP EQL_OP CASE_EQL_OP NOT_EQL_OP
%left GREATER_OP LESS_OP GREATER_OR_EQL_OP LESS_OR_EQL_OP
%left ARITHMETIC_PLUS_OP ARITHMETIC_MINUS_OP
%left ARITHMETIC_MUL_OP ARITHMETIC_DIV_OP ARITHMETIC_MOD_OP
%right UNARY_MINUS
%right LOGICAL_NOT_OP UNARY_PLUS ARITHMETIC_POW_OP  
%left OPEN_SQUARE_BRACKET CLOSE_SQUARE_BRACKET DOT_SYMBOL
%nonassoc OPEN_ROUND_BRACKET CLOSE_ROUND_BRACKET

%%
program: program_items_list                                             { root=create_program_struct($1); }
    ;

program_item : stmt                                                     { $$=create_stmt_program_item($1); }
    | def_method_stmt                                                   { $$=create_def_method_program_item($1); }
    | class_declaration                                                 { $$=$1; }
    ;

program_items_list_not_empty: program_item                              { $$=create_program_item_list($1); }
    | program_items_list_not_empty program_item                         { $$=add_to_program_item_list($1, $2); }
    ;

program_items_list: /* empty */                                         { $$=0; }
    | program_items_list_not_empty                                      { $$=$1; }
    ;

expr: INTEGER_NUMBER                                                                                 { $$=create_const_integer_expr(Integer, $1); }
    | FLOAT_NUMBER                                                                                   { $$=create_const_float_expr($1); }
    | STRING                                                                                         { $$=create_const_string_expr(String, $1); }    
    | TRUE                                                                                           { $$=create_const_integer_expr(Boolean, 1); }
    | FALSE                                                                                          { $$=create_const_integer_expr(Boolean, 0); }
    | LOGICAL_NOT_OP new_lines_op expr                                                               { $$=create_op_expr(logical_not, $3, 0); }
    | ARITHMETIC_PLUS_OP new_lines_op expr %prec UNARY_PLUS                                          { $$=create_op_expr(unary_plus, $3, 0); }
    | expr ARITHMETIC_POW_OP new_lines_op expr                                                       { $$=create_op_expr(pow_, $1, $4); }
    | ARITHMETIC_MINUS_OP new_lines_op expr %prec UNARY_MINUS                                        { $$=create_op_expr(unary_minus, $3, 0); }
    | expr ARITHMETIC_MUL_OP new_lines_op expr                                                       { $$=create_op_expr(mul, $1, $4); }
    | expr ARITHMETIC_DIV_OP new_lines_op expr                                                       { $$=create_op_expr(div_, $1, $4); }
    | expr ARITHMETIC_MOD_OP new_lines_op expr                                                       { $$=create_op_expr(mod, $1, $4); }
    | expr ARITHMETIC_PLUS_OP new_lines_op expr                                                      { $$=create_op_expr(plus, $1, $4); }
    | expr ARITHMETIC_MINUS_OP new_lines_op expr                                                     { $$=create_op_expr(minus, $1, $4); }
    | expr GREATER_OP new_lines_op expr                                                              { $$=create_op_expr(greater, $1, $4); }
    | expr LESS_OP new_lines_op expr                                                                 { $$=create_op_expr(less, $1, $4); }
    | expr GREATER_OR_EQL_OP new_lines_op expr                                                       { $$=create_op_expr(greater_eql, $1, $4); }
    | expr LESS_OR_EQL_OP new_lines_op expr                                                          { $$=create_op_expr(less_eql, $1, $4); }
    | expr COMB_COMPRASION_OP new_lines_op expr                                                      { $$=create_op_expr(comb_comprassion, $1, $4); }
    | expr EQL_OP new_lines_op expr                                                                  { $$=create_op_expr(equal, $1, $4); }
    | expr CASE_EQL_OP new_lines_op expr                                                             { $$=create_op_expr(case_equal, $1, $4); }
    | expr NOT_EQL_OP new_lines_op expr                                                              { $$=create_op_expr(not_equal, $1, $4); }
    | expr LOGICAL_AND_OP new_lines_op expr                                                          { $$=create_op_expr(logical_and, $1, $4); }
    | expr LOGICAL_OR_OP new_lines_op expr                                                           { $$=create_op_expr(logical_or, $1, $4); }
    | expr INCLUSIVE_RANGE_OP new_lines_op expr                                                      { $$=create_op_expr(inclusive_range, $1, $4); }
    | expr EXCLUSIVE_RANGE_OP new_lines_op expr                                                      { $$=create_op_expr(exclusive_range, $1, $4); }
    | expr ASSIGN_OP new_lines_op expr                                                               { $$=create_op_expr(assign, $1, $4); }    
    | expr UNTIL new_lines_op expr                                                                   { $$=create_op_expr(until_op, $1, $4); }  
    | expr WHILE new_lines_op expr                                                                   { $$=create_op_expr(while_op, $1, $4); }  
    | DEFINED new_lines_op expr                                                                      { $$=create_op_expr(defined, $3, 0); }
    | NOT new_lines_op expr                                                                          { $$=create_op_expr(not, $3, 0); }
    | expr AND new_lines_op expr                                                                     { $$=create_op_expr(and, $1, $4); }
    | expr OR new_lines_op expr                                                                      { $$=create_op_expr(or, $1, $4); }
    | OPEN_ROUND_BRACKET new_lines_op expr_list CLOSE_ROUND_BRACKET                                  { $$=$3; }
	| expr OPEN_SQUARE_BRACKET new_lines_op expr CLOSE_SQUARE_BRACKET                                { $$=create_op_expr(member_access, $1, $4); }
    | OPEN_SQUARE_BRACKET new_lines_op expr_list CLOSE_SQUARE_BRACKET                                { $$=create_array_struct($3); }
    | VAR_METHOD_NAME OPEN_ROUND_BRACKET new_lines_op expr_list CLOSE_ROUND_BRACKET                  { $$=create_method_call_expr($1, $4); }
    | VAR_METHOD_NAME                                                                                { $$=create_const_string_expr(var_or_method, $1); }     
    | INSTANCE_VAR_NAME                                                                              { $$=create_const_string_expr(instance_var, $1); }
    | expr DOT_SYMBOL new_lines_op VAR_METHOD_NAME                                                   { $$=create_field_call_expr($1, $4); }
    | expr DOT_SYMBOL new_lines_op VAR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  { $$=create_object_method_call_expr($1, $4, $6); }
    | SELF DOT_SYMBOL new_lines_op VAR_METHOD_NAME                                                   { $$=create_self_field_call_expr($4); }
    | SELF DOT_SYMBOL new_lines_op VAR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  { $$=create_self_method_call_expr($4, $6); }
    ;

stmt_ends: SEMICOLON_SYMBOL
    | NEW_LINE_SYMBOL
    | SEMICOLON_SYMBOL stmt_ends
    | NEW_LINE_SYMBOL stmt_ends
    ;

new_lines_op: /* empty */
    | new_lines
    ;

new_lines: NEW_LINE_SYMBOL
    | NEW_LINE_SYMBOL new_lines
    ;

stmt_ends_op: /* empty */
    | stmt_ends
    ;

stmt: expr stmt_ends                { $$=create_expr_stmt($1); }     
    | if_stmt stmt_ends_op          { $$=$1; }
    | for_stmt stmt_ends_op         { $$=$1; }
    | while_stmt stmt_ends_op       { $$=$1; }
    | until_stmt stmt_ends_op       { $$=$1; }
    | RETURN expr stmt_ends         { $$=create_return_stmt($2); }
    | RETURN stmt_ends              { $$=create_return_stmt(0); }
    ;

stmt_list_not_empty: stmt           { $$=create_stmt_list($1); }
    | stmt_list_not_empty stmt      { $$=add_to_stmt_list($1, $2); }
    ;

stmt_list: /* empty */              { $$=0; }
    | stmt_list_not_empty           { $$=$1; }
    ;

if_start_stmt: IF new_lines_op expr stmt_ends stmt_list                                     { $$=create_if_part_struct($3, $5); }
    | IF new_lines_op expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list        { $$=create_if_part_struct($3, $8); }
    | IF new_lines_op expr new_lines_op THEN stmt_ends_op stmt_list                         { $$=create_if_part_struct($3, $7); }
    ;

elsif_stmt: ELSIF new_lines_op expr stmt_ends stmt_list                                     { $$=create_if_part_struct($3, $5); } 
    | ELSIF new_lines_op expr new_lines_op THEN stmt_ends_op stmt_list                      { $$=create_if_part_struct($3, $7); } 
    | ELSIF new_lines_op expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list     { $$=create_if_part_struct($3, $8); } 
    ;

elsif_stmt_list: elsif_stmt                                                                 { $$=create_elsif_stmt_list($1); } 
    | elsif_stmt_list elsif_stmt                                                            { $$=add_to_elsif_stmt_list($1, $2); }
    ;

if_stmt: if_start_stmt END                                                                  { $$=create_if_stmt($1, 0, 0); }
    | if_start_stmt ELSE stmt_ends_op stmt_list END                                         { $$=create_if_stmt($1, 0, $4); }
    | if_start_stmt elsif_stmt_list END                                                     { $$=create_if_stmt($1, $2, 0); }
    | if_start_stmt elsif_stmt_list ELSE stmt_ends_op stmt_list END                         { $$=create_if_stmt($1, $2, $5); }
    ;

for_stmt: FOR new_lines_op VAR_METHOD_NAME IN new_lines_op expr stmt_ends stmt_list END     { $$=create_for_stmt($3, $6, $8); } 
    | FOR new_lines_op INSTANCE_VAR_NAME IN new_lines_op expr stmt_ends stmt_list END       { $$=create_for_stmt($3, $6, $8); } 
	| FOR new_lines_op VAR_METHOD_NAME IN new_lines_op expr DO stmt_ends_op stmt_list END   { $$=create_for_stmt($3, $6, $9); } 
    | FOR new_lines_op INSTANCE_VAR_NAME IN new_lines_op expr DO stmt_ends_op stmt_list END { $$=create_for_stmt($3, $6, $9); }
	;

while_stmt: WHILE new_lines_op expr stmt_ends stmt_list END                                 { $$=create_while_stmt($3, $5); }
	| WHILE new_lines_op expr DO stmt_ends_op stmt_list END                                 { $$=create_while_stmt($3, $6); }
	;

until_stmt: UNTIL new_lines_op expr stmt_ends stmt_list END                                 { $$=create_until_stmt($3, $5); }
	| UNTIL new_lines_op expr DO stmt_ends_op stmt_list END                                 { $$=create_until_stmt($3, $6); }
	;

method_param: VAR_METHOD_NAME                                                               { $$=create_method_param_struct($1, 0); }
	| VAR_METHOD_NAME ASSIGN_OP expr                                                        { $$=create_method_param_struct($1, $3); }
	;

method_params_list: /* empty */                                                             { $$=0; }
	| method_params_list_not_empty                                                          { $$=$1; }
	;

method_params_list_not_empty: method_param                                                  { $$=create_method_param_list($1); }
	| method_params_list_not_empty COMMA_SYMBOL new_lines_op method_param                   { $$=add_to_method_param_list($1, $4); }
	;

def_method_stmt: DEF VAR_METHOD_NAME stmt_ends stmt_list END stmt_ends_op                                                       { $$=create_def_method_struct($2, 0, $4); }
    | DEF VAR_METHOD_NAME OPEN_ROUND_BRACKET method_params_list CLOSE_ROUND_BRACKET stmt_ends_op stmt_list END stmt_ends_op     { $$=create_def_method_struct($2, $4, $7); }
    ;

expr_list: /* empty */                                                                              { $$=0; }
	| expr_list_not_empty                                                                           {$$=$1; }
	;

expr_list_not_empty: expr new_lines_op                                                              { $$=create_expr_list($1); }
	| expr_list_not_empty COMMA_SYMBOL new_lines_op expr new_lines_op                               { $$=add_to_expr_list($1, $4); }
	;

class_declaration: CLASS CLASS_NAME stmt_ends def_method_list_op END stmt_ends                      { $$=create_class_declaration_program_item($2, 0, $4); puts("class declaration"); }
    | CLASS CLASS_NAME LESS_OP new_lines_op CLASS_NAME stmt_ends def_method_list_op END stmt_ends   { $$=create_class_declaration_program_item($2, $5, $7); puts("class declaration"); }
    ;


def_method_list_op: /* empty */                                                                     { $$=0; }
    | def_method_list                                                                               { $$=$1; }
    ;

def_method_list: def_method_stmt                                                                    { $$=create_def_method_list($1); }
    | def_method_list def_method_stmt                                                               { $$=add_to_def_method_list($1, $2); }
    ;

%%

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}