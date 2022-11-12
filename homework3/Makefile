all:	stack queue dep

stack:	main_stack.o stack.o list.o stack_ptr.o list_ptr.o mm.o
	gcc -o stack main_stack.o stack.o list.o stack_ptr.o list_ptr.o mm.o

queue:	main_queue.o queue.o list.o queue_ptr.o list_ptr.o mm.o
	gcc -o queue main_queue.o queue.o list.o queue_ptr.o list_ptr.o mm.o

main_stack.o:	main_stack.c stack.o stack_ptr.o
	gcc -c main_stack.c

main_queue.o:	main_queue.c queue.o queue_ptr.o
	gcc -c main_queue.c

stack.o:	stack.c stack.h list.o
	gcc -c stack.c

queue.o:	queue.c queue.h list.o
	gcc -c queue.c

list.o:	list.c list.h mm.o
	gcc -c list.c

stack_ptr.o:	stack_ptr.c stack_ptr.h list_ptr.o
	gcc -c stack_ptr.c

queue_ptr.o:	queue_ptr.c queue_ptr.h list_ptr.o
	gcc -c queue_ptr.c

list_ptr.o: list_ptr.c list_ptr.h mm.o
	gcc -c list_ptr.c

mm.o:	mm.c
	gcc -c mm.c

dep:
	gcc -M *.c > dep

clean:
	rm stack queue dep *.o