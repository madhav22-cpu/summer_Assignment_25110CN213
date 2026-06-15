#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4};
    int n = 6;

    int maxFreq = 0;
    int maximumElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maximumElement = arr[i];
        }
    }

    printf("Maximum  = %d", maximumElement);

    return 0;
}