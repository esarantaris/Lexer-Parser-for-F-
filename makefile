yacc -d calc.y
lex calc.l
gcc -g lex.yy.c y.tab.c -o calc
./calc < correct1.fpp
