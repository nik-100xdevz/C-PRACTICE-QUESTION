/*Create a program that calculates grades based on marks
A -> above 90%
B -> above 75%
C -> above 60%
D -> above 30%
F -> below 30%*/
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the marks");
    scanf("%d", &marks);

    if (marks > 90)
    {
        printf("you got A grade");
    }
    else if (marks > 75 && marks <= 90)
    {
        printf("you got b grade");
    }
    else if (marks > 60 && marks < 75)
    {
        printf("you got C grade");
    }
    else if (marks > 30 && marks < 60)
    {
        printf("you got D grade");
    }
    else if (marks > 30 && marks < 60)
    {
        printf("you got f grrade");
    }

    return 0;
}