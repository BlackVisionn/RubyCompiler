%option noyywrap
%option never-interactive
%option yylineno

%{
	#include <stdio.h>    
%}

DIGIT [0-9]
HEX_DIGIT [0-9A-Fa-f]
OCT_DIGIT [0-7]
BIN_DIGIT [01]
LETTER_NUMBER_UNDERSCOPE [a-zA-Z0-9_]

%x ML_COMMENT
%x STRING

%% 

%{   
    int num;
    float real_num;
    char temp1[100];
    char temp2[100];
    char comment[1000];
    char string[1000];
    int concatenation = 0;
%}

alias           { printf("Keyword: alias\n"); }
and             { printf("Keyword: and\n"); }
BEGIN           { printf("Keyword: BEGIN\n"); }
begin           { printf("Keyword: begin\n"); }
break           { printf("Keyword: break\n"); }
case            { printf("Keyword: case\n"); }
class           { printf("Keyword: class\n"); }
def             { printf("Keyword: def\n"); }
"defined?"	    { printf("Keyword: defined?\n"); }
do              { printf("Keyword: do\n"); }
else            { printf("Keyword: else\n"); }
elsif           { printf("Keyword: elsif\n"); }
END             { printf("Keyword: END\n"); }
end             { printf("Keyword: end\n"); }
ensure          { printf("Keyword: ensure\n"); }
false           { printf("Keyword: false\n"); }
for             { printf("Keyword: for\n"); }
if              { printf("Keyword: if\n"); }
in              { printf("Keyword: in\n"); }
module          { printf("Keyword: module\n"); }
next            { printf("Keyword: next\n"); }
nil             { printf("Keyword: nil\n"); }
not             { printf("Keyword: not\n"); }
or              { printf("Keyword: or\n"); }
redo            { printf("Keyword: redo\n"); }
rescue          { printf("Keyword: rescue\n"); }
retry           { printf("Keyword: retry\n"); }
return          { printf("Keyword: return\n"); }
self            { printf("Keyword: self\n"); }
super           { printf("Keyword: super\n"); }
then            { printf("Keyword: then\n"); }
true            { printf("Keyword: true\n"); }
undef           { printf("Keyword: undef\n"); }
unless          { printf("Keyword: unless\n"); }
until           { printf("Keyword: until\n"); }
when            { printf("Keyword: when\n"); }
while           { printf("Keyword: while\n"); }
yield           { printf("Keyword: yield\n"); }

"+"         { printf("Operator: +\n"); }
"-"         { printf("Operator: -\n"); }
"*"         { printf("Operator: *\n"); }
"/"         { printf("Operator: /\n"); }
"%"         { printf("Operator: %\n"); }
"**"        { printf("Operator: **\n"); }

"=="        { printf("Operator: ==\n"); }
"!="        { printf("Operator: !=\n"); }
">"         { printf("Operator: >\n"); }
"<"         { printf("Operator: <\n"); }
">="        { printf("Operator: >=\n"); }
"<="        { printf("Operator: <=\n"); }
"<=>"       { printf("Operator: <=>\n"); }
"==="       { printf("Operator: ===\n"); }
"eql?"      { printf("Operator: eql?\n"); }
"equal?"    { printf("Operator: equal?\n"); }

"="         { printf("Operator: =\n"); }
"+="        { printf("Operator: +=\n"); }
"-="        { printf("Operator: -=\n"); }
"*="        { printf("Operator: *=\n"); }
"/="        { printf("Operator: /=\n"); }
"%="        { printf("Operator: %=\n"); }
"**="       { printf("Operator: **=\n"); }

"&"         { printf("Operator: &\n"); }
"|"         { printf("Operator: |\n"); }
"^"         { printf("Operator: ^\n"); }
"~"         { printf("Operator: ~\n"); }
"<<"        { printf("Operator: <<\n"); }
">>"        { printf("Operator: >>\n"); }

"&&"        { printf("Operator: &&\n"); }
"||"        { printf("Operator: ||\n"); }
"!"         { printf("Operator: !\n"); }

"?:"        { printf("Operator: ?:\n"); }

