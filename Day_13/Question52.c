#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int temp[n];
    int k = 0;

    for(int i = 0; i < n; i++) {
        int duplicate = 0;

        for(int j = 0; j < k; j++) {
            if(arr[i] == temp[j]) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate) {
            temp[k++] = arr[i];
        }
    }

    printf("Array after removing duplicates: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }

    return k;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, n);

    return 0;
}