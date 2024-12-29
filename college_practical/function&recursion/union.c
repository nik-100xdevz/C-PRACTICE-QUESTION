#include <stdio.h>

union emp {
    int id;
    char name[20];
} vivek;

int main() {
    vivek.id = 27;
    strcpy(vivek.name, "Yashashree");
    printf("\nID: %d", vivek.id);
    printf("\nName: %s", vivek.name);
    return 0;
}