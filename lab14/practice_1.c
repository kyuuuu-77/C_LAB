#include <stdio.h>

// 함수 원형 선언
void printArray(int arr[5][5]);

int main() {
    int arr[5][5];  // 5x5 배열 선언
    int num;    // 입력한 정수 값을 저장하기 위한 변수 선언

    printf("정수를 입력하세요 : ");
    scanf_s("%d",&num);

    for (int i = 0; i < 5; i++)     // 중첩 반복문을 통해서 배열의 모든 칸에 동일한 정수 값을 채워 넣음
        for (int j = 0; j < 5; j++)
            arr[i][j] = num;

    printArray(arr);    // 파라미터 값으로 배열을 넘김

    return 0;
}

void printArray(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);   // 값을 저장할 때와 마찬가지로 중복 반복문을 통해서 배열의 모든 값 출력
        }
        printf("\n");   // 하나의 행이 끝나면 줄 바꿈
    }
}