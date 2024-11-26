#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int win, draw, lose;

void game(int user, int select) {   // 게임의 결과를 출력하는 함수, 파라미터 값으로 사용자가 선택한 수와 컴퓨터가 선택한 수를 받습니다.
    switch (user) {     // 사용자가 선택한 수를 출력하기 위하여
        case 0:
            printf("나 : 가위,");
            break;
        case 1:
            printf("나 : 바위,");
            break;
        case 2:
            printf("나 : 보,");   // 맨 마지막 조건은 break가 없어도 switch문이 끝나기 때문에 안 적어도 상관 없습니다.
    }
    switch (select) {   // 컴퓨터가 선택한 수를 출력하기 위해
        case 0:
            printf(" 컴퓨터 : 가위 => ");
            break;
        case 1:
            printf(" 컴퓨터 : 바위 => ");
            break;
        case 2:
            printf(" 컴퓨터 : 보 => ");
    }

    if (user == select) {   // 비긴 경우
        printf("비겼습니다!\n");
        draw++;     // 비긴 횟수 카운트 증가
    } else if ((select == 0 && user == 1) || (select == 1 && user == 2) || (select == 2 && user == 0)) {    // 이긴 경우
        printf("이겼습니다!\n");
        win++;      // 이긴 횟수 카운트 증가
    } else {        // 이기거나 비긴 것 이외에는 진 경우이므로 진 경우
        printf("졌습니다...\n");
        lose++;     // 진 횟수 카운트 증가
    }
}

int main() {
    int user;
    int select;

    srand((unsigned) time(NULL));   // 랜덤 함수를 사용하기 위하여

    while (1) {
        select = rand() % 3;        // 0~2의 정수 랜덤값을 추출하여 select 변수에 저장

        printf("가위0, 바위1, 보2\n");
        printf("0, 1, 2중 하나를 입력하세요 : ");
        scanf("%d", &user);

        if (user == -1) {   // -1이 입력되면 게임을 종료
            printf("이긴 횟수 : %d, 비긴 횟수 : %d, 진 횟수 : %d\n", win, draw, lose);     // 총 게임 결과를 출력하고
            printf("게임을 종료합니다.\n");
            break;      // 반복문을 빠져 나가며 프로그램 종료
        } else if (user > 2 || user < 0) {      // 올바르지 않은 숫자를 입력한 경우
            printf("다시 입력하세요!\n");
            continue;
        } else {
            game(user, select);     // 사용자 지정 함수 호출, 입력 파라미터로 2개의 값을 가집니다.
        }
    }

    return 0;
}