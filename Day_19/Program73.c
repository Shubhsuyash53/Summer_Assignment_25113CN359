//Program to add two matrices
#include<stdio.h>
int main()
{
    int m,n,i,j,a[20][20],b[20][20],c[20][20];
    printf ("Enter the number of rows and columns:");
    scanf ("%d%d",&m,&n);
    printf ("Enter the elements of first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("Enter the elements of second matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf ("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf ("Sum of two matrices is:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}