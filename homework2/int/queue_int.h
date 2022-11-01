#ifndef QUEUE_H_INT
#define QUEUE_H_INT
#include "list_int.h"

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