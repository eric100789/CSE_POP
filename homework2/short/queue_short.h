#ifndef QUEUE_H_SHORT
#define QUEUE_H_SHORT
#include "list_short.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , short);
short qdequeue(queue **);
void print_queue(queue **);


#endif