/*Create a program to calculate Perimeter of a rectangle.
Perimeter of rectangle ABCD = A+B+C+D*/

#include <stdio.h>

int main(){

     int a,b,c,d;

    printf("enter the first side of rectangle:\n");
    scanf("%d",&a);

    printf("enter the second side of rectangle:\n");
    scanf("%d",&b);

    printf("enter the third side of rectangle:\n");
    scanf("%d",&c);
    
    printf("enter the fourth side of rectangle:\n");
    scanf("%d",&d);

    printf("the perimeter of rectengle is %d",a+b+c+d);

    
     return 0;
}