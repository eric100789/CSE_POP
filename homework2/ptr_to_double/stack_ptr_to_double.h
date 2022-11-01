#ifndef STACK_H_ptr_to_double
#define STACK_H_ptr_to_double
#include "list_ptr_to_double.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , double **);
double * spop(stack **);
void print_stack(stack **);


#endif