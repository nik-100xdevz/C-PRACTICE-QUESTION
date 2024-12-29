//Write a program to find greatest of four numbers entered by the user.
#include <stdio.h>

int main(){
    int a=22,b=33,c=44,d=190;
  //  prin=22tf=33("=44en=190ter number : \n");
   // scanf("%d %d %d and %d", &a , &b, &c, &d);
    

    if(a>b && a>c && a>d){
        printf("the greatest of all is %d \n", a);
    }
  else if(b>a && b>c && b>d){
        printf("the greatest of all is %d \n",b);
    }
      else if(c>b && c>b && c>d){
        printf("the greatest of all is %d \n",c);
    }
     else if(d>a && d>b && d>c){
        printf("the greatest of all is %d \n",d);
    }

     return 0;
}