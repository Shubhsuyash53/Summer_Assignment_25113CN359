//Program to frquency of an element in an array
#include<stdio.h>
int main()
{
    int n,i,a[20],key,count=0;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("Enter the element to find frequency:");
    scanf ("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
            count++;
    }
    printf("Frequency of %d is %d",key,count);
    return 0;
}
