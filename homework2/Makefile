#makefile
CC = gcc
CFLAGS = -Wall

all:	char/stack_char char/queue_char double/stack_double double/queue_double float/stack_float float/queue_float int/stack_int int/queue_int long/stack_long long/queue_long short/stack_short short/queue_short ptr_to_char/stack_ptr_to_char ptr_to_char/queue_ptr_to_char ptr_to_double/stack_ptr_to_double ptr_to_double/queue_ptr_to_double ptr_to_float/stack_ptr_to_float ptr_to_float/queue_ptr_to_float ptr_to_int/stack_ptr_to_int ptr_to_int/queue_ptr_to_int ptr_to_long/stack_ptr_to_long ptr_to_long/queue_ptr_to_long ptr_to_short/stack_ptr_to_short ptr_to_short/queue_ptr_to_short dep


char/stack_char:	char/main_stack_char.o char/stack_char.o char/list_char.o mm.o
	$(CC) $(CFLAGS) -o char/stack_char char/main_stack_char.o char/stack_char.o char/list_char.o mm.o

char/queue_char:	char/main_queue_char.o char/queue_char.o char/list_char.o mm.o
	$(CC) $(CFLAGS) -o char/queue_char char/main_queue_char.o char/queue_char.o char/list_char.o mm.o

char/main_stack_char.o:	char/main_stack_char.c char/stack_char.o
	$(CC) $(CFLAGS) -c char/main_stack_char.c -o char/main_stack_char.o

char/main_queue_char.o:	char/main_queue_char.c char/queue_char.o
	$(CC) $(CFLAGS) -c char/main_queue_char.c -o char/main_queue_char.o

char/stack_char.o:	char/stack_char.c char/stack_char.h char/list_char.o
	$(CC) $(CFLAGS) -c char/stack_char.c -o char/stack_char.o

char/queue_char.o:	char/queue_char.c char/queue_char.h char/list_char.o
	$(CC) $(CFLAGS) -c char/queue_char.c -o char/queue_char.o

char/list_char.o:	char/list_char.c char/list_char.h mm.o
	$(CC) $(CFLAGS) -c char/list_char.c -o char/list_char.o



double/stack_double:	double/main_stack_double.o double/stack_double.o double/list_double.o mm.o
	$(CC) $(CFLAGS) -o double/stack_double double/main_stack_double.o double/stack_double.o double/list_double.o mm.o

double/queue_double:	double/main_queue_double.o double/queue_double.o double/list_double.o mm.o
	$(CC) $(CFLAGS) -o double/queue_double double/main_queue_double.o double/queue_double.o double/list_double.o mm.o

double/main_stack_double.o:	double/main_stack_double.c double/stack_double.o
	$(CC) $(CFLAGS) -c double/main_stack_double.c -o double/main_stack_double.o

double/main_queue_double.o:	double/main_queue_double.c double/queue_double.o
	$(CC) $(CFLAGS) -c double/main_queue_double.c -o double/main_queue_double.o

double/stack_double.o:	double/stack_double.c double/stack_double.h double/list_double.o
	$(CC) $(CFLAGS) -c double/stack_double.c -o double/stack_double.o

double/queue_double.o:	double/queue_double.c double/queue_double.h double/list_double.o
	$(CC) $(CFLAGS) -c double/queue_double.c -o double/queue_double.o

double/list_double.o:	double/list_double.c double/list_double.h mm.o
	$(CC) $(CFLAGS) -c double/list_double.c -o double/list_double.o



float/stack_float:	float/main_stack_float.o float/stack_float.o float/list_float.o mm.o
	$(CC) $(CFLAGS) -o float/stack_float float/main_stack_float.o float/stack_float.o float/list_float.o mm.o

float/queue_float:	float/main_queue_float.o float/queue_float.o float/list_float.o mm.o
	$(CC) $(CFLAGS) -o float/queue_float float/main_queue_float.o float/queue_float.o float/list_float.o mm.o

float/main_stack_float.o:	float/main_stack_float.c float/stack_float.o
	$(CC) $(CFLAGS) -c float/main_stack_float.c -o float/main_stack_float.o

