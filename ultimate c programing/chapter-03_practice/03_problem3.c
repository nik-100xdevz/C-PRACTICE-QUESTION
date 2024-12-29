#include <stdio.h>

float calculateTax(float income) {
    float tax = 0.0;

    if (income <= 250000) {
        tax = 0; // No tax for income below or equal to 2.5L
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05; // 5% for income between 2.5L and 5L
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.20; // 5% for 2.5L to 5L + 20% for 5L to 10L
    } else {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30; // 5% + 20% + 30% for above 10L
    }

    return tax;
}

int main() {
    float income;
    
    // Take input from user
    printf("Enter your income (in Lakhs): ");
    scanf("%f", &income);
    
    // Calculate tax
    float tax = calculateTax(income);
    
    // Display the result
    printf("Income Tax to be paid: %.2f\n", tax);
    
    return 0;
}
