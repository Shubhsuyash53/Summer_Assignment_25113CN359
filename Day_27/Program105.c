// Program to create student record management system
#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

void main() {
    struct Student s[50];
    int n, i, search, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter Roll, Name, Marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\n--- Displaying All Records ---\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    printf("\nEnter Roll to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++) {
        if(s[i].roll == search) {
            printf("Found! Name: %s, Marks: %.2f\n", s[i].name, s[i].marks);
            found = 1;
            break;
        }
    }
    if(!found) printf("Record not found.\n");
}