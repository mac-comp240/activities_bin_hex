# Makefile for Activity 4

CC=gcc -std=c99

binconv: activity4.c binary_convert.c
	${CC} -o binconv activity4.c binary_convert.c

clean:
	rm -f binconv
