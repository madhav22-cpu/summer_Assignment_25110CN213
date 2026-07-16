#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account user;
    int choice;
    float amount;

    printf("===== Create Bank Account =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &user.accNo);

    printf("Enter Name: ");
    scanf("%s", user.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &user.balance);

    while (1) {

        printf("Bank \n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            user.balance += amount;

            printf("Money Deposited Successfully!\n");
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= user.balance) {
                user.balance -= amount;
                printf("Money Withdrawn Successfully!\n");
            } else {
                printf("Insufficient Balance!\n");
            }
            break;

        case 3:
            printf("Current Balance = %.2f\n", user.balance);
            break;

        case 4:
            printf("\nAccount Number : %d\n", user.accNo);
            printf("Name           : %s\n", user.name);
            printf("Balance        : %.2f\n", user.balance);
            break;

        case 5:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}