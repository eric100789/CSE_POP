#include <stdlib.h>
#include "mm.h"
#include "queue_ptr.h"
#include "list_ptr.h"

#define queue_ptr_c(T)\
void qenqueue_ptr_##T(queue ** target , T ** value, int type)\
{\
    ladd_index_ptr_##T(&((*target)->qlist), value , 0 , type); \
}\
\
T * qdequeue_ptr_##T(queue **target)\
{\
    return ldel_index_ptr_##T( &((*target)->qlist), 2147483647);\
}

queue_ptr_c(char);
queue_ptr_c(short);
queue_ptr_c(int);
queue_ptr_c(long);
queue_ptr_c(float);
queue_ptr_c(double);