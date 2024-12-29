#include <stdio.h>

int sum(int a, int b);
void printTable(int n);

int main()
{
    int n;
    printf("enter the  number for printing the table: \n");
    scanf("%d", &n);
    
    printTable (n) ;//argument or actual parameter
    

   

    return 0;
}

void printTable(int n) { //parameter
    for(int i=1; i<=10; i++) {
        printf("\n %d",i* n);
    }
}