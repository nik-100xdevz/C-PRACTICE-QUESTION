//Given an integer value, convert it to a floating-point value and print both.
#include <stdio.h>

int main(){
    int num;
    printf("ENter the number:\n");
    scanf("%d",&num);

    float floating = num;

    printf("your number is %d\n",num);
    printf("your floating number is %f\n",floating);
    printf("your the value of number is %f\n",(float)num);//type castting

     return 0;
}