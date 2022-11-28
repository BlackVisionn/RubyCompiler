%{
#include <stdio.h>
#include <stdbool.h>
#include "tree_nodes.h"
#include "create_tree.c"
#include "print_tree.h"

extern int yylex(void);

struct program_struct * root;

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
    struct stmt_block_struct* block_un;
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
%type <def_method_list_un> def_method_list
%type <stmt_list_un> stmt_list
%type <stmt_list_un> stmt_list_not_empty
%type <expr_list_un> expr_list_not_empty
%type <expr_list_un> expr_list
%type <if_part_un> if_start_stmt 
%type <if_part_un> elsif_stmt
%type <elsif_list_un> elsif_stmt_list
%type <block_un> stmt_block
%type <method_param_un> method_param
%type <method_param_list_un> method_params_list
%type <method_param_list_un> method_params_list_not_empty
%type <program_un> program
%type <program_item_list_un> program_items_list
%type <program_item_list_un> program_items_list_not_empty

%token ALIAS
%token AND
%token BEGIN
%token BREAK
%token CASE
%token CLASS
%token DEF
%token DEFINED
%token DO
%token IF
%token ELSE
%token ELSIF
%token END
%token ENSURE
%token FALSE
%token FOR
%token IN
%token MODULE
%token NEXT
%token NIL
%token NOT
%token OR
%token REDO
%token RESCUE
%token RETRY
%token RETURN
%token SELF
%token SUPER
%token THEN
%token TRUE
%token UNDEF
%token UNLESS
%token UNTIL
%token WHEN
%token WHILE
%token YIELD

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
%token RECEIVER_EQL_OP
%token OBJ_ID_EQL_OP

%token ASSIGN_OP
%token ADD_ASSIGN_OP
%token SUB_ASSIGN_OP
%token MUL_ASSIGN_OP
%token DIV_ASSIGN_OP
%token MOD_ASSIGN_OP
%token POW_ASSIGN_OP

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
%token COMMERCIAL_AT

%token QUESTION_SYMBOL
%token DOT_SYMBOL
%token COMMA_SYMBOL
%token COLON_SYMBOL
%token DOUBLE_COLON_SYMBOL
%token SEMICOLON_SYMBOL
%token NEW_LINE_SYMBOL

%token <string_un> STRING 
%token <int_un> INTEGER_NUMBER
%token <float_un> FLOAT_NUMBER

%token <var_name_un> VAR_OR_METHOD_NAME
%token <instance_var_name_un> INSTANCE_VAR_NAME
%token <class_var_name_un> CLASS_VAR_NAME
%token <class_name_un> CLASS_NAME

%start program

%left UNTIL WHILE
%left AND OR
%right NOT
%left DEFINED
%right ASSIGN_OP MOD_ASSIGN_OP DIV_ASSIGN_OP SUB_ASSIGN_OP ADD_ASSIGN_OP MUL_ASSIGN_OP POW_ASSIGN_OP
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
program: program_items_list                                                                { root=create_program_struct($1); }
    ;

program_item : stmt                                                                        { $$=create_stmt_program_item($1); }
    | def_method_stmt                                                                      { $$=create_def_method_program_item($1); }
    | class_declaration                                                                    { $$=$1; }
    ;

program_items_list_not_empty: program_item                                                 { $$=create_program_item_list($1); }
    | program_items_list_not_empty program_item                                            { $$=add_to_program_item_list($1, $2); }
    ;

program_items_list:                                                                        { $$=0; }
    | program_items_list_not_empty                                                         { $$=$1; }
    ;                              

expr: INTEGER_NUMBER                                                                       { $$=create_const_integer_expr(Integer, $1); }
    | FLOAT_NUMBER                                                                         { $$=create_const_float_expr($1);}
    | STRING                                                                               { $$=create_const_string_expr(String, $1); }
    | NIL                                                                                  { }
    | SUPER                                                                                { }
    | TRUE                                                                                 { $$=create_const_integer_expr(Boolean, 1); }
    | FALSE                                                                                { $$=create_const_integer_expr(Boolean, 0); }
    | LOGICAL_NOT_OP expr                                                                  { $$=create_op_expr(logical_not, $2, 0); }
    | ARITHMETIC_PLUS_OP expr %prec UNARY_PLUS                                             { $$=create_op_expr(unary_plus, $2, 0); }
    | expr ARITHMETIC_POW_OP expr                                                          { $$=create_op_expr(pow_, $1, $3); }
    | ARITHMETIC_MINUS_OP expr %prec UNARY_MINUS                                           { $$=create_op_expr(unary_minus, $2, 0); }
    | expr ARITHMETIC_MUL_OP expr                                                          { $$=create_op_expr(mul, $1, $3); }
    | expr ARITHMETIC_DIV_OP expr                                                          { $$=create_op_expr(div_, $1, $3); }
    | expr ARITHMETIC_MOD_OP expr                                                          { $$=create_op_expr(mod, $1, $3); }
    | expr ARITHMETIC_PLUS_OP expr                                                         { $$=create_op_expr(plus, $1, $3); }
    | expr ARITHMETIC_MINUS_OP expr                                                        { $$=create_op_expr(minus, $1, $3); }
    | expr GREATER_OP expr                                                                 { $$=create_op_expr(greater, $1, $3); }
    | expr LESS_OP expr                                                                    { $$=create_op_expr(less, $1, $3); }
    | expr GREATER_OR_EQL_OP expr                                                          { $$=create_op_expr(greater_eql, $1, $3); }
    | expr LESS_OR_EQL_OP expr                                                             { $$=create_op_expr(less_eql, $1, $3); }
    | expr COMB_COMPRASION_OP expr                                                         { $$=create_op_expr(comb_comprassion, $1, $3); }
    | expr EQL_OP expr                                                                     { $$=create_op_expr(equal, $1, $3); }
    | expr CASE_EQL_OP expr                                                                { $$=create_op_expr(case_equal, $1, $3); }
    | expr NOT_EQL_OP expr                                                                 { $$=create_op_expr(not_equal, $1, $3); }
    | expr LOGICAL_AND_OP expr                                                             { $$=create_op_expr(logical_and, $1, $3); }
    | expr LOGICAL_OR_OP expr                                                              { $$=create_op_expr(logical_or, $1, $3); }
    | expr INCLUSIVE_RANGE_OP expr                                                         { $$=create_op_expr(inclusive_range, $1, $3); }
    | expr EXCLUSIVE_RANGE_OP expr                                                         { $$=create_op_expr(exclusive_range, $1, $3); }
    | expr ASSIGN_OP expr                                                                  { $$=create_op_expr(assign, $1, $3); }
    | expr UNTIL expr                                                                      { $$=create_op_expr(until_op, $1, $3); }  
    | expr WHILE expr                                                                      { $$=create_op_expr(while_op, $1, $3); }  
    | DEFINED expr                                                                         { $$=create_op_expr(defined, $2, 0); }
    | NOT expr                                                                             { $$=create_op_expr(not, $2, 0); }
    | expr AND expr                                                                        { $$=create_op_expr(and, $1, $3); }
    | expr OR expr                                                                         { $$=create_op_expr(or, $1, $3); }
    | OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET                                     { $$=$2; }
	| expr OPEN_SQUARE_BRACKET expr CLOSE_SQUARE_BRACKET                                   { $$=create_op_expr(member_access, $1, $3); }
    | OPEN_SQUARE_BRACKET new_lines_op expr_list CLOSE_SQUARE_BRACKET                      { $$=create_array_struct($3); }
    | VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET new_lines_op expr_list CLOSE_ROUND_BRACKET     { $$=create_method_call_expr($1, $4);}
    | VAR_OR_METHOD_NAME                                                                   { $$=create_const_string_expr(var_or_method, $1); }     
    | INSTANCE_VAR_NAME                                                                    { $$=create_const_string_expr(instance_var, $1); }
    | expr DOT_SYMBOL VAR_OR_METHOD_NAME                                                   { $$=create_field_call_expr($1, $3); }
    | expr DOT_SYMBOL VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  { $$=create_object_method_call_expr($1, $3, $5); }
    | SELF DOT_SYMBOL VAR_OR_METHOD_NAME                                                   { $$=create_self_field_call_expr($3); }
    | SELF DOT_SYMBOL VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  { $$=create_self_method_call_expr($3, $5); }
    ;

stmt_ends: SEMICOLON_SYMBOL
    | NEW_LINE_SYMBOL
    | SEMICOLON_SYMBOL stmt_ends
    | NEW_LINE_SYMBOL stmt_ends
    ;

new_lines_op:
    | new_lines
    ;

new_lines: NEW_LINE_SYMBOL
    | NEW_LINE_SYMBOL new_lines
    ;

stmt_ends_op:
    | stmt_ends
    ;

stmt: expr stmt_ends            { $$=create_expr_stmt($1); }
    | stmt_block                { $$=create_block_stmt($1); }
    | stmt_block stmt_ends      { $$=create_block_stmt($1); }
    | if_stmt                   { $$=$1; }
    | if_stmt stmt_ends         { $$=$1; }
    | for_stmt                  { $$=$1; }
    | for_stmt stmt_ends        { $$=$1; }
    | while_stmt                { $$=$1; }
    | while_stmt stmt_ends      { $$=$1; }
    | until_stmt                { $$=$1; }
    | until_stmt stmt_ends      { $$=$1; }
    | RETURN expr stmt_ends     { $$=create_return_stmt($2); }
    | RETURN stmt_ends          { $$=create_return_stmt(0); }
    ;

stmt_list_not_empty: stmt                                                                               { $$=create_stmt_list($1); }
    | stmt_list_not_empty stmt                                                                          { $$=add_to_stmt_list($1, $2); }
    ;

stmt_list:                                                                                              { $$=0; }
    | stmt_list_not_empty                                                                               { $$=$1; }
    ;

stmt_block: BEGIN stmt_ends_op stmt_list END stmt_ends_op                                               { $$=create_stmt_block_struct($3); }
    ;

if_start_stmt: IF expr stmt_ends stmt_list                                                              { $$=create_if_part_struct($2, $4); }                                
    | IF expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list                                 { $$=create_if_part_struct($2, $7); }
    | IF expr new_lines_op THEN stmt_ends_op stmt_list                                                  { $$=create_if_part_struct($2, $6); }                  
    ;

elsif_stmt: ELSIF expr stmt_ends stmt_list                                                              { $$=create_if_part_struct($2, $4); }                                     
    | ELSIF expr new_lines_op THEN stmt_ends_op stmt_list                                               { $$=create_if_part_struct($2, $6); }                     
    | ELSIF expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list                              { $$=create_if_part_struct($2, $7); }    
    ;

elsif_stmt_list: elsif_stmt                                                                             { $$=create_elsif_stmt_list($1); } 
    | elsif_stmt_list elsif_stmt                                                                        { $$=add_to_elsif_stmt_list($1, $2); } 
    ;

if_stmt: if_start_stmt END stmt_ends_op                                                                 { $$=create_if_stmt($1, 0, 0); }
    | if_start_stmt ELSE stmt_ends_op stmt_list END stmt_ends_op                                        { $$=create_if_stmt($1, 0, $4); } 
    | if_start_stmt elsif_stmt_list END stmt_ends_op                                                    { $$=create_if_stmt($1, $2, 0); }
    | if_start_stmt elsif_stmt_list ELSE stmt_ends_op stmt_list END stmt_ends_op                        { $$=create_if_stmt($1, $2, $5); }
    ;

for_stmt: FOR VAR_OR_METHOD_NAME IN expr stmt_ends stmt_list END stmt_ends_op                           { $$=create_for_stmt($2, $4, $6); } 
    | FOR INSTANCE_VAR_NAME IN expr stmt_ends stmt_list END stmt_ends_op                                { $$=create_for_stmt($2, $4, $6); } 
    | FOR VAR_OR_METHOD_NAME IN expr DO stmt_ends_op stmt_list END stmt_ends_op                         { $$=create_for_stmt($2, $4, $7); }
    | FOR INSTANCE_VAR_NAME IN expr DO stmt_ends_op stmt_list END stmt_ends_op                          { $$=create_for_stmt($2, $4, $7); }
	;

while_stmt: WHILE expr stmt_ends stmt_list END stmt_ends_op                                             { $$=create_while_stmt($2, $4); }
    | WHILE expr DO stmt_ends_op stmt_list END stmt_ends_op                                             { $$=create_while_stmt($2, $5); }
	;

until_stmt: UNTIL expr stmt_ends stmt_list END stmt_ends_op                                             { $$=create_until_stmt($2, $4); }
    | UNTIL expr DO stmt_ends stmt_list END stmt_ends_op                                                { $$=create_until_stmt($2, $5); }
	;

method_param: VAR_OR_METHOD_NAME                                                                        { $$=create_method_param_struct($1, 0); }
	| VAR_OR_METHOD_NAME ASSIGN_OP expr                                                                 { $$=create_method_param_struct($1, $3); }
	;

method_params_list:                                                                                     { $$=0; }
	| method_params_list_not_empty                                                                      { $$=$1; }
	;

method_params_list_not_empty: method_param                                                              { $$=create_method_param_list($1); }
	| method_params_list_not_empty COMMA_SYMBOL method_param                                            { $$=add_to_method_param_list($1, $3); }
	;

def_method_stmt: DEF VAR_OR_METHOD_NAME stmt_ends stmt_list END stmt_ends_op                                                        { $$=create_def_method_struct($2, 0, $4); }
    | DEF VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET method_params_list CLOSE_ROUND_BRACKET stmt_ends_op stmt_list END stmt_ends_op      { $$=create_def_method_struct($2, $4, $7); }
    ;

expr_list:                                                                                              { $$=0; }
	| expr_list_not_empty                                                                               { $$=$1; }
	;

expr_list_not_empty: expr new_lines_op                                                                  { $$=create_expr_list($1); }
	| expr_list_not_empty COMMA_SYMBOL new_lines_op expr new_lines_op                                   { $$=add_to_expr_list($1, $4); }
	;

class_declaration: CLASS CLASS_NAME stmt_ends def_method_list END stmt_ends                             { $$=create_class_declaration_program_item($2, 0, $4); }
    | CLASS CLASS_NAME LESS_OP CLASS_NAME stmt_ends def_method_list END stmt_ends                       { $$=create_class_declaration_program_item($2, $4, $6); }
    ;

def_method_list: def_method_stmt                                                                        { $$=create_def_method_list($1); }
    | def_method_list def_method_stmt                                                                   { $$=add_to_def_method_list($1, $2); }
    ;

%%