#include <stdio.h>
#include <stdlib.h>
#include "stack_ptr_to_double.h"
#include "../mm.h"

int main()
{
    char input;
    double * temp;
    double * input_int;
    stack * my_stack = create_stack();
    printf("Hello, welcome to my homework2!\n");
    while (1)
    {
        printf("(1)Push (2)Pop (3)Print (4)Exit\n>> ");

        while(1)
        {
            
            input = getchar();
            getchar();
            if(input == '1')
            {
                
                printf("Please input your double\n>> ");
                input_int = (double*)mymalloc(sizeof(double));
                scanf("%lf",input_int);
                getchar();
                if(input_int == NULL)
                {
                    printf("NULL is invaild.\n\n");
                }
                else
                {
                    spush(&my_stack,&input_int);
                    printf("Your input double is: %lf\n\n",(*input_int));
                }
                break;
            }

            else if(input == '2')
            {
                
                temp = spop(&my_stack);
                if(temp == NULL)
                {
                    printf("This stack is empty.\n\n");
                }
                else
                {
                    printf("%lf has been deleted.\n\n",(*temp));
                }
                break;
            }

            else if(input == '3')
            {
                
                print_stack(&my_stack);
                printf("\n\n");
                break;
            }

            else if (input == '4')
            {
                
                printf("Exiting...\n");
                return 0;
            }

            else
            {
                
                printf("Wrong number, please input again.\n\n");
                break;
            }
            
        }
        
    }
    

    return 0;
}