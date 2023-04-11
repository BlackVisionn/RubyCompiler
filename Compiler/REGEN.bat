del lex.yy.c
del parser.tab.h
del parser.tab.c
del tree.dot
del tree.dot.svg
del res.exe
win_flex.exe RubyLexer.l
win_bison.exe -d parser.y --verbose
g++ main.c -o res
res.exe 3.txt
