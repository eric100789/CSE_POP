//#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
#include "stack_ptr.h"
#include "list_ptr.h"

#define stack_ptr_c(T)\
void spush_ptr_##T(stack ** target , T ** value, int type)\
{\
    ladd_index_ptr_##T(&((*target)->slist), value , 0 , type); \
}\
\
T * spop_ptr_##T(stack **target)\
{\
    return ldel_index_ptr_##T( &((*target)->slist), 0);\
}

stack_ptr_c(char);
stack_ptr_c(short);
stack_ptr_c(int);
stack_ptr_c(long);
stack_ptr_c(float);
stack_ptr_c(double);
