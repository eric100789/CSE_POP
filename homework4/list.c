#include <stdio.h>
#include "list.h"
#include "mm.h"


list * create_list()
{
    return NULL;
}

#define list_c(T)\
list *create_list_##T(T value, int type)	\
{	\
	list *newList = (list*)mymalloc(sizeof(list));	\
	newList->value.val_##T = value;	\
	newList->type_num = type;	\
	newList->next = NULL;	\
	newList->prev = NULL;	\
	return newList;	\
}	\
\
void ladd_index_##T(list ** head , T value, int index, int type)\
{\
	list *newAdded = create_list_##T(value, type);\
	list *current = *head;\
	\
	newAdded -> next = NULL;\
	newAdded -> prev = NULL;\
	newAdded -> value.val_##T = value;\
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
T ldel_index_##T(list ** head , int index)\
{\
	list * current = *head;\
    T value;\
    int now=0;\
\
    if((*head) == NULL) return -1;\
\
    if(index == 0)\
    {\
        value = (*head)->value.val_##T;\
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
		value = current->value.val_##T;\
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
        value = current->value.val_##T;\
        current = current->prev;\
        myfree(current->next);\
        current->next = NULL;\
        return value;\
    }\
    else if(now == index)\
    {\
        value = current->value.val_##T;\
        current->prev->next = current->next;\
        current->next->prev = current->prev;\
        myfree(current);\
        return value;\
    }\
	return 0;\
}

list_c(char);
list_c(short);
list_c(int);
list_c(long);
list_c(float);
list_c(double);

void print_list(list ** head)
{
    list * current = *head;
	if(*head == NULL) return;
	while(current != NULL)
	{
		switch (current->type_num) {
		case 0:
			printf("%c\t", current->value.val_char); break;
		case 1:
			printf("%hd\t", current->value.val_short); break;
		case 2:
			printf("%d\t", current->value.val_int); break;
		case 3:
			printf("%ld\t", current->value.val_long); break;
		case 4:
			printf("%f\t", current->value.val_float); break;
		case 5:
			printf("%lf\t", current->value.val_double); break;
		case 6:
			printf("%p:%c\t", current->value.val_ptr_char, *(current->value.val_ptr_char)); break;
		case 7:
			printf("%p:%hd\t", current->value.val_ptr_short, *(current->value.val_ptr_short)); break;
		case 8:
			printf("%p:%d\t", current->value.val_ptr_int, *(current->value.val_ptr_int)); break;
		case 9:
			printf("%p:%ld\t", current->value.val_ptr_long, *(current->value.val_ptr_long)); break;
		case 10:
			printf("%p:%f\t", current->value.val_ptr_float, *(current->value.val_ptr_float)); break;
		case 11:
			printf("%p:%lf\t", current->value.val_ptr_double, *(current->value.val_ptr_double)); break;
		}
		current = current -> next;
	}
}