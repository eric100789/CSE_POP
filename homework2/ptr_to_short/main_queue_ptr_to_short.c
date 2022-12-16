#include <stdio.h>
#include <stdlib.h>
#include "queue_ptr_to_short.h"
#include "../mm.h"

int main()
{
    char input;
    short * temp;
    short * input_int;
    queue * my_queue = create_queue();
    printf("Hello, welcome to my homework2!\n");
    while (1)
    {
        printf("(1)Enqueue (2)Dequeue (3)Print (4)Exit\n>> ");

        while(1)
        {
            
            input = getchar();
            getchar();
            if(input == '1')
            {
                
                printf("Please input your short\n>> ");
                input_int = (short*)mymalloc(sizeof(short));
                scanf("%hd",input_int);
                getchar();
                if(input_int == NULL)
                {
                    printf("NULL is invaild.\n\n");
                }
                else
                {
                    qenqueue(&my_queue,&input_int);
                    printf("Your input short is: %hd\n\n",(*input_int));
                }
                break;
            }

            else if(input == '2')
            {
                
                temp = qdequeue(&my_queue);
                if(temp == NULL)
                {
                    printf("This queue is empty.\n\n");
                }
                else
                {
                    printf("%hd has been deleted.\n\n",(*temp));
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