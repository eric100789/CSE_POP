#ifndef LIST_H_DOUBLE
#define LIST_H_DOUBLE

struct LinkList
{
    double value;
    struct LinkList * next, *prev;
};

typedef struct LinkList list;

list * create_list();
double ldel_value(list ** , double);
double ldel_index(list ** , int);
void ladd_index(list ** , double, int);
void print_list(list **);

#endif