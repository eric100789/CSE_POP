#ifndef LIST_H_INT
#define LIST_H_INT

struct LinkList
{
    int value;
    struct LinkList * next, *prev;
};

typedef struct LinkList list;

list * create_list();
int ldel_value(list ** , int);
int ldel_index(list ** , int);
void ladd_index(list ** , int, int);
void print_list(list **);

#endif