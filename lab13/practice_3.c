#include <stdio.h>

int main() {
    int n;
    int max = 0, min = 0;

    printf("배열 크기를 입력하세요 : ");
    scanf_s("%d", &n);

    int numArray[n];
    for (int i = 0; i < n; i++) {
        printf("%d번째 숫자 : ", i + 1);
        scanf_s("%d", &numArray[i]);
    }
    for (int i = 0; i < n; i++) {
        if (numArray[i] > max) {
            max = numArray[i];
        }
        if (min == 0 || numArray[i] < min) {
            min = numArray[i];
        }
    }
    printf("최댓값 : %d, 최솟값 : %d\n", max, min);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numArray[j] < numArray[j + 1]) {
                int temp = numArray[j];
                numArray[j] = numArray[j + 1];
                numArray[j + 1] = temp;
            }
        }
    }

    printf("입력한 정수 : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numArray[i]);
    }

    return 0;
}