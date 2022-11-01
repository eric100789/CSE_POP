#ifndef LIST_H_FLOAT
#define LIST_H_FLOAT

struct LinkList
{
    float value;
    struct LinkList * next, *prev;
};

typedef struct LinkList list;

list * create_list();
float ldel_value(list ** , float);
float ldel_index(list ** , int);
void ladd_index(list ** , float, int);
void print_list(list **);

#endif