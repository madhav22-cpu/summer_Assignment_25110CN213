#include <stdio.h>

int reverse_number(int n, int new_reverse) {
  
    if (n == 0) {
        return new_reverse;
    }
    return reverse_number(n / 10, new_reverse * 10 + n % 10);
}

int main() {
    int number = 1234;

    int reversed = reverse_number(number, 0);
    printf("Reverse of %d is %d\n", number, reversed); 
    return 0;
}