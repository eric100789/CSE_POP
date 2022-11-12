#include <stdlib.h>
#include "mm.h"
#include "queue.h"
#include "list.h"

queue* create_queue()
{
    queue * new_queue = (queue*) mymalloc(sizeof(queue));
    new_queue->qlist = NULL;
    return new_queue;
}

void print_queue(queue ** target)
{
    print_list( &((*target)->qlist) );
}

int qcheck(queue ** target)
{
    list * current = (*target)->qlist;
    if(current == NULL) return -1;
    while (current->next != NULL)
    {
        current = current->next;
    }
    return current->type_num;
}

#define queue_c(T)\
void qenqueue_##T(queue ** target , T value, int type)\
{\
    ladd_index_##T(&((*target)->qlist), value , 0 ,type); \
}\
\
T qdequeue_##T(queue **target)\
{\
    return ldel_index_##T( &((*target)->qlist), 2147483647);\
}

queue_c(char);
queue_c(short);
queue_c(int);
queue_c(long);
queue_c(float);
queue_c(double);

