//Program to do Intersection of array
#include<stdio.h>
int main()
{
    int n1,n2,i,j,a[20],b[20],c[20],count=0;
    printf ("Enter the number of elements in first array:");
    scanf ("%d",&n1);
    printf ("Enter the elements of first array:");
    for(i=0;i<n1;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("Enter the number of elements in second array:");
    scanf ("%d",&n2);
    printf ("Enter the elements of second array:");
    for(i=0;i<n2;i++)
    {
        scanf ("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                c[count++]=a[i];
                break;
            }
        }
    }
    printf ("Intersection of two arrays is:");
    for(i=0;i<count;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}