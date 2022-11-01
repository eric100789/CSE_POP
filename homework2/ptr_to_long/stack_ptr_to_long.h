#ifndef STACK_H_ptr_to_long
#define STACK_H_ptr_to_long
#include "list_ptr_to_long.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , long **);
long * spop(stack **);
void print_stack(stack **);


#endif