".."        { printf("Operator: ..\n"); }
"..."       { printf("Operator: ...\n"); }

":"         { printf("Sign: :\n"); }
"."         { printf("Sign: .\n"); }
","         { printf("Sign: ,\n"); }
"("         { printf("Bracket: (\n"); }
")"         { printf("Bracket: )\n"); }
"{"         { printf("Bracket: {\n"); }
"}"         {
                if(concatenation == 0) {
                    printf("Bracket: }\n");
                } else {
                    concatenation--;
                    BEGIN(STRING);
                    string[0] = 0;
                    printf("Found сoncatenation with string\n");
                }
            }
"["         { printf("Bracket: [\n"); }
"]"         { printf("Bracket: ]\n"); }?

\"          { 
                string[0] = 0; 
                BEGIN(STRING);    
            }

<STRING>"#{"        { 
                        printf("String: %s\n", string);
                        printf("Found сoncatenation with string\n");
                        concatenation++;
                        BEGIN(INITIAL);
                    }            

<STRING>[^\\\"\n]+        { strcat(string, yytext); }
<STRING>\\n               { strcat(string, "\n"); }
<STRING>\\a               { strcat(string, "\a"); }
<STRING>\\b               { strcat(string, "\b"); }
<STRING>\\t               { strcat(string, "\t"); }
<STRING>\\v               { strcat(string, "\v"); }
<STRING>\\f               { strcat(string, "\f"); }
<STRING>\\r               { strcat(string, "\r"); }
<STRING>\\e               { strcat(string, "\e"); }
<STRING>\\s               { strcat(string, " "); }
<STRING>\\\\              { strcat(string, "\\"); }
<STRING>\\\"              { strcat(string, "\""); }
<STRING>\\nnn             { strcat(string, "\nnn"); }
<STRING>\\xnn             { strcat(string, "\xnn"); }  
<STRING>\\unnnn           { strcat(string, "\unnnn"); }  
<STRING>\\cx              { strcat(string, "\cx"); }  
<STRING>\\C-x             { strcat(string, "\C-x"); }  
<STRING>\\M-x             { strcat(string, "\M-x"); }  
<STRING>\\M-\\C-x         { strcat(string, "\M-\C-x"); }  
<STRING>\\M-\\cx          { strcat(string, "\M-\cx"); }  
<STRING>\\c\\M-x          { strcat(string, "\c\M-x"); }  
<STRING>\\c\?             { strcat(string, "\c?"); }  
<STRING>\\C-\?            { strcat(string, "\C-?"); }  
<STRING_LITERAL><<EOF>>   { printf("ERROR: expected \" \n"); BEGIN(INITIAL);          }
<STRING_LITERAL>\"        { printf("String: %s \n", string); BEGIN(ENABLE_SEMICOLON); }

#.*                     { printf("Single-line comment: %s\n", yytext + 1); }

^=begin                 {                                     
                            comment[0] = 0; 
                            BEGIN(ML_COMMENT);
                        }

<ML_COMMENT>=end        {
                            printf("Multi-line comment: %s\n", comment);
                            BEGIN(INITIAL);
                        }

<ML_COMMENT>.*          { 
                            strcat(comment, yytext); 
                        }

<ML_COMMENT><<EOF>>     { 
                            printf("expected =end"); BEGIN(INITIAL); 
                        }

[a-z_]{LETTER_NUMBER_UNDERSCOPE}*           {
                                                printf("Local variable or method name: %s\n", yytext);
                                            }

\@[a-z_]{LETTER_NUMBER_UNDERSCOPE}*         {
                                                printf("Instance variable: %s\n", yytext);
                                            }

\@\@[a-z_]{LETTER_NUMBER_UNDERSCOPE}*       {
                                                printf("Class variable: %s\n", yytext);
                                            }

[A-Z]{LETTER_NUMBER_UNDERSCOPE}*            {
                                                printf("Class name: %s\n", yytext);
                                            }

\n+                                         { 
                                                PrintErrorMessage("unexpected \\n"); 
                                            }

%% 

void main(int argc, char **argv ){
	yyin = fopen(argv[1], "r" );

    yylex();
    return;
}
