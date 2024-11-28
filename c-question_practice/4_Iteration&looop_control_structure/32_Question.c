//Create a program to sum all odd numbers from 1 to a specified number N.
#include <stdio.h>

int main(){
    int num;

    printf("welcome to sum of odd number calculator \n");
    printf("please enter the  number  : ");
    scanf("%d",&num);

    int i =1;
    int sum = 0;
    
    while (i <= num) {
        
        sum = sum + i;

        i= i + 2;
    }
    printf("the sum of all odd number from 1 to %d  is %d \n",num,sum);
     return 0;
}