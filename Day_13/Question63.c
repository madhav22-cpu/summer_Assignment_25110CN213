#include <stdio.h>

void findPair(int arr[], int n, int sum) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d %d\n", arr[i], arr[j]);
                return;
            }
        }
    }

    printf("No pair found\n");
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    findPair(arr, n, 9);

    return 0;
}