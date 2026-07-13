#include <stdio.h>

int main() {
    int secret = 7;
    int guess;

    printf("Guess the number: ");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Correct!");
    else
        printf("Wrong! The number was %d", secret);

    return 0;
}