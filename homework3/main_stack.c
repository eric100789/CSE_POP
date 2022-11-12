#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stack_ptr.h"

int main()
{
    char input;
    int check_type;
    stack * my_stack = create_stack();
    printf("Hello, welcome to my homework3!\n");
    while (1)
    {
        printf("(1)Push (2)Pop (3)Print (4)Exit\n>> ");
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
                spush_char(&my_stack, value_char, 0);
                break;
            case 1:
                printf("Please input a short integer\n>> ");
                fflush(stdin);
                short value_short;
                scanf("%hd", &value_short);
                if(value_short == -1) { printf("Invalid input\n"); break;}
                spush_short(&my_stack, value_short, 1);
                break;
            case 2:
                printf("Please input a integer\n>> ");
                fflush(stdin);
                int value_int;
                scanf("%d", &value_int);
                if(value_int == -1) { printf("Invalid input\n"); break;}
                spush_int(&my_stack, value_int, 2);
                break;
            case 3:
                printf("Please input a long integer\n>> ");
                fflush(stdin);
                long value_long;
                scanf("%ld", &value_long);
                if(value_long == -1) { printf("Invalid input\n"); break;}
                spush_long(&my_stack, value_long, 3);
                break;
            case 4:
                printf("Please input a float\n>> ");
                fflush(stdin);
                float value_float;
                scanf("%f", &value_float);
                if(value_float == -1) { printf("Invalid input\n"); break;}
                spush_float(&my_stack, value_float, 4);
                break;
            case 5:
                printf("Please input a double\n>> ");
                fflush(stdin);
                double value_double;
                scanf("%lf", &value_double);
                if(value_double == -1) { printf("Invalid input\n"); break;}
                spush_double(&my_stack, value_double, 5);
                break;
            case 6:
                printf("Please input a char\n>> ");
                fflush(stdin);
                char* value_ptr_char = (char*)mymalloc(sizeof(char));
                scanf("%c", value_ptr_char);
                spush_ptr_char(&my_stack, &value_ptr_char, 6);
                break;
            case 7:
                printf("Please input a short integer\n>> ");
                fflush(stdin);
                short* value_ptr_short = (short*)mymalloc(sizeof(short));
                scanf("%hd", value_ptr_short);
                spush_ptr_short(&my_stack, &value_ptr_short, 7);
                break;
            case 8:
                printf("Please input a integer\n>> ");
                fflush(stdin);
                int* value_ptr_int = (int*)mymalloc(sizeof(int));
                scanf("%d", value_ptr_int);
                spush_ptr_int(&my_stack, &value_ptr_int, 8);
                break;
            case 9:
                printf("Please input a long integer\n>> ");
                fflush(stdin);
                long* value_ptr_long = (long*)mymalloc(sizeof(long));
                scanf("%ld", value_ptr_long);
                spush_ptr_long(&my_stack, &value_ptr_long, 9);
                break;
            case 10:
                printf("Please input a float\n>> ");
                fflush(stdin);
                float* value_ptr_float = (float*)mymalloc(sizeof(float));
                scanf("%f", value_ptr_float);
                spush_ptr_float(&my_stack, &value_ptr_float, 10);
                break;
            case 11:
                printf("Please input a double\n>> ");
                fflush(stdin);
                double* value_ptr_double = (double*)mymalloc(sizeof(double));
                scanf("%lf", value_ptr_double);
                spush_ptr_double(&my_stack, &value_ptr_double, 11);
                break;
            }
        }

        else if(input == '2')
        {
            fflush(stdin);
            check_type = scheck(&my_stack);
			switch (check_type) {
            case -1:
                printf("This stack is empty!\n\n"); break;
			case 0:
				printf("%c has been delete.\n\n",spop_char(&my_stack)); break;
			case 1:
				printf("%hd has been delete\n\n",spop_short(&my_stack)); break;
			case 2:
				printf("%d has been delete\n\n",spop_int(&my_stack)); break;
			case 3:
				printf("%ld has been delete\n\n",spop_long(&my_stack)); break;
			case 4:
				printf("%f has been delete\n\n",spop_float(&my_stack)); break;
			case 5:
				printf("%lf has been delete\n\n",spop_double(&my_stack)); break;
			case 6:
				printf("%c has been delete\n\n",(*spop_ptr_char(&my_stack))); break;
			case 7:
				printf("%hd has been delete\n\n",(*spop_ptr_short(&my_stack))); break;
			case 8:
				printf("%d has been delete\n\n",(*spop_ptr_int(&my_stack))); break;
			case 9:
			    printf("%ld has been delete\n\n",(*spop_ptr_long(&my_stack))); break;
			case 10:
				printf("%f has been delete\n\n",(*spop_ptr_float(&my_stack))); break;
			case 11:
				printf("%lf has been delete\n\n",(*spop_ptr_double(&my_stack))); break;
			}
        }

        else if(input == '3')
        {
            fflush(stdin);
            print_stack(&my_stack);
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