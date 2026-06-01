Program to convert binary to decimal
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i=0, decimal=0, rem;
    printf ("Enter a binary number:");
    scanf ("%d",&n);
    while(n>0)
    {
        rem=n%10;
        decimal=decimal+rem*pow(2,i);
        n=n/10;
        i++;
    }
    printf("Decimal equivalent is: %d", decimal);
    return 0;
}