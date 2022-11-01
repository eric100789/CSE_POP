#include <stdlib.h>
#include "../mm.h"
#include "queue_short.h"
#include "list_short.h"

queue* create_queue()
{
    queue * new_queue = (queue*) mymalloc(sizeof(queue));
    new_queue->qlist = NULL;
    return new_queue;
}

void qenqueue(queue ** target , short value)
{
    ladd_index(&((*target)->qlist), value , 0 ); 
}

short qdequeue(queue **target)
{
    return ldel_index( &((*target)->qlist), 2147483647);
}

void print_queue(queue ** target)
{
    print_list( &((*target)->qlist) );
}