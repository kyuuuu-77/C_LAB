#include <stdio.h>

int main(void) {
    printf("%6s %5s\n", "과목", "점수");
    printf("=============\n");
    printf("%6s %5d\n", "국어", 90);
    printf("%6s %5d\n", "수학", 80);
    printf("%6s %5d\n", "과학", 75);
    printf("%6s %5d\n", "한국사", 100);
    printf("-------------\n");
    printf("%6s %6.1f\n", "평균", (90 + 80 + 75 + 100) / 4.);

    return 0;
}