float/main_queue_float.o:	float/main_queue_float.c float/queue_float.o
	$(CC) $(CFLAGS) -c float/main_queue_float.c -o float/main_queue_float.o

float/stack_float.o:	float/stack_float.c float/stack_float.h float/list_float.o
	$(CC) $(CFLAGS) -c float/stack_float.c -o float/stack_float.o

float/queue_float.o:	float/queue_float.c float/queue_float.h float/list_float.o
	$(CC) $(CFLAGS) -c float/queue_float.c -o float/queue_float.o

float/list_float.o:	float/list_float.c float/list_float.h mm.o
	$(CC) $(CFLAGS) -c float/list_float.c -o float/list_float.o



int/stack_int:	int/main_stack_int.o int/stack_int.o int/list_int.o mm.o
	$(CC) $(CFLAGS) -o int/stack_int int/main_stack_int.o int/stack_int.o int/list_int.o mm.o

int/queue_int:	int/main_queue_int.o int/queue_int.o int/list_int.o mm.o
	$(CC) $(CFLAGS) -o int/queue_int int/main_queue_int.o int/queue_int.o int/list_int.o mm.o

int/main_stack_int.o:	int/main_stack_int.c int/stack_int.o
	$(CC) $(CFLAGS) -c int/main_stack_int.c -o int/main_stack_int.o

int/main_queue_int.o:	int/main_queue_int.c int/queue_int.o
	$(CC) $(CFLAGS) -c int/main_queue_int.c -o int/main_queue_int.o

int/stack_int.o:	int/stack_int.c int/stack_int.h int/list_int.o
	$(CC) $(CFLAGS) -c int/stack_int.c -o int/stack_int.o

int/queue_int.o:	int/queue_int.c int/queue_int.h int/list_int.o
	$(CC) $(CFLAGS) -c int/queue_int.c -o int/queue_int.o

int/list_int.o:	int/list_int.c int/list_int.h mm.o
	$(CC) $(CFLAGS) -c int/list_int.c -o int/list_int.o



long/stack_long:	long/main_stack_long.o long/stack_long.o long/list_long.o mm.o
	$(CC) $(CFLAGS) -o long/stack_long long/main_stack_long.o long/stack_long.o long/list_long.o mm.o

long/queue_long:	long/main_queue_long.o long/queue_long.o long/list_long.o mm.o
	$(CC) $(CFLAGS) -o long/queue_long long/main_queue_long.o long/queue_long.o long/list_long.o mm.o

long/main_stack_long.o:	long/main_stack_long.c long/stack_long.o
	$(CC) $(CFLAGS) -c long/main_stack_long.c -o long/main_stack_long.o

long/main_queue_long.o:	long/main_queue_long.c long/queue_long.o
	$(CC) $(CFLAGS) -c long/main_queue_long.c -o long/main_queue_long.o

long/stack_long.o:	long/stack_long.c long/stack_long.h long/list_long.o
	$(CC) $(CFLAGS) -c long/stack_long.c -o long/stack_long.o

long/queue_long.o:	long/queue_long.c long/queue_long.h long/list_long.o
	$(CC) $(CFLAGS) -c long/queue_long.c -o long/queue_long.o

long/list_long.o:	long/list_long.c long/list_long.h mm.o
	$(CC) $(CFLAGS) -c long/list_long.c -o long/list_long.o


short/stack_short:	short/main_stack_short.o short/stack_short.o short/list_short.o mm.o
	$(CC) $(CFLAGS) -o short/stack_short short/main_stack_short.o short/stack_short.o short/list_short.o mm.o

short/queue_short:	short/main_queue_short.o short/queue_short.o short/list_short.o mm.o
	$(CC) $(CFLAGS) -o short/queue_short short/main_queue_short.o short/queue_short.o short/list_short.o mm.o

short/main_stack_short.o:	short/main_stack_short.c short/stack_short.o
	$(CC) $(CFLAGS) -c short/main_stack_short.c -o short/main_stack_short.o

short/main_queue_short.o:	short/main_queue_short.c short/queue_short.o
	$(CC) $(CFLAGS) -c short/main_queue_short.c -o short/main_queue_short.o

short/stack_short.o:	short/stack_short.c short/stack_short.h short/list_short.o
	$(CC) $(CFLAGS) -c short/stack_short.c -o short/stack_short.o

