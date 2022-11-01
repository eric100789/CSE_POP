#ifndef STACK_H_SHORT
#define STACK_H_SHORT
#include "list_short.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , short);
short spop(stack **);
void print_stack(stack **);


#endif