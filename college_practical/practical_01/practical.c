//Practical 1(b)
//Write a Program to find the greatest of three numbers using the conditional operator.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3); // Use spaces for input

    // Find the greatest number using the conditional operator
    int greatest = (num1 > num2) 
                     ? ((num1 > num3) ? num1 : num3) 
                     : ((num2 > num3) ? num2 : num3);

    // Print the result
    printf("The greatest number is: %d\n", greatest);
    
    return 0;
}
