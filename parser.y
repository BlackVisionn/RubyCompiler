%define parse.error verbose

%{
#include <stdio.h>
void yyerror(const char* message) {
    fprintf(stderr, message);
}
int yylex();
int yyparse();
extern FILE* yyin;


%}

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

%token BIN_AND_OP
%token BIN_OR_OP
%token BIN_XOR_OP
%token BIN_ONES_COMPLEMENT_OP
%token BIN_LEFT_SHIFT_OP
%token BIN_RIGHT_SHIFT_OP

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

%token STRING 
%token INTEGER_NUMBER
%token FLOAT_NUMBER

%token VAR_OR_METHOD_NAME
%token INSTANCE_VAR_NAME
%token CLASS_NAME
%token CLASS_VAR_NAME

%start program

%left AND OR
%right NOT
%nonassoc DEFINED
%right ASSIGN_OP MOD_ASSIGN_OP DIV_ASSIGN_OP SUB_ASSIGN_OP ADD_ASSIGN_OP MUL_ASSIGN_OP POW_ASSIGN_OP
%nonassoc INCLUSIVE_RANGE_OP EXCLUSIVE_RANGE_OP
%left LOGICAL_OR_OP
%left LOGICAL_AND_OP
%nonassoc COMB_COMPRASION_OP EQL_OP CASE_EQL_OP NOT_EQL_OP
%left GREATER_OP LESS_OP GREATER_OR_EQL_OP LESS_OR_EQL_OP
%left BIN_OR_OP BIN_XOR_OP
%left BIN_AND_OP
%left BIN_LEFT_SHIFT_OP BIN_RIGHT_SHIFT_OP
%left ARITHMETIC_PLUS_OP ARITHMETIC_MINUS_OP
%left ARITHMETIC_MUL_OP ARITHMETIC_DIV_OP ARITHMETIC_MOD_OP
%right UNARY_MINUS
%right LOGICAL_NOT_OP BIN_ONES_COMPLEMENT_OP UNARY_PLUS ARITHMETIC_POW_OP  
%nonassoc CLOSE_ROUND_BRACKET

%%
program: program_items_list
    ;

program_item : stmt
    | def_method_stmt
    | class_declaration
    ;

program_items_list: program_item         
    | program_items_list program_item   
    ;                                

expr: INTEGER_NUMBER                                    
    | FLOAT_NUMBER                                      
    | STRING                                            
    | NIL                                       
    | TRUE                                      
    | FALSE                                     
    | LOGICAL_NOT_OP expr                               
    | BIN_ONES_COMPLEMENT_OP expr                       
    | ARITHMETIC_PLUS_OP expr %prec UNARY_PLUS          
    | expr ARITHMETIC_POW_OP expr                       
    | ARITHMETIC_MINUS_OP expr %prec UNARY_MINUS        
    | expr ARITHMETIC_MUL_OP expr                       
    | expr ARITHMETIC_DIV_OP expr                       
    | expr ARITHMETIC_MOD_OP expr                       
    | expr ARITHMETIC_PLUS_OP expr                      
    | expr ARITHMETIC_MINUS_OP expr                     
    | expr BIN_LEFT_SHIFT_OP expr                       
    | expr BIN_RIGHT_SHIFT_OP expr                      
    | expr BIN_AND_OP expr                              
    | expr BIN_OR_OP expr                               
    | expr BIN_XOR_OP expr                              
    | expr GREATER_OP expr                              
    | expr LESS_OP expr                                 
    | expr GREATER_OR_EQL_OP expr                       
    | expr LESS_OR_EQL_OP expr                          
    | expr COMB_COMPRASION_OP expr                      
    | expr EQL_OP expr                                  
    | expr CASE_EQL_OP expr                             
    | expr NOT_EQL_OP expr                              
    | expr LOGICAL_AND_OP expr                          
    | expr LOGICAL_OR_OP expr                           
    | expr INCLUSIVE_RANGE_OP expr                      
    | expr EXCLUSIVE_RANGE_OP expr                      
    | expr ASSIGN_OP expr                               
    | expr MOD_ASSIGN_OP expr                           
    | expr DIV_ASSIGN_OP expr                           
    | expr SUB_ASSIGN_OP expr                           
    | expr ADD_ASSIGN_OP expr                           
    | expr MUL_ASSIGN_OP expr                           
    | expr POW_ASSIGN_OP expr                           
    | DEFINED expr                              
    | NOT expr                                  
    | expr AND expr                             
    | expr OR expr                              
    | OPEN_ROUND_BRACKET expr CLOSE_ROUND_BRACKET       
	| OPEN_SQUARE_BRACKET expr CLOSE_SQUARE_BRACKET     
    | method_call_stmt                                  
    | VAR_OR_METHOD_NAME                                   
    | INSTANCE_VAR_NAME                                 
    | expr DOT_SYMBOL VAR_OR_METHOD_NAME                   
    | expr DOT_SYMBOL VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET         
    | SELF DOT_SYMBOL VAR_OR_METHOD_NAME           
    | SELF DOT_SYMBOL VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  
    ;

