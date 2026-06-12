#include <stdio.h>

int maxFrequencyElement(int arr[], int n) {
    int maxFreq = 0, element;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    return element;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum Frequency Element = %d\n", maxFrequencyElement(arr, n));

    return 0;
}