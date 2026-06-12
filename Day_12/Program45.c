//Program to write function for palindrome
#include<stdio.h>
int palindrome(int n);
int main()
{
    int n, p;
    printf ("Enter a number:");
    scanf ("%d",&n);
    p=palindrome(n);
    if(p==1)
        printf("%d is a palindrome",n);
    else
        printf("%d is not a palindrome",n);
    return 0;
}
int palindrome(int n)
{
    int r, s=0, t;
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==t)
        return 1;
    else
        return 0;
}