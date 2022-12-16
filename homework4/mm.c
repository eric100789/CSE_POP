#include "mm.h"

static Header base;				
static Header *freep = NULL;	

static Header* morecore(unsigned nu) {	
	char *cp;
	Header *up;

	if (nu < NALLOC)	
		nu = NALLOC;	
	cp = sbrk(nu * sizeof(Header));	
	if (cp == (char *)-1)	
		return NULL;
	up = (Header *)cp;
	up->s.size = nu;	
	myfree((void *)(up + 1));	
	return freep;
}

void* mymalloc(unsigned nbytes){
	Header *p, *prevp;
	Header *morecore(unsigned);
	unsigned nunits;

	nunits = (nbytes + sizeof(Header) - 1) / sizeof(Header) + 1;	
	if ((prevp = freep) == NULL) {			
		base.s.size = 0;					
		base.s.ptr = freep = prevp = &base;	
	}
	for (p = prevp->s.ptr; ; prevp = p, p = p->s.ptr) {	
		if (p->s.size >= nunits) {	
			if (p->s.size == nunits)	
				prevp->s.ptr = p->s.ptr;	
			else {				
				p->s.size -= nunits;	
				p += p->s.size;
				p->s.size = nunits;
			}
			freep = prevp;
			return (void *)(p + 1);
		}
		if (p == freep)	
			if ((p = morecore(nunits)) == NULL)
				return NULL;
	}
}

void* mycalloc(unsigned nmemb, unsigned size)
{
	void *ptr = mymalloc(nmemb * size);
	if (ptr != NULL) {	
		memset(ptr, 0, nmemb * size);
	}
	return ptr;
}

void* myrecalloc(void * ptr, unsigned size)
{
	if (ptr == NULL)
		return mymalloc(sizeof(size));
	if (size == 0)
	{
		myfree(ptr);
		return NULL;
	}
	Header *p = (Header *)ptr - 1;
	unsigned n = (p->s.size - 1) * sizeof(Header);
	void *temp = mymalloc(size);
	if (n < size)
		memcpy(temp, ptr, size);
	else
		memcpy(temp, ptr, size);
	myfree(ptr);
	return temp;					
}

void myfree(void *ptr)
{
	Header *bp, *p;

	bp = (Header *)ptr - 1;
	for (p = freep; !(bp > p && bp < p->s.ptr); p = p->s.ptr)	
		if (p >= p->s.ptr && (bp > p || bp < p->s.ptr))			
			break;

	if (bp + bp->s.size == p->s.ptr) {	
		bp->s.size += p->s.ptr->s.size;
		bp->s.ptr = p->s.ptr->s.ptr;	
	}
	else
		bp->s.ptr = p->s.ptr;
	if (p + p->s.size == bp) {	
		p->s.size += bp->s.size;
		p->s.ptr = bp->s.ptr;
	}
	else
		p->s.ptr = bp;	
	freep = p;
}