#include "stdio.h"

int main() {
    int hour_depart, min_depart;
    int hour_arrive, min_arrive;

    printf("출발 시간을 입력하세요 => ");
    scanf("%d:%d", &hour_depart, &min_depart);

    printf("도착 시간을 입력하세요 => ");
    scanf("%d:%d", &hour_arrive, &min_arrive);

    int time;
    time = (hour_arrive * 60 + min_arrive) - (hour_depart * 60 + min_depart);
    time = (time < 0) ? time + (60 * 24) : time;

    printf("총 소요시간은 ");
    (time < 60) ? printf("%d분", time) : printf("%d시간 %d분", time / 60, time % 60);
    printf(" 입니다.\n");

    return 0;
}