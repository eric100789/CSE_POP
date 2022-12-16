#include <stdio.h>
#include <stdlib.h>
#include "queue_int.h"

int main()
{
    char input;
    int input_int,temp;
    queue * my_queue = create_queue();
    printf("Hello, welcome to my homework1!\n");
    while (1)
    {
        printf("(1)Enqueue (2)Dequeue (3)Print (4)Exit\n>> ");

        while(1)
        {
            
            input = getchar();
            getchar();
            if(input == '1')
            {
                
                printf("Please input your integer\n>> ");
                scanf("%d",&input_int);
                getchar();
                if(input_int == -1)
                {
                    printf("-1 is invaild.\n\n");
                }
                else
                {
                    qenqueue(&my_queue,input_int);
                    printf("Your input interger is: %d\n\n",input_int);
                }
                break;
            }

            else if(input == '2')
            {
                
                temp = qdequeue(&my_queue);
                if(temp == -1)
                {
                    printf("This queue is empty.\n\n");
                }
                else
                {
                    printf("%d has been deleted.\n\n",temp);
                }
                break;
            }

            else if(input == '3')
            {
                
                print_queue(&my_queue);
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