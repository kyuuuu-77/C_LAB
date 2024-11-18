#include <stdio.h>

// 두 정수를 비교하여 더 큰 숫자를 반환하는 함수
int bigger(int x, int y) {  // 파라메터로 2개의 정수를 받음
    return (x > y) ? x : y;     // x가 크면 x값을 반환, y가 크면 y값을 반환
}

// 최소공배수 값을 반환하는 함수
int least_common_multi(int x, int y) {      // 위의 함수와 마찬가지로 파람메터로 2개의 정수 값을 받음
    for(int i = 1; i <= x * y; i++) {   // 1부터 x*y의 값까지 i를 증가시키면서 반복문을 반복
        if (i % x == 0 && i % y == 0)   // 공배수를 만족하는 경우
            return i;   // 값을 반환하고 반복문 종료 -> 즉 최소 공배수를 구할 수 있습니다
    }
}

int main() {
    int num1, num2;     // 입력한 두 정수의 값을 저장할 변수를 선언

    while(1) {
        printf("두 정수를 입력하세요 : ");
        scanf("%d %d", &num1, &num2);   // 두 정수 값을 입력 받음

        if (num1 != num2) break;    // 두 정수 값이 같지 않은 경우, 즉 제대로 입력한 경우 반복문 종료
        printf("다시 입력하세요!\n");  // 두 정수 값이 같은 경우 위의 if문에 의해 break가 걸리지 않기 때문에 계속해서 입력을 받게 유도
    }

    printf("더 큰 정수 : %d\n", bigger(num1, num2));    // 위에서 선언한 함수를 사용하여 더 큰 정수를 정합니다
    printf("최소 공배수 : %d\n", least_common_multi(num1, num2));    // 위에서 선언한 함수를 사용하여 최소 공배수를 구합니다

    return 0;
}