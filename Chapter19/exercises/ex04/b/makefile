main.out: client.o stack.o
	gcc -o main.out client.o stack.o

client.o: client.c stack.h
	gcc -c client.c

stack.o: stack.c stack.h
	gcc -c stack.c
