// Create a program to swap two numbers.
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int temp;

    printf("Enter the 1st number:\n");
    scanf("%d", &num1);

    printf("Enter the 2nd number:\n");
    scanf("%d", &num2);

    printf("the number before swap is %d and %d\n", num1,num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("after the swap \n");

    printf("the first number is %d and second number is %d", num1, num2);


    return 0;
}