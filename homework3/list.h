#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include "mm.h"

struct LinkList
{
    union 
    {
		char val_char;
		short val_short;
		int val_int;
		long val_long;
		float val_float;
		double val_double;
		char* val_ptr_char;
		short* val_ptr_short;
		int* val_ptr_int;
		long* val_ptr_long;
		float* val_ptr_float;
		double* val_ptr_double;
    }value;
    int type_num;
    
    struct LinkList * next, *prev;
};

typedef struct LinkList list;

#define list_h(T) \
list * create_list_##T(T value, int type); \
T ldel_index_##T(list ** , int);\
void ladd_index_##T(list ** , T value, int index, int type);

list_h(char);
list_h(short);
list_h(int);
list_h(long);
list_h(float);
list_h(double);

void print_list(list **);

#endif