#include "stdio.h"

int main() {
    int mode, min, fee;
    double distance;

    printf("속도 옵션과 이동시간을 입력하세요 => ");
    scanf("%d %d", &mode, &min);

    switch (mode) {
        case 2:
            fee = 180 * min;
            distance = (25000. / 60) * min;
            break;
        case 1:
            fee = 170 * min;
            distance = (20000. / 60) * min;
            break;
        case 0:
            fee = 100 * min;
            distance = (15000. / 60) * min;
            break;
        default:
            fee = -1;
    }

    if (fee == -1) {
        printf("속도 옵션을 잘못 입력하였습니다.\n");
    } else {
        printf("킥보드 이용 요금 = %d원\t", fee);
        if (distance >= 1000) {
            printf("이동거리 = %.2lfkm\n", distance/1000.);
        } else {
            printf("이동거리 = %.2lfm\n", distance);
        }
    }

    return 0;
}