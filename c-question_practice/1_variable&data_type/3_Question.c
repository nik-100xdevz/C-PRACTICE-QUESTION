// Create a program to input name of the person and respond with ”Welcome NAME to KG Coding”
#include <stdio.h>

int main()
{
    char a[20];
    printf("welcome to kg coding please enter your name: ");
    scanf("%s", &a);
    printf("\nWelcome  %s to kg coding ", a);
    return 0;
}