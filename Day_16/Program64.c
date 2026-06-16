//Program to remove duplicates from an array
#include<stdio.h>
int main()
{
    int n,i,j,a[20],b[20],count=0;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
            b[count++]=a[i];
    }
    printf ("Array after removing duplicates:");
    for(i=0;i<count;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
