#include <stdio.h>

int main() {
    int arr1[] = {1,5,14,256,40,0};
    int arr2[] = {6,7,6,34,43};
    int arr3[] = {3,4,15,19,32,14,32,1};

    int n1 = 6, n2 = 5, n3 = 8;

    for(int i = 0; i < n1; i++) {
        int foundarr2 = 0, foundarr3 = 0;

        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                foundarr2 =1;
            }
        }

        for(int j = 0; j < n3; j++) {
            if(arr2[i] == arr3[j]) {
                foundarr3= 1;
                break;
            }
        }
        if(foundarr2 && foundarr3) {
            printf("%d ", arr1[i]);
        }
    }
    return 0;
}