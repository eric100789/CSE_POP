#include <stdio.h>
#include "list_short.h"
#include "../mm.h"

list * create_list()
{
    return NULL;
}

void ladd_index(list ** head , short value, int index)
{
	list *newAdded = (list*)mymalloc(sizeof(list));
	list *current = *head;
	 
	newAdded -> next = NULL;
	newAdded -> prev = NULL;
	newAdded -> value = value;

    int now = 0;
	
	if(*head == NULL && index==0)
	{
		*head = newAdded;
	}
    else if(index==0)
    {
		newAdded -> next = (*head);
		(*head) -> prev = newAdded;
		*head = newAdded;
    }
    else
    {
        while(1)
        {
            if(index == now)
            {
                newAdded->next = current;
                newAdded->prev = current->prev;
				current->prev->next = newAdded;
                current->prev = newAdded;
				break;
            }
			else if(current->next == NULL)
			{
				newAdded -> next = current->next;
				newAdded -> prev = current; 
				current -> next = newAdded;
				break;
			}
            current = current->next;
            now++;
        }
    }
}

short ldel_value(list ** head , short value)
{
	list * current = *head; 
	
	while(current->value != value && current -> next != NULL)
	{
		current = current -> next;
	}
	if(current->value == value) {}
	else return -1;
	
	if( current == (*head) )
	{
		(*head) = (*head)->next;
		current->next->prev = NULL;
	}
	else if (current->next == NULL)
	{
		current -> prev -> next = NULL;
	} 
	else
	{
		current -> prev -> next = current -> next;
		current -> next -> prev = current -> prev;
	}
	myfree(current);
	return value;
}

short ldel_index(list ** head , int index)
{
	list * current = *head; 
    short value;
    int now=0;

    if((*head) == NULL) return -1;

    if(index == 0)
    {
        value = (*head)->value;
		if(current -> next != NULL)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
		}
		else
		{
			*head = NULL;
		}
        myfree(current);
        return value;
    }

	if(current -> next == NULL)
	{
		value = current->value;
		myfree(current);
		*head = NULL;
		return value;
	}
	
	while(now != index && current -> next != NULL)
	{
		current = current -> next;
        now++;
	}
    if(current -> next == NULL)
    {
        value = current->value;
        current = current->prev;
        myfree(current->next);
        current->next = NULL;
        return value;
    }
    else if(now == index)
    {
        value = current->value;
        current->prev->next = current->next;
        current->next->prev = current->prev;
        myfree(current);
        return value;
    }
	return 0;
}

void print_list(list ** head)
{
    list * current = *head;
	if(*head == NULL) return;
	while(current -> next != NULL)
	{
        printf("%hd ",current->value);
		current = current -> next;
	}
    printf("%hd ",current->value);
}