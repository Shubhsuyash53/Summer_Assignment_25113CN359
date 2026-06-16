//Program to find missing number in an array
#include<stdio.h>
int main()
{
    int n,i,a[20],sum=0,total;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        sum=sum+a[i];
    }
    total=(n+1)*(n+2)/2;
    printf ("Missing number is:%d",total-sum);
    return 0;
}