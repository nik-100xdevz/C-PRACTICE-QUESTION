#include <stdio.h>

int main()
{
    int a = 9;       // int and int   > int
    float b = 2;     // int and float > float
    float c = a / b;  // float and float > float
    int d = 6.7;
    printf("the value of a/b is %f\n", c);
    printf("the value of d is %d",d);
    return 0;
}