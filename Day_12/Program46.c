//Program to write a function for armstrong number
#include<stdio.h>
int armstrong(int n);
int main()
{
    int n, a;
    printf ("Enter a number:");
    scanf ("%d",&n);
    a=armstrong(n);
    if(a==1)
        printf("%d is an armstrong number",n);
    else
        printf("%d is not an armstrong number",n);
    return 0;
}
int armstrong(int n)
{
    int r, s=0, t;
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(s==t)
        return 1;
    else
        return 0;
}
