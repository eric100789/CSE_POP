#ifndef LIST_H_CHAR
#define LIST_H_CHAR

struct LinkList
{
    char value;
    struct LinkList * next, *prev;
};

typedef struct LinkList list;

list * create_list();
char ldel_value(list ** , char);
char ldel_index(list ** , int);
void ladd_index(list ** , char, int);
void print_list(list **);

#endif