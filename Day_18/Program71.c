//Program to insertion sort an array
#include<stdio.h>
int main()
{
    int n,i,j,a[20],key;
    printf ("Enter the number of elements:");
    scanf ("%d",&n);
    printf ("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf ("Sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}