short/queue_short.o:	short/queue_short.c short/queue_short.h short/list_short.o
	$(CC) $(CFLAGS) -c short/queue_short.c -o short/queue_short.o

short/list_short.o:	short/list_short.c short/list_short.h mm.o
	$(CC) $(CFLAGS) -c short/list_short.c -o short/list_short.o



ptr_to_char/stack_ptr_to_char:	ptr_to_char/main_stack_ptr_to_char.o ptr_to_char/stack_ptr_to_char.o ptr_to_char/list_ptr_to_char.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_char/stack_ptr_to_char ptr_to_char/main_stack_ptr_to_char.o ptr_to_char/stack_ptr_to_char.o ptr_to_char/list_ptr_to_char.o mm.o

ptr_to_char/queue_ptr_to_char:	ptr_to_char/main_queue_ptr_to_char.o ptr_to_char/queue_ptr_to_char.o ptr_to_char/list_ptr_to_char.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_char/queue_ptr_to_char ptr_to_char/main_queue_ptr_to_char.o ptr_to_char/queue_ptr_to_char.o ptr_to_char/list_ptr_to_char.o mm.o

ptr_to_char/main_stack_ptr_to_char.o:	ptr_to_char/main_stack_ptr_to_char.c ptr_to_char/stack_ptr_to_char.o
	$(CC) $(CFLAGS) -c ptr_to_char/main_stack_ptr_to_char.c -o ptr_to_char/main_stack_ptr_to_char.o

ptr_to_char/main_queue_ptr_to_char.o:	ptr_to_char/main_queue_ptr_to_char.c ptr_to_char/queue_ptr_to_char.o
	$(CC) $(CFLAGS) -c ptr_to_char/main_queue_ptr_to_char.c -o ptr_to_char/main_queue_ptr_to_char.o

ptr_to_char/stack_ptr_to_char.o:	ptr_to_char/stack_ptr_to_char.c ptr_to_char/stack_ptr_to_char.h ptr_to_char/list_ptr_to_char.o
	$(CC) $(CFLAGS) -c ptr_to_char/stack_ptr_to_char.c -o ptr_to_char/stack_ptr_to_char.o

ptr_to_char/queue_ptr_to_char.o:	ptr_to_char/queue_ptr_to_char.c ptr_to_char/queue_ptr_to_char.h ptr_to_char/list_ptr_to_char.o
	$(CC) $(CFLAGS) -c ptr_to_char/queue_ptr_to_char.c -o ptr_to_char/queue_ptr_to_char.o

ptr_to_char/list_ptr_to_char.o:	ptr_to_char/list_ptr_to_char.c ptr_to_char/list_ptr_to_char.h mm.o
	$(CC) $(CFLAGS) -c ptr_to_char/list_ptr_to_char.c -o ptr_to_char/list_ptr_to_char.o


ptr_to_double/stack_ptr_to_double:	ptr_to_double/main_stack_ptr_to_double.o ptr_to_double/stack_ptr_to_double.o ptr_to_double/list_ptr_to_double.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_double/stack_ptr_to_double ptr_to_double/main_stack_ptr_to_double.o ptr_to_double/stack_ptr_to_double.o ptr_to_double/list_ptr_to_double.o mm.o

ptr_to_double/queue_ptr_to_double:	ptr_to_double/main_queue_ptr_to_double.o ptr_to_double/queue_ptr_to_double.o ptr_to_double/list_ptr_to_double.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_double/queue_ptr_to_double ptr_to_double/main_queue_ptr_to_double.o ptr_to_double/queue_ptr_to_double.o ptr_to_double/list_ptr_to_double.o mm.o

ptr_to_double/main_stack_ptr_to_double.o:	ptr_to_double/main_stack_ptr_to_double.c ptr_to_double/stack_ptr_to_double.o
	$(CC) $(CFLAGS) -c ptr_to_double/main_stack_ptr_to_double.c -o ptr_to_double/main_stack_ptr_to_double.o

ptr_to_double/main_queue_ptr_to_double.o:	ptr_to_double/main_queue_ptr_to_double.c ptr_to_double/queue_ptr_to_double.o
	$(CC) $(CFLAGS) -c ptr_to_double/main_queue_ptr_to_double.c -o ptr_to_double/main_queue_ptr_to_double.o

