#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	list * list = create_list();
	
	ladd_index(&list , 3, 0);
    ladd_index(&list , 1, 2);
    ladd_index(&list , 2, 0);
    ladd_index(&list , 4, 0);
    ladd_index(&list , 5, 0);
    ladd_index(&list , 7, 0);
    ladd_index(&list , 9, 0);
	
    print_list(&list);

	ldel_index(&list , 6);

    printf("\n");

    print_list(&list);


	
	return 0;	
} 