//Alphabet Pyramid
#include<stdio.h>
int main()
{
    int i,j;
    for (i=0;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
}