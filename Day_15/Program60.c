//Program to move zeroes to the end of an array
#include<stdio.h>
int main()
{
    int n,i,a[20],count=0;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        if(a[i]!=0)
            a[count++]=a[i];
    }
    while(count<n)
        a[count++]=0;
    printf ("Array after moving zeroes to the end:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}