// Program to create marksheet generation system
#include <stdio.h>

struct Marksheet {
    int roll;
    char name[20];
    int m1, m2, m3, total;
    float per;
};

void main() {
    struct Marksheet m[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter Roll, Name, and Marks for 3 Subjects: ");
        scanf("%d %s %d %d %d", &m[i].roll, m[i].name, &m[i].m1, &m[i].m2, &m[i].m3);
        
        m[i].total = m[i].m1 + m[i].m2 + m[i].m3;
        m[i].per = m[i].total / 3.0;
    }

    printf("\n--- Generated Marksheets ---\n");
    for(i = 0; i < n; i++) {
        printf("\nRoll: %d | Name: %s", m[i].roll, m[i].name);
        printf("\nTotal: %d/300 | Percentage: %.1f%%", m[i].total, m[i].per);
        printf("\nResult: %s\n", (m[i].m1 >= 40 && m[i].m2 >= 40 && m[i].m3 >= 40) ? "PASS" : "FAIL");
    }
}