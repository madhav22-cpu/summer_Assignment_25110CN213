#include <stdio.h>

int main() {
    char str[100];
    int visited[256] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[(int)str[i]] == 1) {
            printf("First repeating character = %c", str[i]);
            return 0;
        }
        visited[(int)str[i]]++;
    }

    printf("No repeating character");
    return 0;
}
