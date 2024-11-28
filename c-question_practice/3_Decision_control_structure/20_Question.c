// Create a program that determines if a number is odd or even
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    (num % 2 == 0)? printf("the number is even"):printf("the number is odd");//this is ternary operator

    //if (num % 2 == 0)
    //{
    //    printf("number is even");
    ///}

   // else
     //   printf("number is odd");

    return 0;
}