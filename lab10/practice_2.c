#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
    int rd_num, user_num;
    int cnt = 0;

    srand((unsigned) time(NULL));
    rd_num = rand() % 100 + 1;

    while (1) {
        cnt++;
        printf("%d번째, 1~100 사이의 수를 입력하세요 => ", cnt);
        scanf("%d", &user_num);

        if (user_num > 100 || user_num < 1) {
            printf("잘못 입력하였습니다.\n");
            continue;
        }

        if (rd_num == user_num) {
            printf("%d번째에 정답을 맞췄습니다. 숫자는 %d 입니다.\n", cnt, rd_num);
            break;
        } else if (user_num < rd_num) {
            printf("Up!\n");
        } else if (user_num > rd_num) {
            printf("Down!\n");
        }
    }

    return 0;
}