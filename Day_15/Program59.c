//Program to rotate an array to the right
#include<stdio.h>
int main()
{
    int n,i,a[20],temp;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    temp=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf ("Rotated array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}