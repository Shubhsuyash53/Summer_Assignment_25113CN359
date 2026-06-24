//Program to find maximum occuring character in a string
#include<stdio.h>
int main()
{
    char str[100];
    int count[256] = {0};
    int i, max = 0, max_char;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
        count[str[i]]++;

    for(i=0; i<256; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            max_char = i;
        }
    }

    printf("Maximum occurring character is: %c", max_char);
    return 0;
}