#include <stdio.h>

int main() {
    int arr1[] = {1,2,2,3,4};
    int arr2[] = {2,3,5};

    int n = 5, m = 3;
    int visi[100] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(arr1[i] == arr2[j] && visi[j] == 0) {
                printf("%d ", arr1[i]);
                visi[j] = 1;
                break;
            }
        }
    }

    return 0;
}