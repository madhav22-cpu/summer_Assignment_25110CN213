#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
        freq[(int)str[i]]++;

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            printf("First non-repeating character = %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character");
    return 0;
}