stmt_ends: SEMICOLON_SYMBOL
    | NEW_LINE_SYMBOL
    | SEMICOLON_SYMBOL stmt_ends
    | NEW_LINE_SYMBOL stmt_ends
    ;

new_lines: NEW_LINE_SYMBOL
    | NEW_LINE_SYMBOL new_lines
    ;

stmt: expr stmt_ends                    
    | stmt_block                        
    | stmt_block stmt_ends              
    | if_stmt                           
    | if_stmt stmt_ends                 
    | for_stmt                          
    | for_stmt stmt_ends                
    | while_stmt                        
    | while_stmt stmt_ends                 
    | until_stmt                        
    | until_stmt stmt_ends                  
    | def_method_stmt                   
    | def_method_stmt stmt_ends         
    | RETURN expr stmt_ends     
    | RETURN stmt_ends          
    ;

stmt_list: stmt                             
    | stmt stmt_list         
    ;

stmt_block: BEGIN stmt_ends stmt_list END  
    ;

if_start_stmt: IF expr stmt_ends stmt_list                                  
    | IF expr SEMICOLON_SYMBOL new_lines THEN stmt_ends stmt_list
    | IF expr new_lines THEN stmt_ends stmt_list                    
    ;

elsif_stmt: ELSIF expr stmt_ends stmt_list                                     
    | ELSIF expr new_lines THEN stmt_ends stmt_list                     
    | ELSIF expr SEMICOLON_SYMBOL new_lines THEN stmt_ends stmt_list    
    ;

elsif_stmt_list: elsif_stmt 
    | elsif_stmt_list elsif_stmt 
    ;

if_stmt: if_start_stmt END
    | if_start_stmt ELSE stmt_ends stmt_list END 
    | if_start_stmt elsif_stmt_list END
    | if_start_stmt elsif_stmt_list ELSE stmt_ends stmt_list END
    ;

for_stmt: FOR VAR_OR_METHOD_NAME IN expr stmt_ends stmt_list END 
    | FOR INSTANCE_VAR_NAME IN expr stmt_ends stmt_list END
    | FOR VAR_OR_METHOD_NAME IN expr DO stmt_ends stmt_list END
    | FOR INSTANCE_VAR_NAME IN expr DO stmt_ends stmt_list END
	;

while_stmt: WHILE expr stmt_ends stmt_list END
    | WHILE expr DO stmt_ends stmt_list END
	;

until_stmt: UNTIL expr stmt_ends stmt_list END
    | UNTIL expr DO stmt_ends stmt_list END
	;

method_param: VAR_OR_METHOD_NAME
	| VAR_OR_METHOD_NAME ASSIGN_OP expr
	;

method_params_list: method_param
	| method_params_list COMMA_SYMBOL method_param
	;

def_method_stmt: DEF VAR_OR_METHOD_NAME stmt_ends stmt_list END
    | DEF VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET method_params_list CLOSE_ROUND_BRACKET stmt_list END
    ;

expr_list: expr new_lines
	| expr_list COMMA_SYMBOL new_lines expr new_lines
	;

class_declaration: CLASS_KEYWORD CLASS_NAME stmt_ends def_method_list END_KEYWORD stmt_ends
    | CLASS_KEYWORD CLASS_NAME LESS_OP CLASS_NAME stmt_ends def_method_list END_KEYWORD stmt_ends
    ;

def_method_list: def_method_stmt
    | def_method_list def_method_stmt
    ;

%%

void main(int argc, char **argv ){
	yyin = fopen(argv[1], "r" );

    yyparse();
    return;
}