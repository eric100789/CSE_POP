#ifndef STACK_H_ptr_to_SHORT
#define STACK_H_ptr_to_SHORT
#include "list_ptr_to_short.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , short **);
short * spop(stack **);
void print_stack(stack **);


#endif