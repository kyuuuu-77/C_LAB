#include <stdio.h>

int main() {
    char A = 73, B = 104, C = 97, D = 118, E = 101, F = 112, G = 110, H = 46;

    printf("%c ", A);
    printf("%c%c%c%c ", B, C, D, E);
    printf("%c ", C);
    printf("%c%c%c%c\n", F, E, G, H);

    return 0;
}