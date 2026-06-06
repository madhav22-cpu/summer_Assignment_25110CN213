#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int position = 6;
    printf("The %dth Fibonacci number is %d\n", position, fibonacci(position)); 
    return 0;
}