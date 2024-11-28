#include <stdio.h>

void count_to_100();
void sum(int,int);
int main(){
    int sum;
    count_to_100();
    int add = sum (4,5);
    printf("the sum is :%d", add);

     return 0;
}
void count_to_100() {
    for (int i =1 ; i <= 100; i++) {
        printf(" %d", i);
    }
}

void sum(int first, int second){
    int addition = first + second;
}