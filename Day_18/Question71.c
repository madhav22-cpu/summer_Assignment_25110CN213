
#include <stdio.h>

int main() {
    int n, key;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array which is sorted: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}