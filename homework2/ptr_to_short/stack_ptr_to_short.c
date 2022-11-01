//#include <stdio.h>
#include <stdlib.h>
#include "../mm.h"
#include "stack_ptr_to_short.h"
#include "list_ptr_to_short.h"

stack* create_stack()
{
    stack * new_stack = (stack*) mymalloc(sizeof(stack));
    new_stack->slist = NULL;
    return new_stack;
}

void spush(stack ** target , short ** value)
{
    ladd_index(&((*target)->slist), value , 0 ); 
}

short * spop(stack **target)
{
    return ldel_index( &((*target)->slist), 0);
}

void print_stack(stack ** target)
{
    print_list( &((*target)->slist) );
}