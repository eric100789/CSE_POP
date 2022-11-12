#ifndef LIST_H_ptr
#define LIST_H_ptr

#include <stdio.h>
#include "list.h"
#include "mm.h"

#define list_ptr_h(T)\
T * ldel_index_ptr_##T(list ** , int value);\
list *create_list_ptr_##T(T **value, int type);\
void ladd_index_ptr_##T(list ** , T **, int index, int type);

list_ptr_h(char);
list_ptr_h(short);
list_ptr_h(int);
list_ptr_h(long);
list_ptr_h(float);
list_ptr_h(double);

#endif