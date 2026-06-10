#include <stdio.h>

int isPalindrome(int n) {

    int original = n;
    int reverse = 0;

    while(n > 0) {

        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return original == reverse;
}

int main() {

    int n;
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}