//Program to create inventory management system
#include <stdio.h>
int main()
{
    int choice, n, i;
    struct Item {
        int id;
        char name[50];
        float price;
    } items[20];

    printf("Enter the number of items: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("Enter ID for item %d: ", i+1);
        scanf("%d", &items[i].id);
        printf("Enter name for item %d: ", i+1);
        scanf(" %[^\n]s", items[i].name);
        printf("Enter price for item %d: ", i+1);
        scanf("%f", &items[i].price);
    }

    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Inventory List:\n");
            for(i=0; i<n; i++) {
                printf("ID: %d, Name: %s, Price: %.2f\n", items[i].id, items[i].name, items[i].price);
            }
            break;
        case 2:
            printf("Total Inventory Value:\n");
            float total = 0;
            for(i=0; i<n; i++) {
                total += items[i].price;
            }
            printf("Total Value: %.2f\n", total);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}