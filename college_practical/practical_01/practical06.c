#include <stdio.h>
#include <string.h>

void extractSubstring(char *source, int start, int length) {
    char substring[100];  // Declare a temporary array for the substring
    int i;

    // Extract the substring by copying from source to substring
    for (i = 0; i < length && (start + i) < strlen(source); i++) {
        substring[i] = source[start + i];
    }
    
    substring[i] = '\0';  // Null-terminate the extracted substring
    
    printf("Extracted substring: %s\n", substring);
}

int main() {
    char source[100];
    int start, length;

    // Input string from user
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    
    // Remove newline character added by fgets
    source[strcspn(source, "\n")] = 0;

    // Input starting position and length
    printf("Enter starting position: ");
    scanf("%d", &start);

    printf("Enter length of substring: ");
    scanf("%d", &length);

    // Call the function to extract substring
    extractSubstring(source, start, length);

    return 0;
}