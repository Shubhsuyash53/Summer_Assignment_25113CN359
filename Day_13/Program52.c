//Program to count even and odd elements in an array
#include<stdio.h>
int main()
{
    int n,i,a[20],even=0,odd=0;
    printf ("Enter the number of elements");
    scanf ("%d",&n);
    printf ("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf ("Number of even elements is:%d",even);
    printf ("Number of odd elements is:%d",odd);
return 0;
}
