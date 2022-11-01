#ifndef QUEUE_H_LONG
#define QUEUE_H_LONG
#include "list_long.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , long);
long qdequeue(queue **);
void print_queue(queue **);


#endif