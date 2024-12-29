#include <stdio.h>

int main(){
    // Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
    int x = 2; //int x=2, y=3, z=3, k=1;
    int y = 3;
    int z = 3;
    int k = 1;
     float e = 3*x/y - z + k;
    //   float e = 6/y - z + k;
        //   float e = 2 - z + k;
            //   float e = -1 + k;
             //   float e =0;
    printf("the value of e is %f",e); // %f,%d,%c is called format specifiers
     return 0;
}