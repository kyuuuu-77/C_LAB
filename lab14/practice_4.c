#include <stdio.h>

void bubble(int array[], int cnt) {
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < cnt - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < cnt; i++)
        printf("%d ", array[i]);
}

void printArray(int arrayA[], int arrayB[]) {
    int inter[5] = {0};
    int cnt = 0;

    printf("집합 arrA : ");
    bubble(arrayA, 5);
    printf("\n집합 arrB : ");
    bubble(arrayB, 5);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arrayA[i] == arrayB[j]) {
                inter[cnt] = arrayA[i];
                ++cnt;
                break;
            }
        }
    }

    printf("\n교집합 : ");
    if (cnt > 0)
        bubble(inter, cnt);
    else
        printf("교집합 없음\n");
}

int main() {
    int arrA[5];
    int arrB[5];

    printf("arrA의 정수를 입력하세요 : ");
    for (int i = 0; i < 5; i++)
        scanf_s("%d", &arrA[i]);
    printf("arrB의 정수를 입력하세요 : ");
    for (int i = 0; i < 5; i++)
        scanf_s("%d", &arrB[i]);
    printArray(arrA, arrB);

    return 0;
}