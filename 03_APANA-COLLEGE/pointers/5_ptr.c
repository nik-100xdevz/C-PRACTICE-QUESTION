//pointer to pointer (**)
#include <stdio.h>

int main()
{
    int x=100;
    int *ptr  = &x;//value of address of x  
    
    int **pptr = &ptr; //value of address of ptr

    printf("\t%d\n",  **pptr);    


    return 0;
}
