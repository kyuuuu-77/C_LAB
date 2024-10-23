#include "stdio.h"

int main() {
    int num1, num2;
    int cnt = 0;

    while(1) {
        printf("두 정수를 입력하세요 => ");
        scanf("%d %d", &num1, &num2);
        if ((num1 <= 1000 && num2 <= 1000) && (num1 >= 2 && num2 >= 2) && (num1 != num2)) break;
        printf("두 정수는 2 이상 1000 이하여야 하고 값이 같지 않아야 합니다. 다시 입력하세요.\n");
    }

    printf("두 정수의 공배수 => ");
    for (int i=1; i<=1000; i++) {
        if (i % num1 == 0 && i % num2 ==0) {
            if (i == 666) break;
            printf("%d ", i);
            cnt ++;
        }
    }
    if (cnt == 0) {
        printf("1000 이하의 공배수 없음");
    } else {
        printf("\n 공배수 개수 : %d개", cnt);
    }

    return 0;
}