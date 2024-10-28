#include "stdio.h"

int main() {
    int num1, num2;     // 두 정수 값을 저장할 변수
    int cnt = 0;    // 공배수 개수를 저장할 변수

    while(1) {
        printf("두 정수를 입력하세요 => ");
        scanf("%d %d", &num1, &num2);
        if ((num1 <= 1000 && num2 <= 1000) && (num1 >= 2 && num2 >= 2) && (num1 != num2)) break;    // 두 정수가 같지 않고 1보다 크고 1000보다 작거나 같은 경우
        printf("두 정수는 2 이상 1000 이하여야 하고 값이 같지 않아야 합니다. 다시 입력하세요.\n");       // 위의 조건에 부합하지 않은 경우 다시 입력을 받게 유도
    }

    printf("두 정수의 공배수 => ");
    for (int i=2; i<=1000; i++) {
        if (i % num1 == 0 && i % num2 ==0) {        // 공배수의 경우
            if (i == 666) break;        // 공배수가 666인 경우 종료
            printf("%d ", i);
            cnt ++;
        }
    }
    if (cnt == 0) {     // 공배수가 없는 경우
        printf("1000 이하의 공배수 없음");
    } else {    // 공배수가 있는 경우, 공배수 개수를 출력
        printf("\n 공배수 개수 : %d개", cnt);
    }

    return 0;
}