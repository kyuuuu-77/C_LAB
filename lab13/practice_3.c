#include <stdio.h>

int main() {
    const int n = 6;    // 배열의 크기를 6으로 정함
    int max = 0, min = 0;   // 최솟값과 최댓값을 저장할 변수를 선언하고 0으로 초기화

    int numArray[6];    // 정수 값을 저장할 numArray 배열 선언
    for (int i = 0; i < n; i++) {
        printf("%d번째 숫자 : ", i + 1);
        scanf_s("%d", &numArray[i]);    // 배열에 입력한 정수 값을 저장
    }
    for (int i = 0; i < n; i++) {
        if (numArray[i] > max) {    // 기존의 최댓값 보다 현재의 값이 더 큰 경우
            max = numArray[i];  // 최대값을 지금의 값으로 바꿈
        }
        if (min == 0 || numArray[i] < min) {    // 기존의 최솟값보다 현재의 값이 더 작은 경우
            min = numArray[i];  // 최솟값을 지금의 값으로 바꿈
        }
    }
    printf("최댓값 : %d, 최솟값 : %d\n", max, min);   // 최대값과 최솟값을 각각 출력

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numArray[j] < numArray[j + 1]) {    // 뒤의 숫자가 앞의 숫자보다 큰 경우
                int temp = numArray[j];     // 앞의 숫자를 temp 변수에 임시로 저장
                numArray[j] = numArray[j + 1];      // 뒤의 숫자를 앞으로 이동
                numArray[j + 1] = temp;     // 앞의 숫자를 뒤로 이동
            }
        }
    }

    printf("입력한 정수 : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numArray[i]);     // 내림차순으로 정렬된 배열의 값을 출력
    }

    return 0;
}