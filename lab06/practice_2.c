#include "stdio.h"

int main() {
    int a, b;
    printf("a와 b값을 입력하세요 => ");
    scanf("%d %d", &a, &b);

    int inv_a = ~a;
    int inv_b = ~b;
    int result = inv_a ^ inv_b;

    int cnt = 0;
    cnt += (result & 1);
    cnt += (result >> 1) & 1;
    cnt += (result >> 2) & 1;
    cnt += (result >> 3) & 1;
    cnt += (result >> 4) & 1;
    cnt += (result >> 5) & 1;
    cnt += (result >> 6) & 1;
    cnt += (result >> 7) & 1;

    printf("%d\n", cnt);

    return 0;
}