#include "lex.yy.c"
#include "parser.tab.c"
#include <stdio.h>
#include "semantic.cpp"
#include "print_tree.c"
#include "dot.c"

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* tree = fopen("tree.dot", "w");

    yyparse();
    transformTree(root);
    fillTable(root);
    PrintProgram(root, tree);

    run_dot("../dot/dot.exe", "../Compiler/tree.dot");
    return 0;
}