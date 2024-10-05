#include <stdio.h>

int main() {
    int a = 2, b = 5;
    int c = --a + b-- * a++;
    printf("%d, %d, %d\n", a, b, c);

    return 0;
}