/*Create a program to calculate Compound interest.
Compound Interest = P(1 + R/100)t*/
#include <stdio.h>
#include <math.h>//for math function

int main(){
    float P,T,R;

    printf("Enter the Principle amount:\n");//P is the Principal amount (the initial amount of money).
    scanf("%f", &P);
    printf("Enter the Time:\n");//R is the Rate of Interest per year (as a percentage).
    scanf("%f", &T);
    printf("Enter the Rate of interst:\n");//T is the Time the money is invested or borrowed for, in years.
    scanf("%f", &R);

    float compound_intrest = P * pow((1 + R /100),T);

    printf("The compund intrest is: %.2f\n",compound_intrest);
    printf("The compund intrest is: %.2f\n",(P*(1+R/100)/T));
     return 0;
}