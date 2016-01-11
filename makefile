lexer: b.o a.o
	cc -ll b.o a.o -o lexer
	rm a.o b.o *.yy.c

a.o: main.c tokens.h
	cc -c main.c -o a.o

b.o: main.l tokens.h
	flex main.l
	cc -c lex.yy.c -o b.o

clean:
	rm lexer
