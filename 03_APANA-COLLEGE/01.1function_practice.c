#include <stdio.h>

void printHello();//declaration/prototype
void printGoodbye();//declaration/prototype

int main(){
    printHello(); //function call
    printGoodbye() ;//function call
 
     return 0;
}   
//function defination
void printHello() {

    printf("hello,world\n");



}
void printGoodbye() {

    
    printf("Good_bye\n");


}