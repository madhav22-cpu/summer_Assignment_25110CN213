#include <stdio.h>

int main() {
    char name[50];
    float basic, bonus, total;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    total = basic + bonus;

    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("Bonus: %.2f\n", bonus);
    printf("Total Salary: %.2f\n", total);

    return 0;
}