#include <stdio.h>

void swap(int,int);

int main(){
    int x = 10, y = 20;

    printf("before tryawap -x: %d, y: %d\n ",x,y);

    swap(x,y);

    printf("After tryswap - x %d, y: %d\n", x, y);

    return 0;
}


 void swap(int first, int second) {
    int temp = first;
    first = second;
    second = temp;
    printf("inside tryswap - a: %d, b: %d\n", first, second);

}