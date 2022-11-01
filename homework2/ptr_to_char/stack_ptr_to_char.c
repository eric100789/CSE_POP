//#include <stdio.h>
#include <stdlib.h>
#include "../mm.h"
#include "stack_ptr_to_char.h"
#include "list_ptr_to_char.h"

stack* create_stack()
{
    stack * new_stack = (stack*) mymalloc(sizeof(stack));
    new_stack->slist = NULL;
    return new_stack;
}

void spush(stack ** target , char ** value)
{
    ladd_index(&((*target)->slist), value , 0 ); 
}

char * spop(stack **target)
{
    return ldel_index( &((*target)->slist), 0);
}

void print_stack(stack ** target)
{
    print_list( &((*target)->slist) );
}