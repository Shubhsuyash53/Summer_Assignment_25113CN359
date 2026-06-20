//Program to multiply two matrices
#include<stdio.h>
int main()
{
    int m1,n1,m2,n2,i,j,k,a[20][20],b[20][20],c[20][20];
    printf ("Enter the number of rows and columns of first matrix:");
    scanf ("%d%d",&m1,&n1);
    printf ("Enter the elements of first matrix:");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("Enter the number of rows and columns of second matrix:");
    scanf ("%d%d",&m2,&n2);
    if(n1!=m2)
    {
        printf ("Matrix multiplication is not possible");
        return 0;
    }
    printf ("Enter the elements of second matrix:");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf ("%d",&b[i][j]);
        }
    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(k=0;k<n1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf ("Resultant matrix is:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf ("%d ",c[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
    