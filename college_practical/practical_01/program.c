//write a program to read title , author and price of 10 booka using array of string, display,the records in ascesnding in c language
#include <stdio.h>
#include <string.h>

// Defining a structure to store book details
struct Book {
    char title[50];
    char author[50];
    float price;
};

void sortBooks(struct Book books[], int n);

int main() {
    struct Book books[10];
    int i;

    // Reading details of 10 books
    printf("Enter details of 10 books:\n");
    for (i = 0; i < 10; i++) {
        printf("\nBook %d:\n", i + 1);

        printf("Enter title: ");
        scanf(" %[^\n]", books[i].title);  // Reading the title (string with spaces)

        printf("Enter author: ");
        scanf(" %[^\n]", books[i].author);  // Reading the author (string with spaces)

        printf("Enter price: ");
        scanf("%f", &books[i].price);  // Reading the price
    }

    // Sorting the books based on price
    sortBooks(books, 10);

    // Displaying the sorted list of books
    printf("\nBooks in ascending order of price:\n");
    for (i = 0; i < 10; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}

// Function to sort the books based on their price
void sortBooks(struct Book books[], int n) {
    int i, j;
    struct Book temp;

    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (books[j].price > books[j + 1].price) {
                // Swap the two books if the price is greater
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}
