//b. Write a function to find square root of a number.
#include <stdio.h>
#include <math.h>

double sqrofN(double n);
int main(){
    double n;
    printf("enter of number for square root :");
    scanf("%lf",&n);
    printf("%lf",sqrofN(n));

    return 0;
}

double sqrofN(double n){
    return sqrt(n);

}