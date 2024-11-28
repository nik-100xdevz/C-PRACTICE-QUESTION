// Create a program to print the area of a square by inputting its side length
#include <stdio.h>

int main()
{
    int side_length;
    printf("Enter the side of square in cm:");
    scanf("%d", &side_length);

    printf("Area of square is %d cm2", side_length * side_length);

    return 0;
}