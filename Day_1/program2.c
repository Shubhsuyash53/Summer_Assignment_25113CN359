//The program to find multiplication table of a number
#include<stdio.h>
int main()
{
    int n,i,p=1;
    printf ("Enter the number");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        p=i*n;
        printf ("\n");
        printf ("%d",p);
    }
    return 0;
}