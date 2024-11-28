/*Create a program to calculate simple interest.
Simple Interest = (P x T x R)/100*/
#include <stdio.h>

int main(){
    
    int P,T,R;

    printf("Enter the Principle amount:\n");//P is the Principal amount (the initial amount of money).
    scanf("%d", &P);
    printf("Enter the Time:\n");//R is the Rate of Interest per year (as a percentage).
    scanf("%d", &T);
    printf("Enter the Rate of interst:\n");//T is the Time the money is invested or borrowed for, in years.
    scanf("%d", &R);

    printf("The simple intrest is: %d",(P*T*R)/100);



     return 0;
}