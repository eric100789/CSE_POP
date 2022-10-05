#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    char input;
    int input_int,temp;
    stack * my_stack = create_stack();
    printf("Hello, welcome to my homework1!\n");
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
                printf("Please input your integer\n>> ");
                scanf("%d",&input_int);
                if(input_int == -1)
                {
                    printf("-1 is invaild.\n\n");
                }
                else
                {
                    spush(&my_stack,input_int);
                    printf("Your input interger is: %d\n\n",input_int);
                }
                break;
            }

            else if(input == '2')
            {
                fflush(stdin);
                temp = spop(&my_stack);
                if(temp == -1)
                {
                    printf("This stack is empty.\n\n");
                }
                else
                {
                    printf("%d has been deleted.\n\n",temp);
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