#include <stdio.h>

int main(){
    int num = 10;
    int *ptr;
    ptr = &num;
    printf("\n value of ptr : %p", ptr);
     return 0;
}