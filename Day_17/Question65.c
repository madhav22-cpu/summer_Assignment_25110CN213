#include <stdio.h>

int main() {
    int arr1[] = {1,2,2,3};
    int arr2[] = {2,3,4};

    int n = 4, m = 3;
    int arr3[n + m];

    for(int i = 0; i < n; i++) 
    {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < m; i++) {
       arr3[n + i] = arr2[i];
    }

    for(int i = 0; i < n + m; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}