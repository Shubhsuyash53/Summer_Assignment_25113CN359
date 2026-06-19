//Program to add two matrices
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,a[20][20],b[20][20],c[20][20];
    printf ("Enter the number of rows and columns of first matrix:");
    scanf ("%d%d",&r1,&c1);
    printf ("Enter the elements of first matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("Enter the number of rows and columns of second matrix:");
    scanf ("%d%d",&r2,&c2);
    if(r1!=r2 || c1!=c2)
    {
        printf ("Addition is not possible");
        return 0;
    }
    printf ("Enter the elements of second matrix:");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf ("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf ("Sum of two matrices is:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf ("%d ",c[i][j]);
        }
        printf ("\n");
    }
    return 0;
}