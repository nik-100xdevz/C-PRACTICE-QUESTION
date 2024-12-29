#include <stdio.h>

void countTo100();
int sum(int, int);
int addition;

int main() {

    countTo100();
    int add = sum(1,3);
    printf("\nthe sum is : %d", add);
    
     return 0;
}
void countTo100() {
    for (int i = 1; i <= 100; i++) {
        printf(" \n%d",i);
    }
}

    sum(int first, int second ) {
     addition = first +second;
 
}

