#include <stdio.h>

int main() {
    int num1, num2, num3, greatest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using conditional operator to find the greatest number
    greatest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) 
                             : ((num2 > num3) ? num2 : num3);

    // Output the result
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
