#include "stdio.h"

int main() {
    int x = 1, y;

    while (x < 10) {
        y = 1;      // 하나의 단이 끝나면 y를 1로 초기화
        while (y < 10) {    // 한 단의 x1부터 x9까지 출력
            printf("%d x %d = %2d | ", x, y, x*y);
            y++;
        }
        printf("\n");   // 하나의 단이 끝나면 줄 바꿈
        x++;    // 증가 연산자를 통해서 단 증가
    }

    return 0;
}