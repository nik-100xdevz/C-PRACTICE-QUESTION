#include <stdio.h>
#include <math.h>

float convertTemp(float celsius);
int main(){
    float far = convertTemp(24);
    printf("the temp is: %f ",far);
    return 0;
}

float convertTemp(float celsius){
    float far= celsius *(9.0 / 5.0)+32;
    return far;
}