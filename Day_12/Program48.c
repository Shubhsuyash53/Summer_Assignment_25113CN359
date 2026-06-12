//Program to write a function for perfect number.
#include<stdio.h>
int perfect(int n);
int main()
{
    int n, p;
    printf ("Enter a number:");
    scanf ("%d",&n);
    p=perfect(n);
    if(p==1)
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
    return 0;
}
int perfect(int n)
{
    int i, s=0;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
            s=s+i;
    }
    if(s==n)
        return 1;
    else
        return 0;
}
