//Program to check if a number is palindrome
#include<stdio.h>
int main()
{
    int n,i,r=0,temp;
    printf ("Enter a number");
    scanf ("%d",&n);
    temp=n;
    while (n>0)
    {
        i=n%10;
        r=r*10+i;
        n=n/10;
    }
    if (r==temp)
    {
    printf ("The number is palindrome");
    }
    else 
    {
        printf ("The number is not palindrome");
    }
    return 0;
}