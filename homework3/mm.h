#ifndef MM_H
#define MM_H

#include <stddef.h>

void *mymalloc(size_t);
void *mycalloc(size_t, size_t);
void *myrecalloc(void *, size_t);
void myfree(void *);

#endif
