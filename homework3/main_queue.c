#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "queue_ptr.h"

int main()
{
    char input;
    int check_type;
    queue * my_queue = create_queue();
    printf("Hello, welcome to my homework3!\n");
    while (1)
    {
        printf("(1)Enqueue (2)Dequeue (3)Print (4)Exit\n>> ");
        fflush(stdin);
        input = getchar();
        if(input == '1')
        {
            fflush(stdin);
            int input_type;
            printf("Please input your type number:\n");
            printf("\t0:char 1:short 2:int 3:long 4:float 5:double\n");
            printf("\t6:ptr_to_char 7:ptr_to_short 8:ptr_to_int 9:ptr_to_long 10:ptr_to_float 11:ptr_to_double\n>> ");
            scanf("%d",&input_type);
            switch (input_type) {
            case 0:
                printf("Please input a char\n>> ");
                fflush(stdin);
                char value_char;
                scanf("%c", &value_char);
                if(value_char == ' ') { printf("Invalid input\n"); break;}
                qenqueue_char(&my_queue, value_char, 0);
                break;
            case 1:
                printf("Please input a short integer\n>> ");
                fflush(stdin);
                short value_short;
                scanf("%hd", &value_short);
                if(value_short == -1) { printf("Invalid input\n"); break;}
                qenqueue_short(&my_queue, value_short, 1);
                break;
            case 2:
                printf("Please input a integer\n>> ");
                fflush(stdin);
                int value_int;
                scanf("%d", &value_int);
                if(value_int == -1) { printf("Invalid input\n"); break;}
                qenqueue_int(&my_queue, value_int, 2);
                break;
            case 3:
                printf("Please input a long integer\n>> ");
                fflush(stdin);
                long value_long;
                scanf("%ld", &value_long);
                if(value_long == -1) { printf("Invalid input\n"); break;}
                qenqueue_long(&my_queue, value_long, 3);
                break;
            case 4:
                printf("Please input a float\n>> ");
                fflush(stdin);
                float value_float;
                scanf("%f", &value_float);
                if(value_float == -1) { printf("Invalid input\n"); break;}
                qenqueue_float(&my_queue, value_float, 4);
                break;
            case 5:
                printf("Please input a double\n>> ");
                fflush(stdin);
                double value_double;
                scanf("%lf", &value_double);
                if(value_double == -1) { printf("Invalid input\n"); break;}
                qenqueue_double(&my_queue, value_double, 5);
                break;
            case 6:
                printf("Please input a char\n>> ");
                fflush(stdin);
                char* value_ptr_char = (char*)mymalloc(sizeof(char));
                scanf("%c", value_ptr_char);
                qenqueue_ptr_char(&my_queue, &value_ptr_char, 6);
                break;
            case 7:
                printf("Please input a short integer\n>> ");
                fflush(stdin);
                short* value_ptr_short = (short*)mymalloc(sizeof(short));
                scanf("%hd", value_ptr_short);
                qenqueue_ptr_short(&my_queue, &value_ptr_short, 7);
                break;
            case 8:
                printf("Please input a integer\n>> ");
                fflush(stdin);
                int* value_ptr_int = (int*)mymalloc(sizeof(int));
                scanf("%d", value_ptr_int);
                qenqueue_ptr_int(&my_queue, &value_ptr_int, 8);
                break;
            case 9:
                printf("Please input a long integer\n>> ");
                fflush(stdin);
                long* value_ptr_long = (long*)mymalloc(sizeof(long));
                scanf("%ld", value_ptr_long);
                qenqueue_ptr_long(&my_queue, &value_ptr_long, 9);
                break;
            case 10:
                printf("Please input a float\n>> ");
                fflush(stdin);
                float* value_ptr_float = (float*)mymalloc(sizeof(float));
                scanf("%f", value_ptr_float);
                qenqueue_ptr_float(&my_queue, &value_ptr_float, 10);
                break;
            case 11:
                printf("Please input a double\n>> ");
                fflush(stdin);
                double* value_ptr_double = (double*)mymalloc(sizeof(double));
                scanf("%lf", value_ptr_double);
                qenqueue_ptr_double(&my_queue, &value_ptr_double, 11);
                break;
            }
        }

        else if(input == '2')
        {
            fflush(stdin);
            check_type = qcheck(&my_queue);
			switch (check_type) {
            case -1:
                printf("This queue is empty!\n\n"); break;
			case 0:
				printf("%c has been delete.\n\n",qdequeue_char(&my_queue)); break;
			case 1:
				printf("%hd has been delete\n\n",qdequeue_short(&my_queue)); break;
			case 2:
				printf("%d has been delete\n\n",qdequeue_int(&my_queue)); break;
			case 3:
				printf("%ld has been delete\n\n",qdequeue_long(&my_queue)); break;
			case 4:
				printf("%f has been delete\n\n",qdequeue_float(&my_queue)); break;
			case 5:
				printf("%lf has been delete\n\n",qdequeue_double(&my_queue)); break;
			case 6:
				printf("%c has been delete\n\n",(*qdequeue_ptr_char(&my_queue))); break;
			case 7:
				printf("%hd has been delete\n\n",(*qdequeue_ptr_short(&my_queue))); break;
			case 8:
				printf("%d has been delete\n\n",(*qdequeue_ptr_int(&my_queue))); break;
			case 9:
			    printf("%ld has been delete\n\n",(*qdequeue_ptr_long(&my_queue))); break;
			case 10:
				printf("%f has been delete\n\n",(*qdequeue_ptr_float(&my_queue))); break;
			case 11:
				printf("%lf has been delete\n\n",(*qdequeue_ptr_double(&my_queue))); break;
			}
        }

        else if(input == '3')
        {
            fflush(stdin);
            print_queue(&my_queue);
            printf("\n\n");
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
        }
        
    }
    

    return 0;
}