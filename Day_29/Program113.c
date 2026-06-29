//Program to create menu driven calculator
#include<stdio.h>
int main()
{
    int choice;
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("Result: %f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %f", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %f", result);
            break;
        case 4:
            result = num1 / num2;
            printf("Result: %f", result);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}