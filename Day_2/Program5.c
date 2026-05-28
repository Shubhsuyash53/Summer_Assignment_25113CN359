#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf ("Enter a number");
    scanf ("%d",&n);
    while (n>0)
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }
    printf ("The summ of digits is:%d",s);
    return 0;
}