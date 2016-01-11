lexer: b.o a.o
	cc -ll b.o a.o -o lexer

a.o: lexer.c tokens.h
	cc -c lexer.c -o a.o

b.o: lex.l tokens.h
	flex lex.l
	cc -c lex.yy.c -o b.o

clean:
	rm lexer
