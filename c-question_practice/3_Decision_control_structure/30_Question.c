/*Create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition, subtraction, multiplication, and division*/
#include <stdio.h>

int main()
{
    int num1, num2;
    char choice;
    printf("Welcome to calculator\n");

     printf("enter the  first number:\n");
    scanf("%d", &num1);
    
    printf("enter the  second number:\n");
    scanf("%d", &num2);

    printf("enter the choice \n.1 addition (+)\n.2 subtraction(-)\n.3 multiplication (*)\n.4 division (/): ");
    scanf("%c", &choice);
    


    float res;
    int invalid = 0;
    switch (choice)
    {
    case '+': res = num1 + num2;
    
        break;
    case '-': res = num1 - num2;
    
        break;
    case '*': res = num1 * num2;
   
        break;
    case '/': res = num1 / num2;
     break;
    default:
        invalid = 1;
        printf("Invalid operator please enter (+,-,*,/)");
        break;
    }
    if (invalid ==0){ //flag
        printf("the result is : %.2f",res);
    } else {
        printf("invalid operator, please enter (+,-,*,/)");
    }

    return 0;
}