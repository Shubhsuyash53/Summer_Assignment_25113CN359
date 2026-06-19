//Program to selectionn sort an array
#include<stdio.h>
int main()
{
    int n,i,j,a[20],temp,min;
    printf ("Enter the number of elements:");
    scanf ("%d",&n);
    printf ("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf ("Sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
