#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
    int user;       // 유저가 입력한 값을 저장하는 변수
    int select;     // 컴퓨터가 선택한 값을 저장하는 변수
    int win = 0, draw = 0, lose = 0;    // 이기거나 지거나 비긴 횟수를 카운트

    srand((unsigned) time(NULL));   // 랜덤 값을 설정하기 위한 함수

    while(1) {
        select = rand() % 3;    // 0~2의 랜덤 값을 뽑아서 저장

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