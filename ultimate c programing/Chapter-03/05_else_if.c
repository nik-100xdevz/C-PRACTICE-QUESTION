//IMPORTANT NOTE
//1. Using if-else if -else reduces indents.
//2. The last “else” is optional.
//3. Also there can be any number of “else if”.
//4. Last else is executed only if all conditions fail.





#include <stdio.h>

int main(){
    
    int age = 65;
    
    if(age>60){
        printf("you can drive and you are senior citizen \n"); //priority based
    }
    else if(age>18){
        printf("you can drive\n");

    }
     else if(age>40){
        printf("you can drive and you are an elder\n");

    }
    else{
        printf("you cannot drive\n");
    }
    
     return 0;
}

//OPERATOR PRECEDENCE
//Priority Operator
// 1
//st
// !
// 2
//nd
// *, /, %
// 3
//rd +, -
// 4
//th <>, <=, >=
// 5
//th
// ==, !=
// 6
//th &&
// 7
//th ||
// 8
//th =
