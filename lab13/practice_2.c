#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lotto[7] = {0};     // 로또 숫자를 저장할 배열을 선언 및 0으로 초기화
    srand((unsigned)time(NULL));    // 랜덤 함수의 시드 값을 설정하는 코드

    for (int i = 0; i < 7; i++) {   // 배열 크기만큼 반복문을 수행
        lotto[i] = rand() % 45 + 1;     // 1부터 45의 랜덤 값을 추출하여 배열에 저장
        for (int j = 0; j < i; j++) {
            if (lotto[i] == lotto[j]) {     // 만약 지금 뽑은 숫자가 이전에 뽑았던 숫자랑 같은 경우
                i--;    // 다시 입력 받기 위해서 i값 -1
                break;
            }
        }
    }

    printf("로또 번호(정렬전) : ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", lotto[i]);    // 정렬 전의 로또 번호를 출력
    }

    int length = sizeof(lotto) / sizeof(int);   // 배열의 크기 (바이트) / 변수 타입 int의 크기 (바이트) => 28 / 4 = 7
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (lotto[j] > lotto[j + 1]) {      // 앞의 숫자가 뒤의 숫자보다 큰 경우
                int temp = lotto[j];    // temp변수에 임시로 값을 저장
                lotto[j] = lotto[j + 1];        // 뒤의 숫자를 앞으로 이동
                lotto[j + 1] = temp;        // 앞의 숫자를 뒤로 이동
            }
        }
    }

    printf("\n로또 번호(정렬후) : ");
    for (int i = 0; i < length; i++) {
        printf("%d ", lotto[i]);    // 정렬 후의 로또 번호를 출력
    }

    return 0;
}