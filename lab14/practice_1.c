#include <stdio.h>

void printArray(int arr[5][5]);

int main() {
    int arr[5][5];
    int num;

    printf("정수를 입력하세요 : ");
    scanf_s("%d",&num);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            arr[i][j] = num;

    printArray(arr);

    return 0;
}

void printArray(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}