ptr_to_double/stack_ptr_to_double.o:	ptr_to_double/stack_ptr_to_double.c ptr_to_double/stack_ptr_to_double.h ptr_to_double/list_ptr_to_double.o
	$(CC) $(CFLAGS) -c ptr_to_double/stack_ptr_to_double.c -o ptr_to_double/stack_ptr_to_double.o

ptr_to_double/queue_ptr_to_double.o:	ptr_to_double/queue_ptr_to_double.c ptr_to_double/queue_ptr_to_double.h ptr_to_double/list_ptr_to_double.o
	$(CC) $(CFLAGS) -c ptr_to_double/queue_ptr_to_double.c -o ptr_to_double/queue_ptr_to_double.o

ptr_to_double/list_ptr_to_double.o:	ptr_to_double/list_ptr_to_double.c ptr_to_double/list_ptr_to_double.h mm.o
	$(CC) $(CFLAGS) -c ptr_to_double/list_ptr_to_double.c -o ptr_to_double/list_ptr_to_double.o



ptr_to_float/stack_ptr_to_float:	ptr_to_float/main_stack_ptr_to_float.o ptr_to_float/stack_ptr_to_float.o ptr_to_float/list_ptr_to_float.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_float/stack_ptr_to_float ptr_to_float/main_stack_ptr_to_float.o ptr_to_float/stack_ptr_to_float.o ptr_to_float/list_ptr_to_float.o mm.o

ptr_to_float/queue_ptr_to_float:	ptr_to_float/main_queue_ptr_to_float.o ptr_to_float/queue_ptr_to_float.o ptr_to_float/list_ptr_to_float.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_float/queue_ptr_to_float ptr_to_float/main_queue_ptr_to_float.o ptr_to_float/queue_ptr_to_float.o ptr_to_float/list_ptr_to_float.o mm.o

ptr_to_float/main_stack_ptr_to_float.o:	ptr_to_float/main_stack_ptr_to_float.c ptr_to_float/stack_ptr_to_float.o
	$(CC) $(CFLAGS) -c ptr_to_float/main_stack_ptr_to_float.c -o ptr_to_float/main_stack_ptr_to_float.o

ptr_to_float/main_queue_ptr_to_float.o:	ptr_to_float/main_queue_ptr_to_float.c ptr_to_float/queue_ptr_to_float.o
	$(CC) $(CFLAGS) -c ptr_to_float/main_queue_ptr_to_float.c -o ptr_to_float/main_queue_ptr_to_float.o

ptr_to_float/stack_ptr_to_float.o:	ptr_to_float/stack_ptr_to_float.c ptr_to_float/stack_ptr_to_float.h ptr_to_float/list_ptr_to_float.o
	$(CC) $(CFLAGS) -c ptr_to_float/stack_ptr_to_float.c -o ptr_to_float/stack_ptr_to_float.o

ptr_to_float/queue_ptr_to_float.o:	ptr_to_float/queue_ptr_to_float.c ptr_to_float/queue_ptr_to_float.h ptr_to_float/list_ptr_to_float.o
	$(CC) $(CFLAGS) -c ptr_to_float/queue_ptr_to_float.c -o ptr_to_float/queue_ptr_to_float.o

ptr_to_float/list_ptr_to_float.o:	ptr_to_float/list_ptr_to_float.c ptr_to_float/list_ptr_to_float.h mm.o
	$(CC) $(CFLAGS) -c ptr_to_float/list_ptr_to_float.c -o ptr_to_float/list_ptr_to_float.o


ptr_to_int/stack_ptr_to_int:	ptr_to_int/main_stack_ptr_to_int.o ptr_to_int/stack_ptr_to_int.o ptr_to_int/list_ptr_to_int.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_int/stack_ptr_to_int ptr_to_int/main_stack_ptr_to_int.o ptr_to_int/stack_ptr_to_int.o ptr_to_int/list_ptr_to_int.o mm.o

