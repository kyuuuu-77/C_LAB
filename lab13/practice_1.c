#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));    // 랜덤 함수의 시드 값을 설정하는 코드

    const int length = 10;  // 상수로 선언하고 배열 크기를 10으로 설정
    int array[10];      // 원래 코드는 int array[length];지만 비주얼 스튜디오에서 호환되지 않으므로 실수 값으로 배열 크기 설정
    int temp;   // 임시로 숫자를 저장할 temp 변수 선언

    for (int i = 0; i < length; i++) {      // 배열 크기만큼 반복을 수행
        array[i] = rand() % 100;    // 0~99 사이의 랜덤 값을 추출하여 배열에 저장
        printf("%d ", array[i]);    // 저장한 값을 하나씩 출력
    }
    printf("\n");   // 줄 바꿈을 위해서

    for (int i = 0; i < length; i++) {      // 마찬가지로 배열 크기만큼 반복을 수행
        for (int j = 0; j < length - 1 - i; j++) {
            if (array[j] > array[j + 1]) {      // j+1보다 j가 더 큰 경우 (즉 뒤의 수보다 앞의 수가 더 큰 경우)
                temp = array[j];    // 더 큰 값을 temp라는 변수에 저장
                array[j] = array[j + 1];    // 더 작은 값을 앞으로 이동
                array[j + 1] = temp;    // 더 큰 값은 뒤로 이동
            }
        }
    }

    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);    // 배열의 값을 반복문을 통해서 모두 출력

    return 0;   // 정상 종료를 의미하는 0값을 반환하므로서 main문이 종료됨
}