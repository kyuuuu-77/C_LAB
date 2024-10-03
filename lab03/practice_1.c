#include <stdio.h>

int main() {
    int a = 12;
    int b = 17;
    printf("A값 = %d, B값 = %d\n", a, b);
    int tmp = a;
    a = b; b = tmp;
    printf("A값 = %d, B값 = %d\n", a, b);

    return 0;
}