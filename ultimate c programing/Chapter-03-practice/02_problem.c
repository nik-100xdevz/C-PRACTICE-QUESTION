#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;

    printf("enter your marks1:  \n");
    scanf("%d", &marks1);

    printf("enter your marks2:  \n");
    scanf("%d", &marks2);

    printf("enter your marks3:  \n");
    scanf("%d", &marks3);

    printf("your marks are: %d,%d,%d \n ", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("you are failed due to less marks in individual subjects \n");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("you are fail due to less percentage\n");
    }
    else
    {
        printf("you are passed!\n");
    }
    return 0;
}