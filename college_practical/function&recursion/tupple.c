#include <stdio.h>

int main() {
    int i;  // Loop variable
    
    // Start printing the tuple
    printf("(");
    
    // Logic to print the sequence
    for (i = 1; i <= 8; i++) {
        if (i == 3) {
            // Skip printing 3 to repeat 2 again
            printf("2");
        } else {
            // Print the current value of i
            printf("%d", i);
        }

        if (i < 8) {
            // Print comma and space between elements
            printf(", ");
        }
    }
    
    // End the tuple
    printf(")\n");
    
    return 0;
}
