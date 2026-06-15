#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 4;

    int sum = 0;
    int expected = (5 * 6) / 2;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Missing Number = %d", expected - sum);

    return 0;
}