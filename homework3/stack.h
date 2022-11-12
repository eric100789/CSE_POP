#ifndef STACK_H
#define STACK_H
#include "list.h"

struct stack
{
    list * slist;
};
typedef struct stack stack;

#define stack_h(T) \
\
void spush_##T(stack ** , T , int type);\
T spop_##T(stack **);

stack_h(char);
stack_h(short);
stack_h(int);
stack_h(long);
stack_h(float);
stack_h(double);

stack* create_stack();
void print_stack(stack **);
int scheck(stack **);


#endif