/*Create a program to find the minimum of two numbers using ternary operator.*/
#include <stdio.h>

int main(){
    int num1,num2,min;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);

    min = (num1 < num2) ? num1 : num2;
      printf("The minimum of %d and %d is %d\n", num1, num2, min);

     return 0;
}