#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    scanf("%s ", str);

    for (int i = 0; str[i] != '\0'; i++)
        freq[ (int) str[i]]++;
    int max = 0;
    char ch;
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            ch = str[i];
        }
    }
    printf("Maximum occurring character = %c", ch);
    return 0;
}