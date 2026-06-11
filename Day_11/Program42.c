//Program to write function to find maximum
#include<stdio.h>
int max(int a, int b);
int main()
{
    int x,y,m;
    printf ("Enter 2 numbers:");
    scanf ("%d%d",&x,&y);
    m=max(x,y);
    printf("Maximum is: %d",m);
    return 0;
}
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}