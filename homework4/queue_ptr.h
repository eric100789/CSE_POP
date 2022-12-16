#ifndef QUEUE_H_ptr
#define QUEUE_H_ptr
#include "list_ptr.h"
#include "queue.h"

#define queue_ptr_h(T)\
void qenqueue_ptr_##T(queue ** , T **, int type);\
T * qdequeue_ptr_##T(queue **);

queue_ptr_h(char);
queue_ptr_h(short);
queue_ptr_h(int);
queue_ptr_h(long);
queue_ptr_h(float);
queue_ptr_h(double);

#endif