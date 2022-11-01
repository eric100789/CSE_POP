#ifndef QUEUE_H_ptr_to_char
#define QUEUE_H_ptr_to_char
#include "list_ptr_to_char.h"

struct queue
{
    list * qlist;
};
typedef struct queue queue;

queue* create_queue();
void qenqueue(queue ** , char **);
char * qdequeue(queue **);
void print_queue(queue **);


#endif