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

void spush(stack ** target , int value)
{
    ladd_index(&((*target)->slist), value , 0 ); 
}

int spop(stack **target)
{
    return ldel_index( &((*target)->slist), 0);
}

void print_stack(stack ** target)
{
    print_list( &((*target)->slist) );
}