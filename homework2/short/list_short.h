#ifndef LIST_H_SHORT
#define LIST_H_SHORT

struct LinkList
{
    short value;
    struct LinkList * next, *prev;
};

typedef struct LinkList list;

list * create_list();
short ldel_value(list ** , short);
short ldel_index(list ** , int);
void ladd_index(list ** , short, int);
void print_list(list **);

#endif