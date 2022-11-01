#include <stdlib.h>
#include "../mm.h"
#include "stack_double.h"
#include "list_double.h"

stack* create_stack()
{
    stack * new_stack = (stack*) mymalloc(sizeof(stack));
    new_stack->slist = NULL;
    return new_stack;
}

void spush(stack ** target , double value)
{
    ladd_index(&((*target)->slist), value , 0 ); 
}

double spop(stack **target)
{
    return ldel_index( &((*target)->slist), 0);
}

void print_stack(stack ** target)
{
    print_list( &((*target)->slist) );
}