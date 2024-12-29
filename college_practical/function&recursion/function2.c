#include <stdio.h>

void countTo100();//parameters variable in a function defination, acting as place holders 
int sum(int, int);// Arguments actual values passed to a function at acalll time

int main()
{

    countTo100();
    int add = sum(1, 3);
    printf("\nthe sum is : %d", add);

    int x = 9, y = 54, z = sum(x, y);
    printf("\nthe sum is : %d", z);

    return 0;
}
void countTo100()
{
    for (int i = 1; i <= 100; i++)
    {
        printf(" \n%d", i);
    }
}

sum(int first, int second)
{
    int addition = first + second;
    return addition;
}
