#ifndef STACK_H
#define STACK_H
#include "list.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , int);
int spop(stack **);
void print_stack(stack **);


#endif