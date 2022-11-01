#ifndef STACK_H_CHAR
#define STACK_H_CHAR
#include "list_char.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , char);
char spop(stack **);
void print_stack(stack **);


#endif