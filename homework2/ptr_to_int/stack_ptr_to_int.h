#ifndef STACK_H_ptr_to_int
#define STACK_H_ptr_to_int
#include "list_ptr_to_int.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , int **);
int * spop(stack **);
void print_stack(stack **);


#endif