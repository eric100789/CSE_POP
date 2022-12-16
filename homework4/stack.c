#include <stdlib.h>
#include "mm.h"
#include "stack.h"
#include "list.h"

stack* create_stack()
{
    stack * new_stack = (stack*) mymalloc(sizeof(stack));
    new_stack->slist = NULL;
    return new_stack;
}

int scheck(stack ** target)
{
    if( (*target)->slist == NULL ) return -1;
    return (*target)->slist->type_num;
}

void print_stack(stack ** target)
{
    print_list( &((*target)->slist) );
}

#define stack_c(T) \
void spush_##T(stack ** target , T value , int type)\
{\
    ladd_index_##T(&((*target)->slist), value , 0 , type); \
}\
\
T spop_##T(stack **target)\
{\
    return ldel_index_##T( &((*target)->slist), 0);\
}

stack_c(char);
stack_c(short);
stack_c(int);
stack_c(long);
stack_c(float);
stack_c(double);
