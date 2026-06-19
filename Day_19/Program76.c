//Program to find diagonal sum of a matrix
#include<stdio.h>
int main()
{
    int m,n,i,j,a[20][20],sum=0;
    printf ("Enter the number of rows and columns:");
    scanf ("%d%d",&m,&n);
    printf ("Enter the elements of matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf ("Sum of diagonal elements is: %d",sum);
    return 0;
}