ptr_to_int/queue_ptr_to_int:	ptr_to_int/main_queue_ptr_to_int.o ptr_to_int/queue_ptr_to_int.o ptr_to_int/list_ptr_to_int.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_int/queue_ptr_to_int ptr_to_int/main_queue_ptr_to_int.o ptr_to_int/queue_ptr_to_int.o ptr_to_int/list_ptr_to_int.o mm.o

ptr_to_int/main_stack_ptr_to_int.o:	ptr_to_int/main_stack_ptr_to_int.c ptr_to_int/stack_ptr_to_int.o
	$(CC) $(CFLAGS) -c ptr_to_int/main_stack_ptr_to_int.c -o ptr_to_int/main_stack_ptr_to_int.o

ptr_to_int/main_queue_ptr_to_int.o:	ptr_to_int/main_queue_ptr_to_int.c ptr_to_int/queue_ptr_to_int.o
	$(CC) $(CFLAGS) -c ptr_to_int/main_queue_ptr_to_int.c -o ptr_to_int/main_queue_ptr_to_int.o

ptr_to_int/stack_ptr_to_int.o:	ptr_to_int/stack_ptr_to_int.c ptr_to_int/stack_ptr_to_int.h ptr_to_int/list_ptr_to_int.o
	$(CC) $(CFLAGS) -c ptr_to_int/stack_ptr_to_int.c -o ptr_to_int/stack_ptr_to_int.o

ptr_to_int/queue_ptr_to_int.o:	ptr_to_int/queue_ptr_to_int.c ptr_to_int/queue_ptr_to_int.h ptr_to_int/list_ptr_to_int.o
	$(CC) $(CFLAGS) -c ptr_to_int/queue_ptr_to_int.c -o ptr_to_int/queue_ptr_to_int.o

ptr_to_int/list_ptr_to_int.o:	ptr_to_int/list_ptr_to_int.c ptr_to_int/list_ptr_to_int.h mm.o
	$(CC) $(CFLAGS) -c ptr_to_int/list_ptr_to_int.c -o ptr_to_int/list_ptr_to_int.o


ptr_to_long/stack_ptr_to_long:	ptr_to_long/main_stack_ptr_to_long.o ptr_to_long/stack_ptr_to_long.o ptr_to_long/list_ptr_to_long.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_long/stack_ptr_to_long ptr_to_long/main_stack_ptr_to_long.o ptr_to_long/stack_ptr_to_long.o ptr_to_long/list_ptr_to_long.o mm.o

ptr_to_long/queue_ptr_to_long:	ptr_to_long/main_queue_ptr_to_long.o ptr_to_long/queue_ptr_to_long.o ptr_to_long/list_ptr_to_long.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_long/queue_ptr_to_long ptr_to_long/main_queue_ptr_to_long.o ptr_to_long/queue_ptr_to_long.o ptr_to_long/list_ptr_to_long.o mm.o

ptr_to_long/main_stack_ptr_to_long.o:	ptr_to_long/main_stack_ptr_to_long.c ptr_to_long/stack_ptr_to_long.o
	$(CC) $(CFLAGS) -c ptr_to_long/main_stack_ptr_to_long.c -o ptr_to_long/main_stack_ptr_to_long.o

ptr_to_long/main_queue_ptr_to_long.o:	ptr_to_long/main_queue_ptr_to_long.c ptr_to_long/queue_ptr_to_long.o
	$(CC) $(CFLAGS) -c ptr_to_long/main_queue_ptr_to_long.c -o ptr_to_long/main_queue_ptr_to_long.o

ptr_to_long/stack_ptr_to_long.o:	ptr_to_long/stack_ptr_to_long.c ptr_to_long/stack_ptr_to_long.h ptr_to_long/list_ptr_to_long.o
	$(CC) $(CFLAGS) -c ptr_to_long/stack_ptr_to_long.c -o ptr_to_long/stack_ptr_to_long.o

ptr_to_long/queue_ptr_to_long.o:	ptr_to_long/queue_ptr_to_long.c ptr_to_long/queue_ptr_to_long.h ptr_to_long/list_ptr_to_long.o
	$(CC) $(CFLAGS) -c ptr_to_long/queue_ptr_to_long.c -o ptr_to_long/queue_ptr_to_long.o

