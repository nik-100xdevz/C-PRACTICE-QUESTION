//Create a program to find the Greatest Common Divisor (GCD) of two integers.
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    return a;
    }
}

int main() {
    
    
    int num1, num2;
    
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, &result);

    return 0;
}