/*Create a program to convert Fahrenheit to Celsius
°C = (°F - 32) × 5/9
*/
#include <stdio.h>

int main(){
     float F;

    printf("Enter the temprature in Fahrenheit :\n");
    scanf("%f", &F);
   
    float Celsius = (F-32)*5/9;

    printf("The temprature in celsius is: %.2f\n",Celsius);
     return 0;
}