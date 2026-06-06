#include <stdio.h>

int sum_of_digits(int n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int number = 1234;
    printf("Sum of digits of %d is %d\n", number, sum_of_digits(number)); // Output: 10
    return 0;
}