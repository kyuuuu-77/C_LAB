#include <stdio.h>

int main() {
    int num1, num2;

    printf("2개의 숫자를 입력하세요 => ");
    scanf("%d %d", &num1 ,&num2);

    printf("계산1 : %d\n ", (num1==num2) * num1 * num2);
    printf("계산2 : %d\n ", (num1>=num2) * num1 % num2);

    return 0;
}