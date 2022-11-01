#include <stdio.h>
#include <stdlib.h>
#include "stack_ptr_to_long.h"
#include "../mm.h"

int main()
{
    char input;
    long * temp;
    long * input_int;
    stack * my_stack = create_stack();
    printf("Hello, welcome to my homework2!\n");
    while (1)
    {
        printf("(1)Push (2)Pop (3)Print (4)Exit\n>> ");

        while(1)
        {
            fflush(stdin);
            input = getchar();
            if(input == '1')
            {
                fflush(stdin);
                printf("Please input your long\n>> ");
                input_int = (long*)mymalloc(sizeof(long));
                scanf("%ld",input_int);
                if(input_int == NULL)
                {
                    printf("NULL is invaild.\n\n");
                }
                else
                {
                    spush(&my_stack,&input_int);
                    printf("Your input long is: %ld\n\n",(*input_int));
                }
                break;
            }

            else if(input == '2')
            {
                fflush(stdin);
                temp = spop(&my_stack);
                if(temp == NULL)
                {
                    printf("This stack is empty.\n\n");
                }
                else
                {
                    printf("%ld has been deleted.\n\n",(*temp));
                }
                break;
            }

            else if(input == '3')
            {
                fflush(stdin);
                print_stack(&my_stack);
                printf("\n\n");
                break;
            }

            else if (input == '4')
            {
                fflush(stdin);
                printf("Exiting...\n");
                return 0;
            }

            else
            {
                fflush(stdin);
                printf("Wrong number, please input again.\n\n");
                break;
            }
            
        }
        
    }
    

    return 0;
}