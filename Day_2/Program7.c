//Program to find product of digits of a number
#include<stdio.h>
int main()
{
    int n,i,p=1;
    printf ("Enter a number");
    scanf ("%d",&n);
    while(n>0)
    {
        i=n%10;
        p=p*i;
        n=n/10;
    }
    printf ("The product of the digits is: %d",p);
    return 0;
}