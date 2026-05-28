//Program to find factorial of a number.
#include<stdio.h>
int main()
{
    int n,i,p=1;
    printf ("Enter the number to find factorial");
    scanf ("%d",&n);
    for (i=n;i>=1;i--)
    {
        p=p*i;
    }
    printf ("The factorial is %d",p);
    return 0;
}