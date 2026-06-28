// Program to create employee management system
#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    char desig[20];
};

void main() {
    struct Employee e[50];
    int n, i, search, found = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter ID, Name, Designation: ");
        scanf("%d %s %s", &e[i].id, e[i].name, e[i].desig);
    }

    printf("\n--- Employee List ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Desig: %s\n", e[i].id, e[i].name, e[i].desig);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++) {
        if(e[i].id == search) {
            printf("Found! Name: %s, Designation: %s\n", e[i].name, e[i].desig);
            found = 1;
            break;
        }
    }
    if(!found) printf("Employee not found.\n");
}