//Create a program that determines the greatest of the three numbers.
#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    printf("Enter the third number:\n");
    scanf("%d", &num3);

    
    if (num1>num2&num3)
    {
        printf("\nFirst number  is greatest");
    } else if (num2>num3&num1) {
        printf("Second number  is greatest");
    } else{
        printf("Third number is greatest"); 
    }
        
        

    return 0;
}