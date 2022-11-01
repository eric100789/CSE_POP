#include <stdlib.h>
#include "../mm.h"
#include "queue_ptr_to_long.h"
#include "list_ptr_to_long.h"

queue* create_queue()
{
    queue * new_queue = (queue*) mymalloc(sizeof(queue));
    new_queue->qlist = NULL;
    return new_queue;
}

void qenqueue(queue ** target , long ** value)
{
    ladd_index(&((*target)->qlist), value , 0 ); 
}

long * qdequeue(queue **target)
{
    return ldel_index( &((*target)->qlist), 2147483647);
}

void print_queue(queue ** target)
{
    print_list( &((*target)->qlist) );
}