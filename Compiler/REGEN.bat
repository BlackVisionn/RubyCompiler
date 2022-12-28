del lex.yy.c
del parser.tab.h
del parser.tab.c
win_flex.exe RubyLexer.l
win_bison.exe -d parser.y --verbose
gcc main.c print_tree.c dot.c -o res
res.exe 1.txt
