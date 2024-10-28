#include "stdio.h"

int main() {
    int num;    // 구구단의 단을 저장할 변수

    printf("구구단의 단을 입력하세요 => ");
    scanf("%d", &num);

    // 반복문 안에 코드가 한 줄 들어갈 경우, 중괄호 {} 를 사용하지 않아도 됩니다.
    for (int x = 1; x <= 9; x++) printf("%d x %d = %2d | ", num, x, num * x);

    return 0;
}