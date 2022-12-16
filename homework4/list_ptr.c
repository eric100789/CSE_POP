#include "list_ptr.h"
#include "mm.h"

#define list_ptr_c(T)\
list *create_list_ptr_##T(T ** value, int type)	\
{	\
	list *newList = (list*)mymalloc(sizeof(list));	\
	newList->value.val_ptr_##T = (*value);	\
	newList->type_num = type;	\
	newList->next = NULL;	\
	newList->prev = NULL;	\
	return newList;	\
}	\
\
void ladd_index_ptr_##T(list ** head , T ** value, int index, int type)\
{\
	list *newAdded = create_list_ptr_##T(value, type);\
	list *current = *head;\
	\
	newAdded -> next = NULL;\
	newAdded -> prev = NULL;\
	newAdded -> value.val_ptr_##T = (*value);\
\
    int now = 0;\
	\
	if(*head == NULL && index==0)\
	{\
		*head = newAdded;\
	}\
    else if(index==0)\
    {\
		newAdded -> next = (*head);\
		(*head) -> prev = newAdded;\
		*head = newAdded;\
    }\
    else\
    {\
        while(1)\
        {\
            if(index == now)\
            {\
                newAdded->next = current;\
                newAdded->prev = current->prev;\
				current->prev->next = newAdded;\
                current->prev = newAdded;\
				break;\
            }\
			else if(current->next == NULL)\
			{\
				newAdded -> next = current->next;\
				newAdded -> prev = current; \
				current -> next = newAdded;\
				break;\
			}\
            current = current->next;\
            now++;\
        }\
    }\
}\
\
T * ldel_index_ptr_##T(list ** head , int index)\
{\
	list * current = *head; \
    T * value;\
    int now=0;\
\
    if((*head) == NULL) return NULL;\
\
    if(index == 0)\
    {\
        value = (*head)->value.val_ptr_##T;\
		if(current -> next != NULL)\
		{\
			(*head) = (*head)->next;\
			(*head)->prev = NULL;\
		}\
		else\
		{\
			*head = NULL;\
		}\
        myfree(current);\
        return value;\
    }\
\
	if(current -> next == NULL)\
	{\
		value = current->value.val_ptr_##T;\
		myfree(current);\
		*head = NULL;\
		return value;\
	}\
	\
	while(now != index && current -> next != NULL)\
	{\
		current = current -> next;\
        now++;\
	}\
    if(current -> next == NULL)\
    {\
        value = current->value.val_ptr_##T;\
        current = current->prev;\
        myfree(current->next);\
        current->next = NULL;\
        return value;\
    }\
    else if(now == index)\
    {\
        value = current->value.val_ptr_##T;\
        current->prev->next = current->next;\
        current->next->prev = current->prev;\
        myfree(current);\
        return value;\
    }\
	return NULL;\
}

list_ptr_c(char);
list_ptr_c(short);
list_ptr_c(int);
list_ptr_c(long);
list_ptr_c(float);
list_ptr_c(double);
