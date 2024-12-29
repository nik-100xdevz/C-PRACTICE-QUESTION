#include <stdio.h>

int main(){
    int age = 15;
  
  if (age > 10){  //greater than [<,>,==,] is relational operator
    printf("we are inside if\n");
    printf("your age greater than 10\n");
     
  }
    if (age%5 ==0 ){ //age%5 when we divide age by 5 than it will tell if its divisable or not in c languge if you want to check equality vthan you havce to put equal to sign two times , In c language is single equal to is assignment operator 
    printf("we are inside  another if\n");
    printf("your age is divisible by 5\n");
     
  }
     return 0;
}