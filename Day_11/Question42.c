#include <stdio.h>

int maximum(int a, int b) {

    if(a > b)
        return a;
    return b;
}

int main() {

    int x = 15;
    int y = 25;

    printf("Maximum = %d", maximum(x, y));

    return 0;
}