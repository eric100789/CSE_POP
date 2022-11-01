#ifndef QUEUE_H_ptr_to_double
#define QUEUE_H_ptr_to_double
#include "list_ptr_to_double.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , double **);
double * qdequeue(queue **);
void print_queue(queue **);


#endif