//area of circle , square ,a rectengle
#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float length , float breadth);




int main(){
    float length = 5.0;
    float breadth = 10.0;

    printf("area is : %f ", rectangleArea( length ,  breadth));
     return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float rad) {
    return 3.14 * rad * rad;
}

float rectangleArea(float length , float breadth) {
    return length * breadth;
}