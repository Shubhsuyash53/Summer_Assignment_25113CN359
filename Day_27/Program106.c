// Program to Create salary management system
#include <stdio.h>

struct Salary {
    int id;
    char name[20];
    float basic, allowance, net;
};

void main() {
    struct Salary s[50];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter ID, Name, Basic Salary: ");
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].basic);
        
        s[i].allowance = s[i].basic * 0.20; 
        s[i].net = s[i].basic + s[i].allowance;
    }

    printf("\n--- Payroll Summary ---\n");
    printf("ID\tName\tBasic\tAllow\tNet\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.1f\t%.1f\t%.1f\n", s[i].id, s[i].name, s[i].basic, s[i].allowance, s[i].net);
    }
}