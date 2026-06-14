//Program to find sum and average of arrays
#include<stdio.h>
int main()
{
    int n,i,a[20];
    float sum=0,avg;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf ("Sum=%f",sum);
    printf ("Average=%f",avg);
return 0;
}