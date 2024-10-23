#include "stdio.h"

int main() {
    int num;

    printf("구구단의 단을 입력하세요 => ");
    scanf("%d", &num);

    for (int x = 1; x <= 9; x++) printf("%d x %d = %2d | ", num, x, num * x);

    return 0;
}