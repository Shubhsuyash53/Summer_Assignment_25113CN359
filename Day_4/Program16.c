//Program to print armstrong numbers in a range.
#include<stdio.h>
#include<math.h>
int main()
{
    int lower, upper, temp, i, s;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for(int num = lower; num <= upper; num++)
    {
        temp = num;
        s = 0;
        while(temp > 0)
        {
            i = temp % 10;
            s = s + pow(i, 3);
            temp = temp / 10;
        }
        if(num == s)
            printf("%d ", num);
    }
    return 0;
}