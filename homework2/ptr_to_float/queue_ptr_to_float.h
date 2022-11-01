#ifndef QUEUE_H_ptr_to_float
#define QUEUE_H_ptr_to_float
#include "list_ptr_to_float.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , float **);
float * qdequeue(queue **);
void print_queue(queue **);


#endif