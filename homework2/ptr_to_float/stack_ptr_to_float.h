#ifndef STACK_H_ptr_to_float
#define STACK_H_ptr_to_float
#include "list_ptr_to_float.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , float **);
float * spop(stack **);
void print_stack(stack **);


#endif