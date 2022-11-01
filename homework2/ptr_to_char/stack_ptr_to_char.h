#ifndef STACK_H_ptr_to_char
#define STACK_H_ptr_to_char
#include "list_ptr_to_char.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

stack* create_stack();
void spush(stack ** , char **);
char * spop(stack **);
void print_stack(stack **);


#endif