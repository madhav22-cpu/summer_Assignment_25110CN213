#include <stdio.h>

int isArmstrong(int n) {

    int original = n;
    int sum = 0;

    while(n > 0) {

        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    return original == sum;
}

int main() {

    int n;
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}