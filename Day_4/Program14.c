//Program to find nth term of Fibonacci Series
#include<stdio.h>
int main()
{
    int n, a=0, b=1, next;
    printf("Enter the term number: ");
    scanf("%d", &n);
    if(n == 1)
        printf("The %d term of Fibonacci series is: %d", n, a);
    else if(n == 2)
        printf("The %d term of Fibonacci series is: %d", n, b);
    else
    {
        for(int i=3; i<=n; i++)
        {
            next = a + b;
            a = b;
            b = next;
        }
        printf("The %d term of Fibonacci series is: %d", n, next);
    }
    return 0;
}