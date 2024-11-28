//Create a program to print the area of a circle by inputting its radius.
#include <stdio.h>

int main(){
    const float PI = 3.14159;
    int radius;
    printf("enter the radius:");
    scanf("%d", &radius);

    printf("area of circle is %f", PI *(radius*radius));
     return 0;
}