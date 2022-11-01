#ifndef STACK_H_INT
#define STACK_H_INT
#include "list_int.h"

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