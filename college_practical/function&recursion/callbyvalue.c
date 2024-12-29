#include <stdio.h>

// Function to swap two numbers using call by value
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Call swap function
    swap(num1, num2);

    // After swap function (values remain the same outside the function)
    printf("After swap function (in main): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}