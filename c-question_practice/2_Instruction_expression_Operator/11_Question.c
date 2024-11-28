//Create a program that takes two numbers and shows result of all arithmetic operators (+,-,*,/,%).
#include <stdio.h>

int main(){
    
    int num1,num2;

    printf("enter the first number:");
    scanf("%d",&num1);

    printf("enter the second number:");
    scanf("%d",&num2);

    printf("Here are the result of arthmatic operation:\n");
    printf("%d + %d = %d\n", num1, num2,(num1 + num2));
    printf("%d - %d = %d\n", num1, num2,(num1 - num2));
    printf("%d * %d = %d\n", num1, num2,(num1 * num2));
    printf("%d / %d = %d\n", num1, num2,(num1 / num2));
    printf("modulas of %d and %d = %d\n", num1, num2,(num1 % num2));



     return 0;
}