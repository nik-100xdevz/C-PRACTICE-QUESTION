// Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user
#include <stdio.h>

int main()
{
    const float Pi = 3.14159;
    int radius;

    printf("enter the radius of circle in cm:");
    scanf("%d", &radius);

    printf("the circumference of circle %f cm2", 2 * Pi * radius);

    return 0;
}