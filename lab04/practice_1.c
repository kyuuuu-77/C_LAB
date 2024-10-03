#include <stdio.h>

int main() {
    double km, hour, liter;

    printf("주행거리를 입력 : ");
    scanf_s("%lf", &km);
    printf("소요시간을 입력 : ");
    scanf_s("%lf", &hour);
    printf("연료 소모량을 입력 : ");
    scanf_s("%lf", &liter);

    printf("계산된 평균 속도는 %.2fkm/h 입니다.\n", km / hour);
    printf("계산된 연비는 %.2fkm/L 입니다.\n", km / liter);

    return 0;
}