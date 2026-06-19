//Program to transpose of a matrix
#include<stdio.h>
int main()
{
    int m,n,i,j,a[20][20],b[20][20];
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
            b[j][i]=a[i][j];
        }
    }
    printf ("Transpose of the matrix is:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}