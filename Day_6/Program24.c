//Program to find x^n without pow() function
#include<stdio.h>
int main()
{
    int x, n, result=1;
    printf ("Enter base and exponent:");
    scanf ("%d %d",&x,&n);
    for(int i=1; i<=n; i++)
        result=result*x;
    printf("%d^%d is: %d", x, n, result);
    return 0;
}