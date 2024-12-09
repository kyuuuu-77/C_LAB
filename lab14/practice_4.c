#include <stdio.h>

void bubble(int array[], int cnt) {     // 버블 정렬을 통해서 배열을 오름차순으로 정렬하는 사용자 지정 함수
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < cnt - i - 1; j++) {     // 버블 정렬은 이전 차주의 실습 자료를 참고하세요. (변수 이름 빼고 완전 똑같습니다)
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < cnt; i++)   // 배열에 저장한 값을 출력
        printf("%d ", array[i]);
}

void printArray(int arrayA[], int arrayB[]) {   // 두개의 배열을 파라미터 값으로 받는 사용자 지정 함수 선언
    int inter[5] = {0};     // 교집합의 값을 저장할 배열 선언(local)
    int cnt = 0;    // 교집합의 크기를 저장할 변수 선언

    printf("집합 arrA : ");
    bubble(arrayA, 5);      // 배열을 정렬하여 출력
    printf("\n집합 arrB : ");
    bubble(arrayB, 5);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arrayA[i] == arrayB[j]) {   // 두 집합에 같은 숫자가 잇는 경우
                inter[cnt] = arrayA[i];     // 교집합 배열에 값을 저장
                ++cnt;      // 교집합의 크기 +1
                break;
            }
        }
    }

    printf("\n교집합 : ");
    if (cnt > 0)    // 교집합의 값이 존재하는 경우
        bubble(inter, cnt);
    else
        printf("교집합 없음\n");     // 교집합에 값이 존재하지 않는 경우
}

int main() {
    int arrA[5];
    int arrB[5];

    printf("arrA의 정수를 입력하세요 : ");
    for (int i = 0; i < 5; i++)     // 배열에 정수 값을 입력받아서 저장
        scanf_s("%d", &arrA[i]);
    printf("arrB의 정수를 입력하세요 : ");
    for (int i = 0; i < 5; i++)
        scanf_s("%d", &arrB[i]);
    printArray(arrA, arrB);     // 각 배열과 교집합을 출력

    return 0;
}