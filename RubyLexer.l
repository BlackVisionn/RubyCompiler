%option noyywrap
%option never-interactive
%option yylineno

%{
	#include <stdio.h>    

    void removeCharacterFromString(const char * str, char * dest, char deleted_char);
    int binstrToDec(const char * str);
%}

DIGIT [0-9]
HEX_DIGIT [0-9A-Fa-f]
OCT_DIGIT [0-7]
BIN_DIGIT [01]
OCT_NUMBER {OCT_DIGIT}+(_{OCT_DIGIT}+)*
HEX_NUMBER {HEX_DIGIT}+(_{HEX_DIGIT}+)*
BIN_NUMBER {BIN_DIGIT}+(_{BIN_DIGIT}+)*
DIGIT_NUMBER {DIGIT}*(_{DIGIT}+)*

LETTER_NUMBER_UNDERSCOPE [a-zA-Z0-9_]
EXPONENT [eE][+-]?[1-9]{DIGIT_NUMBER}

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
                    printf("Found concatenation with string\n");
                }
            }
"["         { printf("Bracket: [\n"); }
"]"         { printf("Bracket: ]\n"); }

\"          { 
                string[0] = 0; 
                BEGIN(STRING);    
            }

<STRING>\#\{          { 
                        printf("String: %s\n", string);
                        printf("Found concatenation with string\n");
                        concatenation++;
                        BEGIN(INITIAL);
                    }            

<STRING>[^\\\"\n#{}]+     { strcat(string, yytext); }
<STRING>[#{}]             { strcat(string, yytext); }
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
<STRING>\\{OCT_DIGIT}{1,3} { 
                                sscanf(yytext + 1, "%o", &num);
                                temp1[0] = (char) num;
                                temp1[1] = 0;
                                strcat(string, temp1);
                            }

<STRING>\\x{HEX_DIGIT}{1,2} { 
                                sscanf(yytext + 2, "%x", &num);
                                temp1[0] = (char) num;
                                temp1[1] = 0;
                                strcat(string, temp1);
                            }
<STRING>\\x[^0-9A-Fa-f\n"]* { printf("ERROR: invalid hex escape \n"); } 
<STRING><<EOF>>             { printf("ERROR: expected \" \n");}
<STRING>\"                  { printf("String: %s \n", string); BEGIN(INITIAL); }

#.*                         { printf("Single-line comment: %s\n", yytext + 1); }

^=begin                 {                                     
                            comment[0] = 0; 
                            BEGIN(ML_COMMENT);
                        }

<ML_COMMENT>^=end       {
                            strcat(comment, yytext + 5);
                            printf("Multi-line comment: %s\n", comment);
                            BEGIN(INITIAL);
                        }

<ML_COMMENT>.*          { 
                            strcat(comment, yytext); 
                        }

<ML_COMMENT><<EOF>>     { 
                            printf("expected =end"); BEGIN(INITIAL); 
                        }

0|[1-9]{DIGIT_NUMBER}       { 
                                removeCharacterFromString(yytext,temp1,'_');
                                num = atoi(temp1);
                                printf("Decimal number: %d\n", num);
                            }

[1-9](_*{DIGIT}+)*_*        { printf("ERROR: invalid decimal number: %s\n", yytext); }

0[dD][1-9]{DIGIT_NUMBER}    {
                                removeCharacterFromString(yytext+2,temp1,'_');
                                num = atoi(temp1);
                                printf("Decimal number: %d\n", num);              
                            }

0_*[dD]_*[1-9](_*{DIGIT}+)*_* { printf("ERROR: invalid decimal number with dD: %s\n", yytext); }

0[oO]?{OCT_NUMBER}          {
                                removeCharacterFromString(yytext,temp1,'_');
                                removeCharacterFromString(temp1,temp2,'o');
                                removeCharacterFromString(temp2,temp1,'O');
                                sscanf(temp1,"%o",&num);
                                printf("Octal number: %d\n", num);
                            }

0_*[oO]?_*{OCT_DIGIT}(_*{OCT_DIGIT}+)*_* { printf("ERROR: invalid octal number: %s\n", yytext); }

0[xX]{HEX_NUMBER}           {
                                removeCharacterFromString(yytext + 2,temp1,'_');
                                sscanf(temp1,"%x",&num);
                                printf("Hexadecimal number: %d\n", num);
                            }

0_*[xX]_*{HEX_DIGIT}(_*{HEX_DIGIT}+)*_* { printf("ERROR: invalid hexadecimal number: %s\n", yytext); }

0[bB]{BIN_NUMBER}           {
                                removeCharacterFromString(yytext + 2,temp1,'_');
                                num = binstrToDec(temp1);
                                printf("Binary number: %d\n", num); 
                            }

0_*[bB]_*{BIN_DIGIT}(_*{BIN_DIGIT}+)*_* { printf("ERROR: invalid binary number: %s\n", yytext); }


(0|[1-9](_?{DIGIT})*)(\.{DIGIT}+(_{DIGIT}+)*)?({EXPONENT})? {
                                                                 removeCharacterFromString(yytext,temp1,'_'); 
                                                                 real_num = atof(temp1);                                                                
                                                                 printf("Float number: %f\n", real_num); 
                                                            }
([1-9]*_*(\.|\.{4,})_*{DIGIT}+)+(_*{DIGIT}*)*           { printf("ERROR: invalid float number: %s\n", yytext); }
([1-9]+((_|\.)*{DIGIT}*)*[Ee]+((_|\.)*{DIGIT}*)*)+      { printf("ERROR: invalid float number with eE: %s\n", yytext); }

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

%% 

void removeCharacterFromString(const char * str, char * dest, char deleted_char) {
	int j = 0;
	
    for(int i = 0; str[i] != 0; i++) {
        if(str[i] != deleted_char) {
            dest[j++] = str[i];
        }
    }

    dest[j] = 0;
}

int binstrToDec(const char * str) {
    unsigned char *p = str;
    unsigned int   r = 0;

    while (p && *p ) {
        r <<= 1;
        r += (unsigned int)((*p++) & 0x01);
    }

    return (int) r;
}

void main(int argc, char **argv ){
	yyin = fopen(argv[1], "r" );

    yylex();
    return;
}
