//  Program to create a bank account system
#include <stdio.h>
#include <stdlib.h>

int main() {
    float balance = 500.0, amount;
    int choice;

    while (1) {
        printf("\nBalance: $%.2f\n1. Deposit\n2. Withdraw\n3. Exit\nChoice: ", balance);
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance += amount;
        } else if (choice == 2) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            if (amount <= balance) balance -= amount;
            else printf("Insufficient funds!\n");
        } else if (choice == 3) {
            exit(0);
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}