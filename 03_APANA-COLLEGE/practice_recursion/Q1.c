//a. Write a function to find sum of digits of a number.
#include <stdio.h>
#include <math.h> 

int sum(int a,int b);

int main(){
    int a = 4, b =5;
    printf("the sum of a and b is :%d ", sum(a,b));
     return 0;
}


int sum(int a,int b){
    return a + b;
}