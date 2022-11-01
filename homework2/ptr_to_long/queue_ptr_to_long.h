#ifndef QUEUE_H_ptr_to_long
#define QUEUE_H_ptr_to_long
#include "list_ptr_to_long.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , long **);
long * qdequeue(queue **);
void print_queue(queue **);


#endif