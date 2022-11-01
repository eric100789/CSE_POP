#ifndef QUEUE_H_DOUBLE
#define QUEUE_H_DOUBLE
#include "list_double.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , double);
double qdequeue(queue **);
void print_queue(queue **);


#endif