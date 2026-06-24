//Program to find longest word in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], longest[100];
    int i, len=0, max_len=0, start=0, end=0;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=' ' && str[i]!='\n')
            len++;
        else
        {
            if(len > max_len)
            {
                max_len = len;
                start = i - len;
                end = i;
            }
            len = 0;
        }
    }

    // Check for the last word
    if(len > max_len)
    {
        max_len = len;
        start = i - len;
        end = i;
    }

    strncpy(longest, &str[start], max_len);
    longest[max_len] = '\0';

    printf("Longest word is: %s", longest);
    return 0;
}