//Program to create ATM validation system
#include<stdio.h>
int main()
{
    int pin, enteredPin, attempts = 0;
    const int correctPin = 1234;

    printf("Welcome to the ATM!\n");

    do
    {
        printf("Please enter your PIN: ");
        scanf("%d", &enteredPin);
        attempts++;

        if(enteredPin == correctPin)
        {
            printf("PIN accepted. You can now access your account.\n");
            break;
        }
        else
        {
            printf("Incorrect PIN. Please try again.\n");
        }
    }
    while(attempts < 3);

    if(attempts == 3 && enteredPin != correctPin)
    {
        printf("Too many incorrect attempts. Your account is locked.\n");
    }

    return 0;
}