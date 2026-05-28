//Program to count digits of a number.
#include<stdio.h>
int main()
{
    int r=0,n,i;
    printf ("Enter a number");
    scanf ("%d",&n);
    while (n>0)
    {
        r=r+1;
        n=n/10;
    }
    printf ("Number of digits is %d",r);
    return 0;
}