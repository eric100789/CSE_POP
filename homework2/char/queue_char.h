#ifndef QUEUE_H_CHAR
#define QUEUE_H_CHAR
#include "list_char.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , char);
char qdequeue(queue **);
void print_queue(queue **);


#endif