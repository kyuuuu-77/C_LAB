#include <stdio.h>

int main() {
    char A = 73, B = 104, C = 97, D = 118, E = 101, H = 46;

    printf("%c ", A);
    printf("%c%c%c%c ", B, C, D, E);
    printf("%c ", C);

    char I = 99, J = 116;

    printf("%c%c%c%c\n", I, C, J, H);

    return 0;
}