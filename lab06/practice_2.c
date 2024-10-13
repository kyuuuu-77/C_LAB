#include "stdio.h"

int main() {
    char a = -126;
    unsigned char b = 130;

    a >>= 1; b >>= 1;

    printf("%d", (a >> 7) & 1);
    printf("%d", (a >> 6) & 1);
    printf("%d", (a >> 5) & 1);
    printf("%d", (a >> 4) & 1);
    printf("%d", (a >> 3) & 1);
    printf("%d", (a >> 2) & 1);
    printf("%d", (a >> 1) & 1);
    printf("%d\n", a & 1);

    printf("%d", (b >> 7) & 1);
    printf("%d", (b >> 6) & 1);
    printf("%d", (b >> 5) & 1);
    printf("%d", (b >> 4) & 1);
    printf("%d", (b >> 3) & 1);
    printf("%d", (b >> 2) & 1);
    printf("%d", (b >> 1) & 1);
    printf("%d\n", b & 1);

    printf("a값 = %d, b값 = %d\n", a, b);

    return 0;
}