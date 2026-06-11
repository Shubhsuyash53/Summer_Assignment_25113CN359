//Program to to find sum of 2 numbers using function 
#include<stdio.h>
int sum(int a, int b);
int main()
{
    int x,y,s;
    printf ("Enter 2 numbers:");
    scanf ("%d%d",&x,&y);
    s=sum(x,y);
    printf("Sum is: %d",s);
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}