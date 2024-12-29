//LOGICAL OPERATORS
//&&, || and !, are three logical operators in C. These are read as “AND”, “OR” and “NOT”
//They are used to provide logic to our C programs.
//USAGE OF LOGICAL OPERATORS:
//1. && (AND) → is true when both the conditions are true
//a. “1 and 0” is evaluated as false.
//b. “0 and 0” is evaluated as false.
//c. “1 and 1” is evaluated as true.
//2. || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1) (1 or 1 → 1)
//3. ! (NOT) → returns true if given false and false if given true
//a. !(3==3) → evaluates to false
//b. !(3>30) → evaluates to true.
//As the number of conditions increases, the level of indentation increases. This reduces
//readability. Logical operators come to rescue in such cases.



#include <stdio.h>

int main(){
    int a=0; int b=0;
    printf("the value of a and b is %d\n", a&&b);
    printf("the value of a or b is %d\n", a||b);
    printf("the value of not(a)is %d\n", !a);
    
    if (a && b ){
        printf("both are true \n");
    }
    //is same as writing ..
    if(a){
        if (b){
            printf("both are true\n");   //As the number of conditions increases, the level of indentation increases. This reduces readability. Logical operators come to rescue in such cases.
        }
    }
     return 0;
}