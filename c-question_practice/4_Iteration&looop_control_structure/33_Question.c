//Write a function that calculates the factorial of a given number.
#include <stdio.h>

int main(){
    int num;

    printf("welcome to factorial calculator \n");
    printf("please enter the  number  : ");
    scanf("%d",&num);

    int i =1;
    int fact = 1;
    
    while (i <= num) {
        
        fact = fact * i;

        i= i + 1;
    }
    printf("the factorial of  %d  is %d \n",num,fact);
     return 0;
}