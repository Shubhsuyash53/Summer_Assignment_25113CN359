//Program to Linear Search an element in an array
#include<stdio.h>
int main()
{
    int n,i,a[20],key,flag=0;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("Enter the element to be searched:");
    scanf ("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is found at position %d",key,i+1);
    else
        printf("%d is not found in the array",key);
    return 0;
}