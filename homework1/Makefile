all:	stack queue dep

stack:	main_stack.o stack.o list.o mm.o
	gcc -o stack main_stack.o stack.o list.o mm.o

queue:	main_queue.o queue.o list.o mm.o
	gcc -o queue main_queue.o queue.o list.o mm.o

main_stack.o:	main_stack.c stack.o
	gcc -c main_stack.c

main_queue.o:	main_queue.c queue.o
	gcc -c main_queue.c

stack.o:	stack.c stack.h list.o
	gcc -c stack.c

queue.o:	queue.c queue.h list.o
	gcc -c queue.c

list.o:	list.c list.h mm.o
	gcc -c list.c

mm.o:	mm.c mm.h
	gcc -c mm.c

dep:
	gcc -MM *.c > dep
clean:
	rm stack queue dep *.o
