//Create a program that computes the sum of the digits of an integer.
#include <stdio.h>

int main(){
    int num;

    printf("welcome to sum of integer number calculator \n");
    printf("please enter the  number  : ");
    scanf("%d",&num);

    int sum = 0;
    int copy = num;
    while (  num > 0) {
      sum = sum + (num % 10);
        num = num /10;
    }
    printf("the sum of digit  of %d  is %d \n",copy,sum);
     return 0;
}