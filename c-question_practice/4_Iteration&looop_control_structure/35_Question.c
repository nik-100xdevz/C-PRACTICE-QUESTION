//Create a program to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h>

int main(){
    int first,second;

    printf("welcome to LCM calculator \n");
    printf("please enter the first number  : ");
    scanf("%d",&first);
    printf("please enter the  second number  : ");
    scanf("%d",&second);

    int min =  first > second ?first : second;
    
    int max = first * second;

    for  (int i = min; i <= max; i++) {
        if (i % first == 0 && i % second == 0 ){
            printf("the lcm  of %d and %d  is %d \n",first,second,i);
          break;
        }
    }
    
     return 0;
}