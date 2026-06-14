//Program to find largest and smallest element in an array
#include<stdio.h>
int main()
{
    int n,i,a[20],max,min;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf ("Largest element is:%d",max);
    printf ("Smallest element is:%d",min);
return 0;
}   