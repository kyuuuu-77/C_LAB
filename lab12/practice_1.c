#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
    int user;       // 사용자가 입력한 값을 저장하는 변수
    int select;     // 컴퓨터가 선택한 값을 저장하는 변수
    int win = 0, draw = 0, lose = 0;    // 이기거나 지거나 비긴 횟수를 카운트

    srand((unsigned) time(NULL));   // 랜덤 값을 설정하기 위한 함수

    while(1) {
        select = rand() % 3;    // 0~2의 랜덤 값을 뽑아서 저장

        printf("가위0, 바위1, 보2\n");
        printf("0, 1, 2중 하나를 입력하세요 : ");
        scanf("%d", &user);

        if (user == -1) {       // 정답으로 -1을 입력한 경우 프로그램 종료
            printf("이긴 횟수 : %d, 비긴 횟수 : %d, 진 횟수 : %d\n", win, draw, lose);     // 프로그램 종료 전에 게임 결과를 출력
            printf("게임을 종료합니다.\n");
            break;  // break로 반복문을 빠져 나가고 main문 종료
        } else if (user > 2 || user < 0) {  // 잘못 입력한 경우 다시 입력하게 처리
            printf("다시 입력하세요!\n");
            continue;   // 반복문 최상단으로 이동
        } else {    // 올바르게 입력한 경우
            if (user == select) {   // 컴퓨터와 사용자가 같은 수를 낸 경우
                printf("비겼습니다!\n");
                draw++;     // 비긴 횟수를 +1 증가
            } else if ((select == 0 && user == 1) || (select == 1 && user == 2) || (select == 2 && user == 0)) {    // 사용자가 이긴 경우
                printf("이겼습니다!\n");
                win++;  // 이긴 횟수를 +1 증가
            } else {    // 사용자가 진 경우 (즉 컴퓨터가 이긴 경우)
                printf("졌습니다...\n");
                lose++; // 진 횟수를 +1 증가
            }
        }
    }

    return 0;
}