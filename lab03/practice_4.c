#include <stdio.h>

int main() {
    int distance = 500;
    int time = 6;
    int fuel = 40;

    printf("A에서 B까지의 평균 속도는 %.2fkm/h 입니다.\n", (float)distance / time);
    printf("A에서 B까지의 연비는 %.1fkm/L 입니다.\n", distance / (float)fuel);

    return 0;
}