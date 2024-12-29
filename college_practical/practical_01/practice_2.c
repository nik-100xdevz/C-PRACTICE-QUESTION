#include<stdio.h>

int main()

{

int T,*S;

T = 10;

S = &T;

printf("\n %d",*S);
printf("\n %x",*S);
printf("\n %o",*S);

printf("\n %d",*&T);

printf("\n %u",&T);

printf("\n %u",S);

printf("\n %u",&T);

return 0;

}