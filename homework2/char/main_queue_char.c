#include <stdio.h>
#include <stdlib.h>
#include "queue_char.h"

int main()
{
    char input;
    char temp;
    char input_int;
    queue * my_queue = create_queue();
    printf("Hello, welcome to my homework2!\n");
    while (1)
    {
        printf("(1)Enqueue (2)Dequeue (3)Print (4)Exit\n>> ");

        while(1)
        {
            fflush(stdin);
            input = getchar();
            if(input == '1')
            {
                fflush(stdin);
                printf("Please input your char\n>> ");
                scanf("%c",&input_int);
                if(input_int == ' ')
                {
                    printf("space is invaild.\n\n");
                }
                else
                {
                    qenqueue(&my_queue,input_int);
                    printf("Your input char is: %c\n\n",input_int);
                }
                break;
            }

            else if(input == '2')
            {
                fflush(stdin);
                temp = qdequeue(&my_queue);
                if(temp == ' ')
                {
                    printf("This queue is empty.\n\n");
                }
                else
                {
                    printf("%c has been deleted.\n\n",temp);
                }
                break;
            }

            else if(input == '3')
            {
                fflush(stdin);
                print_queue(&my_queue);
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