%option noyywrap
%option never-interactive
%option yylineno

%{
	#include <stdio.h>    
%}

LETTER_NUMBER_UNDERSCOPE [a-zA-Z0-9_]

%x ML_COMMENT
%x STRING

%% 

%{   
    char comment[1000];
    char string[1000];
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

":"         { printf("Symbol: :\n"); }
"."         { printf("Symbol: .\n"); }
","         { printf("Symbol: ,\n"); }
"("         { printf("Bracket: (\n"); }
")"         { printf("Bracket: )\n"); }
"{"         { printf("Bracket: {\n"); }
"}"         { printf("Bracket: }\n"); }
"["         { printf("Bracket: [\n"); }
"]"         { printf("Bracket: ]\n"); }?

\"          { 
                string[0] = 0; 
                BEGIN(STRING);    
            }

<STRING>[^\\\"\n]+ { strcat(string, yytext); }
<STRING>\\n        { strcat(string, "\n"); }
<STRING>\\a        { strcat(string, "\a"); }
<STRING>\\b        { strcat(string, "\b"); }
<STRING>\\t        { strcat(string, "\t"); }
<STRING>\\v        { strcat(string, "\v"); }
<STRING>\\f        { strcat(string, "\f"); }
<STRING>\\r        { strcat(string, "\r"); }
<STRING>\\e        { strcat(string, "\e"); }
<STRING>\\s        { strcat(string, " "); }
<STRING>\\\\       { strcat(string, "\\"); }
<STRING>\\\"       { strcat(string, "\""); }


#.*             { printf("Single-line comment: %s\n", yytext + 1); }

^=begin                         {                                     
                                    comment[0] = 0; 
                                    BEGIN(ML_COMMENT);
                                }

<ML_COMMENT>^=end               {
                                    strcat(comment, yytext + 5);
                                    printf("Multi-line comment: %s\n", comment);
                                    BEGIN(INITIAL);
                                }

<ML_COMMENT>.*                  { 
                                    strcat(comment, yytext); 
                                }

[a-z_]{LETTER_NUMBER_UNDERSCOPE}*             {
                                                printf("Local variable or method name: %s\n", yytext);
                                             }
\@[a-z_]{LETTER_NUMBER_UNDERSCOPE}*                      {
                                                             printf("Instance variable: %s\n", yytext);
                                                        }
\@\@[a-z_]{LETTER_NUMBER_UNDERSCOPE}*         {
                                                 printf("Class variable: %s\n", yytext);
                                             }

[A-Z]{LETTER_NUMBER_UNDERSCOPE}*            {
                                                printf("Class name: %s\n", yytext);
                                           }

%% 

void main(int argc, char **argv ){
	yyin = fopen(argv[1], "r" );

    yylex();
    return;
}
