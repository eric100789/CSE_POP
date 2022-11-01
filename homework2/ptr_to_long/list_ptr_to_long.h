#ifndef LIST_H_ptr_to_long
#define LIST_H_ptr_to_long

struct LinkList
{
    long * value;
    struct LinkList * next, *prev;
};

typedef struct LinkList list;

list * create_list();
long * ldel_value(list ** , long **);
long * ldel_index(list ** , int);
void ladd_index(list ** , long **, int);
void print_list(list **);

#endif