//Program to find column wise sum of a matrix
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
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+a[i][j];
        }
        printf ("Sum of column %d is: %d\n",j+1,sum);
    }
    return 0;
}