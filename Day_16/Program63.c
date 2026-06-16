//Program to find pairs with given sum in an array
#include<stdio.h>
int main()
{
    int n,i,j,a[20],sum;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("Enter the sum:");
    scanf ("%d",&sum);
    printf ("Pairs with given sum are:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
                printf("%d %d\n",a[i],a[j]);
        }
    }
    return 0;
}
