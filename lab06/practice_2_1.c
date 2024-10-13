#include "stdio.h"

int main() {
    char a = -126;
    unsigned char b = 130;

    a >>= 1;
    b >>= 1;

    for (int i = 7; i >= 0; i--) {
        printf("%d", (a >> i) & 1);
    }
    printf("\n");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (b >> i) & 1);
    }

    printf("\na값 = %d, b값 = %d\n", a, b);

    return 0;
}