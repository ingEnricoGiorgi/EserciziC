all : libmath.so

libmath.so : quiz.o 
	gcc -shared -o libmath.so quiz.o

quiz.o : quiz.c quiz.h
	gcc -fpic -c -o quiz.o quiz.c
