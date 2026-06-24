//Program to remove duplicate characters from a string
#include<stdio.h>
int main()
{
    char str[100], result[100];
    int i, j, k, flag;

    printf("Enter a string: ");
    gets(str);

    k = 0;
    for(i=0; str[i]!='\0'; i++)
    {
        flag = 0;
        for(j=0; j<k; j++)
        {
            if(str[i] == result[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            result[k++] = str[i];
        }
    }
    result[k] = '\0';

    printf("String after removing duplicates: %s", result);
    return 0;
}