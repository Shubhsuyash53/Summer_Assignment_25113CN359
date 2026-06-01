//Program to find largest prime factor of a number
#include<stdio.h>
int main()
{
    int n, i, largest;
    printf ("Enter a number:");
    scanf ("%d",&n);
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            largest=i;
            n=n/i;
        }
    }
    printf("Largest prime factor is: %d", largest);
    return 0;
}