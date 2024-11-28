/*Create a program to calculate the absolute value of a given integer using ternary operator.*/
#include <stdio.h>

int main(){
    int num1;
    printf("enter integer:");
    scanf("%d",&num1);

    int absoulute_value = (num1<0) ? -num1: num1;

     printf("The absolute value of %d is %d.\n", num1, absoulute_value);

    
 return 0;
}