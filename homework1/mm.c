#include <stdlib.h>
#include "mm.h"

void *mymalloc(size_t size)
{
	return malloc(size);
}

void *mycalloc(size_t nmemb, size_t size)
{
	return calloc(nmemb, size);
}

void *myrecalloc(void *ptr, size_t size)
{
	return realloc(ptr, size);
}

void myfree(void *ptr)
{
	free(ptr);
}