ptr_to_long/list_ptr_to_long.o:	ptr_to_long/list_ptr_to_long.c ptr_to_long/list_ptr_to_long.h mm.o
	$(CC) $(CFLAGS) -c ptr_to_long/list_ptr_to_long.c -o ptr_to_long/list_ptr_to_long.o



ptr_to_short/stack_ptr_to_short:	ptr_to_short/main_stack_ptr_to_short.o ptr_to_short/stack_ptr_to_short.o ptr_to_short/list_ptr_to_short.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_short/stack_ptr_to_short ptr_to_short/main_stack_ptr_to_short.o ptr_to_short/stack_ptr_to_short.o ptr_to_short/list_ptr_to_short.o mm.o

ptr_to_short/queue_ptr_to_short:	ptr_to_short/main_queue_ptr_to_short.o ptr_to_short/queue_ptr_to_short.o ptr_to_short/list_ptr_to_short.o mm.o
	$(CC) $(CFLAGS) -o ptr_to_short/queue_ptr_to_short ptr_to_short/main_queue_ptr_to_short.o ptr_to_short/queue_ptr_to_short.o ptr_to_short/list_ptr_to_short.o mm.o

ptr_to_short/main_stack_ptr_to_short.o:	ptr_to_short/main_stack_ptr_to_short.c ptr_to_short/stack_ptr_to_short.o
	$(CC) $(CFLAGS) -c ptr_to_short/main_stack_ptr_to_short.c -o ptr_to_short/main_stack_ptr_to_short.o

ptr_to_short/main_queue_ptr_to_short.o:	ptr_to_short/main_queue_ptr_to_short.c ptr_to_short/queue_ptr_to_short.o
	$(CC) $(CFLAGS) -c ptr_to_short/main_queue_ptr_to_short.c -o ptr_to_short/main_queue_ptr_to_short.o

ptr_to_short/stack_ptr_to_short.o:	ptr_to_short/stack_ptr_to_short.c ptr_to_short/stack_ptr_to_short.h ptr_to_short/list_ptr_to_short.o
	$(CC) $(CFLAGS) -c ptr_to_short/stack_ptr_to_short.c -o ptr_to_short/stack_ptr_to_short.o

ptr_to_short/queue_ptr_to_short.o:	ptr_to_short/queue_ptr_to_short.c ptr_to_short/queue_ptr_to_short.h ptr_to_short/list_ptr_to_short.o
	$(CC) $(CFLAGS) -c ptr_to_short/queue_ptr_to_short.c -o ptr_to_short/queue_ptr_to_short.o

ptr_to_short/list_ptr_to_short.o:	ptr_to_short/list_ptr_to_short.c ptr_to_short/list_ptr_to_short.h mm.o
	$(CC) $(CFLAGS) -c ptr_to_short/list_ptr_to_short.c -o ptr_to_short/list_ptr_to_short.o



mm.o:	mm.c mm.h
	$(CC) $(CFLAGS) -c mm.c

dep:
	gcc -M *.c char/*.c double/*.c float/*.c int/*.c long/*.c short/*.c ptr_to_char/*.c ptr_to_double/*.c ptr_to_float/*.c ptr_to_int/*.c ptr_to_long/*.c ptr_to_short/*.c > dep
clean:
	rm dep *.o char/stack_char char/queue_char char/*.o double/stack_double double/queue_double double/*.o float/stack_float float/queue_float float/*.o int/stack_int int/queue_int int/*.o long/stack_long long/queue_long long/*.o short/stack_short short/queue_short short/*.o ptr_to_char/stack_ptr_to_char ptr_to_char/queue_ptr_to_char ptr_to_char/*.o ptr_to_double/stack_ptr_to_double ptr_to_double/queue_ptr_to_double ptr_to_double/*.o ptr_to_float/stack_ptr_to_float ptr_to_float/queue_ptr_to_float ptr_to_float/*.o ptr_to_int/stack_ptr_to_int ptr_to_int/queue_ptr_to_int ptr_to_int/*.o ptr_to_long/stack_ptr_to_long ptr_to_long/queue_ptr_to_long ptr_to_long/*.o ptr_to_short/stack_ptr_to_short ptr_to_short/queue_ptr_to_short ptr_to_short/*.o

