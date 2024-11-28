/*Create a program that categorize a person into different age groups:
Child -> below 13
Teen -> below 20
Adult -> below 60
Senior-> above 60
*/
#include <stdio.h>

int main()
{
    int age;

    printf("Enter the age");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("you are senior citizen");
    }
    else if (age > 20 && age <= 60)
    {
        printf("you are an adult");
    }
    else if (age > 13 && age < 20)
    {
        printf("you are child ");
    }
   
    return 0;
}