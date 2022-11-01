#ifndef QUEUE_H_FLOAT
#define QUEUE_H_FLOAT
#include "list_float.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , float);
float qdequeue(queue **);
void print_queue(queue **);


#endif