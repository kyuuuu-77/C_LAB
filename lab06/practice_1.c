#include "stdio.h"

int main() {
    int x, y;

    printf("숫자를 입력하세요 => ");
    scanf("%d %d", &x, &y);

    int result = (x % 2 == 0 && y % 2 == 1) && (x + y > 100) && ((x > 50 && y <= 50) || (x <= 50 && y > 50));

    printf("%s\n", (result == 1) ? "True" : "False");

    return 0;
}