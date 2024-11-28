// Create a program that determines if a number is positive, negative, or zero.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("number is positive");
    }
    else if (num < 0)
    {
        printf("number is negative");
    }
    else
        printf("number is zero");

    return 0;
}