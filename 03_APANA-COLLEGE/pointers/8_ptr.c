// swap two number
#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 4;
    int y = 5;
    swap(x, y);
    printf(" x = %d and y = %d\n", x, y);

    return 0;
}

// call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf(" a = %d and b = %d\n", a, b);
}
// call by refrence
void _swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf(" a = %d and b = %d\n", *a, *b);
}