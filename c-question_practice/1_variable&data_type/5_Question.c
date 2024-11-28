//Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.
#include <stdio.h>

int main(){
    int integer;
    float floating;
    char character;
    double doub;
   // printf("Enter the value of a is ");
  //  scanf("%d",&a);
    printf("size of a is (%lu) bytes\n",sizeof(integer));
    printf("size of a is (%lu) bytes\n",sizeof(floating));
    printf("size of a is (%lu) bytes\n",sizeof(character));
    printf("size of a is (%lu) bytes\n",sizeof(doub));

     return 0;
}