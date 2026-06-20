//Program to check symmetric matrix
#include<stdio.h>
int main()
{
    int m,n,i,j,a[20][20],flag=1;
    printf ("Enter the number of rows and columns:");
    scanf ("%d%d",&m,&n);
    if(m!=n)
    {
        printf ("Matrix is not symmetric");
        return 0;
    }
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
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf ("Matrix is symmetric");
    else
        printf ("Matrix is not symmetric");
    return 0;
}