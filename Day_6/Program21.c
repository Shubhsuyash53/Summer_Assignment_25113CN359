//Program to convert decimal to binary
#include<stdio.h>
int main()
{
    int n, i, binary[32], j=0;
    printf ("Enter a decimal number:");
    scanf ("%d",&n);
    while(n>0)
    {
        binary[j]=n%2;
        n=n/2;
        j++;
    }
    printf("Binary equivalent is: ");
    for(i=j-1; i>=0; i--)
        printf("%d", binary[i]);
    return 0;
}