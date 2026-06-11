//Program to write function to check prime
#include<stdio.h>
int isprime(int n);
int main()
{
    int n, p;
    printf ("Enter a number:");
    scanf ("%d",&n);
    p=isprime(n);
    if(p==1)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
int isprime(int n)
{
    int i;
    if(n<=1)
        return 0;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}