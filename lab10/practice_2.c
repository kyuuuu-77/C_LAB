#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int main() {
    int rd_num, user_num;       // 랜덤 값을 저장할 변수와 사용자가 입력한 값을 저장할 변수 선언
    int cnt = 0;        // 몇 번째에 숫자를 맞추었는지 계산하기 위한 카운트 변수 선언

    srand((unsigned) time(NULL));   // 랜덤 값을 추출하기 위한 코드 (자세한 내용은 ppt를 참고하세요~)
    rd_num = rand() % 100 + 1;      // 1부터 100사이의 랜덤한 값을 생성하여 rd_num 변수에 저장

    while (1) {
        cnt++;
        printf("%d번째, 1~100 사이의 수를 입력하세요 => ", cnt);
        scanf("%d", &user_num);     // user_num 변수에 사용자가 입력한 정수값 저장

        if (user_num > 100 || user_num < 1) {   // 범위에 벗어난 숫자를 입력한 경우에는 다시 입력하게 유도
            printf("잘못 입력하였습니다.\n");
            continue;       // while문의 최상단으로 이동
        }

        if (rd_num == user_num) {       // 숫자를 맞춘 경우
            printf("%d번째에 정답을 맞췄습니다. 숫자는 %d 입니다.\n", cnt, rd_num);
            break;      // 맞춘 경우에는 break를 통해서 반복문 종료
        } else if (user_num < rd_num) {     // 입력한 값이 숫자보다 작은 경우
            printf("Up!\n");
        } else if (user_num > rd_num) {     // 입력한 값이 숫자보다 큰 경우
            printf("Down!\n");
        }
    }

    return 0;
}