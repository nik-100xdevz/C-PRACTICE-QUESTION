#include <stdio.h>

int main()
{
    int i;
    printf("Enter number: \n");
    scanf("%d", &i); // Removed the '\n' from format specifier

    // Check divisibility using the ternary operator
    (i % 4 == 0) ? printf("divisible\n") : printf("not divisible\n"); // Fixed printf typo and used 4

    return 0;
}
