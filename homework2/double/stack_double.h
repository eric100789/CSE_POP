#ifndef STACK_H_DOUBLE
#define STACK_H_DOUBLE
#include "list_double.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , double);
double spop(stack **);
void print_stack(stack **);


#endif