//Program to make student record system usning arrays and strings
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50

struct Student {
    int roll_number;
    char name[NAME_LEN];
    float gpa;
};

void addStudent(struct Student class_list[], int *count);
void displayAll(const struct Student class_list[], int count);
void searchStudent(const struct Student class_list[], int count);

int main() {
    struct Student class_list[MAX_STUDENTS];
    int current_count = 0;
    int choice;

    do {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Add New Student Record\n");
        printf("2. Display All Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit System\n");
        printf("Enter your choice (1-4): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input type. Exiting.\n");
            break;
        }
        
        getchar(); 

        switch (choice) {
            case 1:
                addStudent(class_list, &current_count);
                break;
            case 2:
                displayAll(class_list, current_count);
                break;
            case 3:
                searchStudent(class_list, current_count);
                break;
            case 4:
                printf("Exiting system. Goodbye!\n");
                break;
            default:
                printf("Invalid option! Please pick a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}

void addStudent(struct Student class_list[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Error: Record system database is full!\n");
        return;
    }

    struct Student new_student;

    printf("Enter Roll Number: ");
    scanf("%d", &new_student.roll_number);
    getchar(); 

    printf("Enter Student Name: ");
    fgets(new_student.name, NAME_LEN, stdin);
    new_student.name[strcspn(new_student.name, "\n")] = '\0';

    printf("Enter GPA: ");
    scanf("%f", &new_student.gpa);

    class_list[*count] = new_student;
    (*count)++;

    printf("Record added successfully!\n");
}

void displayAll(const struct Student class_list[], int count) {
    if (count == 0) {
        printf("No student records available.\n");
        return;
    }

    printf("\n%-10s %-30s %-5s\n", "Roll No", "Student Name", "GPA");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-30s %-5.2f\n", 
               class_list[i].roll_number, 
               class_list[i].name, 
               class_list[i].gpa);
    }
}

void searchStudent(const struct Student class_list[], int count) {
    if (count == 0) {
        printf("No student records available to search.\n");
        return;
    }

    int target_roll;
    int found_flag = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &target_roll);

    for (int i = 0; i < count; i++) {
        if (class_list[i].roll_number == target_roll) {
            printf("\nRecord Found:\n");
            printf("Roll Number : %d\n", class_list[i].roll_number);
            printf("Name        : %s\n", class_list[i].name);
            printf("GPA         : %.2f\n", class_list[i].gpa);
            found_flag = 1;
            break; 
        }
    }

    if (!found_flag) {
        printf("Record with Roll Number %d not found.\n", target_roll);
    }
}