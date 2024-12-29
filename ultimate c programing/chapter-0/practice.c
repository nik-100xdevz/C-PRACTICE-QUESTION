#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char s1[1000], s2[1000];

    // Input string from user
    printf("Enter the string: ");
    fgets(s1, sizeof(s1), stdin);

    // Remove newline character added by fgets
    s1[strcspn(s1, "\n")] = 0;

    // Copy the original string to s2
    strcpy(s2, s1);

    // Reverse the string manually
    reverseString(s2);

    // Check if the original and reversed strings are equal
    if (strcmp(s1, s2) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}