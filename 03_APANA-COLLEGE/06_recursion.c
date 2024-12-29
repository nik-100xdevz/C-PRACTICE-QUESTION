// fibonaci sequence
#include <stdio.h>

int fibonaci_sequence(int n);

int main()
{ 
    
    printf("%d ",fibonaci_sequence (6));
    return 0;
}

int fibonaci_sequence(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fibonaci_sequence(n - 1);
    int fibNm2 = fibonaci_sequence(n - 2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d is :%d\n", fibN);
    return fibN;
}