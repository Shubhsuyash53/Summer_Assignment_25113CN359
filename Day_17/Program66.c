//Program to do Union of array
#include<stdio.h>
int main()
{
    int n1,n2,i,j,a[20],b[20],c[40],count=0;
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
        c[count++]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
                break;
        }
        if(j==n1)
            c[count++]=b[i];
    }
    printf ("Union of two arrays is:");
    for(i=0;i<count;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}