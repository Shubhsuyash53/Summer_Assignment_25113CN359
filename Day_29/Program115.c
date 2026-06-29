//Program to create menu driven string operatiions system
#include<stdio.h>
int main()
{
    int choice;
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            strcat(str1, str2);
            printf("Concatenated string: %s", str1);
            break;
        case 2:
            if(strcmp(str1, str2) == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
            break;
        case 3:
            printf("Length of first string: %d", strlen(str1));
            printf("Length of second string: %d", strlen(str2));
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}