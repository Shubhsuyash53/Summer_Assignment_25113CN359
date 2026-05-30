//Program to print prime numbers in a given range
#include<stdio.h>
#include<math.h>
int main()
{
    int lower, upper, i,j, prime=0;
    printf ("Enter lower limit");
    scanf ("%d",&lower);
    printf ("Enter upper limit");
    scanf ("%d",&upper);
    printf ("Prime numbers between %d and %d are: ",lower,upper);
    for (i= lower; i<=upper;i++)
    {
        if (i<2)
        {
            continue;
        }
        prime=1;
        for (j=2;j<=sqrt(i);j++)
        {
            if (i%j==0)
            {
                prime=0;
                break;
            }
        }
        if (prime==1)
        {
            printf ("%d",i);
        }
    }
    printf ("\n");
    return 0;
}