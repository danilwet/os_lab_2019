CC=gcc
CFLAGS=-I.

all : multModule.c server.c client.c
	gcc -c multModule.c -o multModule.o
	gcc -shared multModule.o -o libmult.so
	gcc server.c -L. -lmult -lpthread -o server
	gcc client.c -L. -lmult -lpthread -o client

clean :
	rm multModule.o libmult.so server client