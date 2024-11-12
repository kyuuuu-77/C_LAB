#include <stdio.h>

int bigger(int x, int y) {
    return (x > y) ? x : y;
}

int least_common_multi(int x, int y) {
    for(int i = 1; i <= x * y; i++) {
        if (i % x == 0 && i % y == 0)
            return i;
    }
}

int main() {
    int num1, num2;

    while(1) {
        printf("두 정수를 입력하세요 : ");
        scanf("%d %d", &num1, &num2);

        if (num1 != num2) break;
        printf("다시 입력하세요!\n");
    }

    printf("더 큰 정수 : %d\n", bigger(num1, num2));
    printf("최소 공배수 : %d\n", least_common_multi(num1, num2));

    return 0;
}