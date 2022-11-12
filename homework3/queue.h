#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"


struct queue
{
    list * qlist;
};typedef struct queue queue;

#define queue_h(T) \
\
void qenqueue_##T(queue ** , T , int type);\
T qdequeue_##T(queue **);

queue_h(char);
queue_h(short);
queue_h(int);
queue_h(long);
queue_h(float);
queue_h(double);

queue* create_queue();
void print_queue(queue **);
int qcheck(queue ** target);


#endif