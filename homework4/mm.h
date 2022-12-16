#ifndef MM_H
#define MM_H

#include <assert.h>
#include <string.h>
#include <unistd.h>

#define NALLOC 1024		

typedef long Align;		

union header {	
	struct {
		union header *ptr;	
		unsigned size;		
	} s;
	Align x;	
};				

typedef union header Header;

void* mymalloc(unsigned size);
void* mycalloc(unsigned nmemb, unsigned size);
void* myrecalloc(void *ptr, unsigned size);
void myfree(void *ptr);

#endif