#include <stdio.h>

int main() {
    int a, b, c, x;
    double y;

    scanf("%d %d %d %d", &a, &b, &c, &x);

    y = (a - b) * (x * x * x) + (b - c) * x - (20 * a * c) + ((double) (b * b) / (a * b  + c * c));
    printf("결과 = %.3lf\n", y);

    return 0;
}