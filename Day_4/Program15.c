//Program to check Armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int n, temp,i,s=0;
    printf ("Enter a number:");
    scanf ("%d",&n);
    temp=n;
    while(n>0)
    {
        i=n%10;
        s=s+pow(i,3);
        n=n/10;
    }
    if(temp==s)
        printf("%d is an Armstrong number",temp);
    else
        printf("%d is not an Armstrong number",temp);
    return 0;
}