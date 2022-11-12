#ifndef STACK_H_ptr
#define STACK_H_ptr
#include "list_ptr.h"
#include "stack.h"

#define stack_ptr_h(T)\
void spush_ptr_##T(stack ** , T **, int type);\
T * spop_ptr_##T(stack **);

stack_ptr_h(char);
stack_ptr_h(short);
stack_ptr_h(int);
stack_ptr_h(long);
stack_ptr_h(float);
stack_ptr_h(double);

#endif