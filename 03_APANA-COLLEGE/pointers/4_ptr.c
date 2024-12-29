#include <stdio.h>

int main()
{
    int x;
    int *ptr;
    ptr = &x;
    *ptr = 0; // x = 0

    printf("\t%d\n", x);    // 0
    printf("\t %d\n", *ptr); // 0

    *ptr += 5;                   // x = x+5
    printf("x = %d\n", x);       // x=5
    printf("*ptr = %d\n", *ptr); // x =5

    (*ptr)++;                    //(x+5)+1 increment operator
    printf("x = %d\n", x);       // x = 6
    printf("*ptr = %d\n", *ptr); // x  = 6

    return 0;
}
