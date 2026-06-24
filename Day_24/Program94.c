//Program to compress a string
#include<stdio.h>
int main()
{
    char str[100], compressed[100];
    int i, j, count;

    printf("Enter a string: ");
    gets(str);

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        count = 1;
        while(str[i] == str[i+count])
            count++;
        compressed[j++] = str[i];
        if(count > 1)
        {
            compressed[j++] = count + '0';
        }
        i += count;
    }
    compressed[j] = '\0';

    printf("Compressed string is: %s", compressed);
    return 0;
}