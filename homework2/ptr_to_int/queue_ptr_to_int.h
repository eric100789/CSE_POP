#ifndef QUEUE_H_ptr_to_int
#define QUEUE_H_ptr_to_int
#include "list_ptr_to_int.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , int **);
int * qdequeue(queue **);
void print_queue(queue **);


#endif