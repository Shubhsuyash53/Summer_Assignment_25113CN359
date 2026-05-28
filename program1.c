#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf ("Enter the number of naturaL numbers");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf ("The sum of natural numbers upto %d is: %d",n,s);
    return 0;
}