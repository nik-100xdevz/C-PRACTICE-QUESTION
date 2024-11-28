//Create a program to calculate product of two floating points numbers.
#include <stdio.h>

int main(){
        
    float num1,num2;

    printf("enter the first number:\n");
    scanf("%f",&num1);

    printf("enter the second number:\n");
    scanf("%f",&num2);

    float result = (num1 * num2);

    printf("the proiduct of two floating number is %f\n",result);
    printf("the proiduct of two floating number is %.2f",num1 * num2);//it does round of

     return 0;
}