#include <stdio.h>
#include <string.h>



int main(){
    char name [3][10];
    int price[3];
    int pages[3],i;

    for (i=0;i<=2; i++) {
    printf("\nEnter details for book %d\n",i+1);
    printf("\tname\t\t");
    scanf("%s",name[i]);
    printf("\tno. of pages:\t");
    scanf("%d",&pages[i]);
    printf("\tprice:\t\t");
    }
    printf("\n\n\tBook detail:\n");
    for (i = 0; i <= 2;i++)
    printf("\t%d\n\tnmae:\t%s\n\tprice:\t%d\n\tno.of pages:\t%d\n",i+1,name[i],price[i],pages[i]);

     return 1;
}