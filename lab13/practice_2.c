#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lotto[7] = {0};
    srand((unsigned)time(NULL));

    for (int i = 0; i < 7; i++) {
        lotto[i] = rand() % 45 + 1;
        for (int j = 0; j < i; j++) {
            if (lotto[i] == lotto[j]) {
                i--;
                break;
            }
        }
    }

    printf("로또 번호(정렬전) : ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", lotto[i]);
    }

    int length = sizeof(lotto) / sizeof(int);
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (lotto[j] > lotto[j + 1]) {
                int temp = lotto[j];
                lotto[j] = lotto[j + 1];
                lotto[j + 1] = temp;
            }
        }
    }

    printf("\n로또 번호(정렬후) : ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", lotto[i]);
    }

    return 0;
}