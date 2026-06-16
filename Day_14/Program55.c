//Program to second largest element in an array
#include<stdio.h>
int main()
{
    int n,i,a[20],max,second_max;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    max=a[0];
    second_max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            second_max=max;
            max=a[i];
        }
        else if(a[i]>second_max && a[i]!=max)
            second_max=a[i];
    }
    printf ("Second largest element is:%d",second_max);
return 0;
}

