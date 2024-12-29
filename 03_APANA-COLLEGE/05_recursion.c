#include <stdio.h>

int calculate_percentage(int science, int maths, int sanskrit);


int main(){
    int sc = 98 , math = 95, sanskrit = 99;
    printf("the percentage is of subject is %d", calculate_percentage(sc,math,sanskrit));

     return 0;
}


int calculate_percentage(int science, int maths, int sanskrit) {
    return ((science+ maths + sanskrit) / 3);
}