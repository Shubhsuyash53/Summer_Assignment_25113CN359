//Program to check strong number
#include<stdio.h>
int main()
{
    int n, temp, i, s=0, fact;
    printf ("Enter a number:");
    scanf ("%d",&n);
    temp=n;
    while(n>0)
    {
        i=n%10;
        fact=1;
        for(int j=1; j<=i; j++)
            fact=fact*j;
        s=s+fact;
        n=n/10;
    }
    if(temp==s)
        printf("%d is a strong number",temp);
    else
        printf("%d is not a strong number",temp);
    return 0;
}