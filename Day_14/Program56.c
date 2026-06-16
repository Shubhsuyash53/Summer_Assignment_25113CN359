//Program to find duplicates in an array
#include<stdio.h>
int main()
{
    int n,i,j,a[20],count=0;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("Duplicate elements are:");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
        if(count>0)
            printf("%d ",a[i]);
    }
    return 0;
}