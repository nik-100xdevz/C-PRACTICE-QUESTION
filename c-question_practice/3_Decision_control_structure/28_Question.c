/*Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).*/
#include <stdio.h>

int main(){
    int score,high,moderate,low;
    printf("enter your score:\n");
    scanf("%d",&score);

    printf("\n Your score in this category: ");
   score > 80 ? printf("high")
                : (score >= 50 ? printf("Moderate") 
                               : printf("low"));
  
    

     return 0;
}