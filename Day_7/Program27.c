//Program to recursive sum of digits of a number
#include<stdio.h>
int sumOfDigits(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10 + sumOfDigits(n/10));
}
int main()
{
    int n, result;
    printf("Enter a number:");
    scanf("%d", &n);
    result = sumOfDigits(n);
    printf("Sum of digits of %d is: %d", n, result);
    return 0;
}
