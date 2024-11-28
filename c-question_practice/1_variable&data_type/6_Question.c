//Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
#include <stdio.h>

int main(){
    char first_name[20];
    char last_name[20];
    int age = 20;// = 'raj';
   // char last_name[20] = 'yadav';
    printf("enter the first name:\n");
    scanf("%s",&first_name);
    printf("enter the second name:");
    scanf("%s",&last_name);

    printf("your name is %s %s and age is %d\n",first_name, last_name, age);


     return 0;
}