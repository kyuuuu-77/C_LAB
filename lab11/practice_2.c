#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
    int user;
    int select;
    int win = 0, draw = 0, lose = 0;

    srand((unsigned) time(NULL));

    while(1) {
        select = rand() % 2;

        printf("가위0, 바위1, 보2\n");
        printf("0, 1, 2중 하나를 입력하세요 : ");
        scanf("%d", &user);

        if (user == -1) {
            printf("이긴 횟수 : %d, 비긴 횟수 : %d, 진 횟수 : %d\n", win, draw, lose);
            printf("게임을 종료합니다.\n");
            break;
        } else if (user > 2 || user < 0) {
            printf("다시 입력하세요!\n");
            continue;
        } else {
            if (user == select) {
                printf("비겼습니다!\n");
                draw++;
            } else if ((select == 0 && user == 1) || (select == 1 && user == 2) || (select == 2 && user == 0)) {
                printf("이겼습니다!\n");
                win++;
            } else {
                printf("졌습니다...\n");
                lose++;
            }
        }
    }

    return 0;
}