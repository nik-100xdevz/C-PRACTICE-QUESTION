/*Create a program to calculate the Area of a Triangle.
Area of triangle = ½BH*/
#include <stdio.h>

int main()
{
    int height, breadth;

    printf("Enter the height of triangle\n");
    scanf("%d", &height);
    printf("Enter the breadth of triangle\n");
    scanf("%d", &breadth);

    printf("area of triangle is %d", (breadth * height) / 2);

    return 0;
}