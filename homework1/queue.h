#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , int);
int qdequeue(queue **);
void print_queue(queue **);


#endif