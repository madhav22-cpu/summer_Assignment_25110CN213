#include <stdio.h>

int main() {
    int id;
    char name[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Employee ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Salary: %.2f\n", salary);

    return 0;
}
