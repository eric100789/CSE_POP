#ifndef STACK_H_FLOAT
#define STACK_H_FLOAT
#include "list_float.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , float);
float spop(stack **);
void print_stack(stack **);


#endif