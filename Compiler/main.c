#include "lex.yy.c"
#include "parser.tab.c"
#include "dot.h"
#include <stdio.h>

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* tree = fopen("tree.dot", "w");

    yyparse();
    PrintProgram(root, tree);

    run_dot("../dot/dot.exe", "../Compiler/tree.dot");
    return 0;
}