#include <stdio.h>

int main() {
    int start, end, isPrime;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        if (num < 2)
            continue;

        isPrime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", num);
    }

    return 0;
}