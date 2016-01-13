lexer: b.o a.o
	gcc -ll b.o a.o -o lexer
	rm b.o a.o

a.o: lexer.c tokens.h
	gcc -c lexer.c -o a.o

b.o: lex.l tokens.h
	flex lex.l
	gcc -c lex.yy.c -o b.o

clean:
	rm lexer
