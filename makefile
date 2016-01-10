lexer: main.o lex.yy.o
	cc -ll main.o lex.yy.o -o lexer
	rm main.o lex.yy.o

main.o: main.c tokens.h
	cc -c main.c

lex.yy.o: main.l tokens.h
	flex main.l
	cc -c lex.yy.c

clean:
	rm lexer
