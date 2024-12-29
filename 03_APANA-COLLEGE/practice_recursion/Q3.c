//c. Write a function to print "Hot" or "Cold" depending
//on the temperature user enters.
#include <stdio.h>

int main() {
    float temp;
    printf("Enter the temprature :");
    scanf("%f",&temp);
    if ( temp >=32.0){
        printf("the weather is hot");
    } else { 
        printf("the temprature is cold");
    }

   return 0;
}


