//Program to create menu driven array operations system
#include<stdio.h>
int main()
{
    int choice, n, i, a[20], sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            for(i=0; i<n; i++)
                sum += a[i];
            printf("Sum of elements: %d", sum);
            break;
        case 2:
            for(i=0; i<n; i++)
                printf("%d ", a[i]);
            break;
        case 3:
            for(i=n-1; i>=0; i--)
                printf("%d ", a[i]);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}