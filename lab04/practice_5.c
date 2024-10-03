#include <stdio.h>

int main() {
    int hour_depart, min_depart;
    int hour_arrive, min_arrive;
    int time;

    printf("출발 시간을 입력하세요 => ");
    scanf_s("%d:%d", &hour_depart, &min_depart);

    printf("도착 시간을 입력하세요 => ");
    scanf_s("%d:%d", &hour_arrive, &min_arrive);

    time = (hour_arrive * 60 + min_arrive) - (hour_depart * 60 + min_depart);

    printf("총 소요시간은 %d시간 %d분 입니다.\n", time / 60, time % 60);

    return 0;
}