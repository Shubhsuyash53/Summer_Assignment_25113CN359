//Program to write function to find factorial
#include<stdio.h>
int factorial(int n);
int main()
{
    int n, f;
    printf ("Enter a number:");
    scanf ("%d",&n);
    f=factorial(n);
    printf("Factorial is: %d",f);
    return 0;
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}