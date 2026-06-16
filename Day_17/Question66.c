#include <stdio.h>

int main() {
    int arr1[] = {1,2,2,3};
    int arr2[] = {2,3,5};

    int n = 5, m = 3;
    int arr3[50];
    int k = 0;

    for(int i = 0; i < n; i++) {
        int found = 0;

        for(int j = 0; j < k; j++) {
            if(arr3[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            arr3[k++] = arr1[i];}
    }

    for(int i = 0; i < m; i++) {
        int found = 0;

        for(int j = 0; j < k; j++) {
            if(arr3[j] == arr2[i]) {
                found = 1;
                break;
            }
        }

        if(!found) {
         arr3[k++] = arr2[i];
        }
    }
    for(int i = 0; i < k; i++) {
     printf("%d ", arr3[i]);
    }

    return 0;
}