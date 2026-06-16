//Program to find maximum frequence element in an array
#include<stdio.h>
int main()
{
    int n,i,j,a[20],max,count=0;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count>max)
            max=a[i];
    }
    printf ("Maximum frequency element is:%d",max);
    return 0;
}