#include <stdio.h>

void stock(int menu, int num);
int beer, milk, snack, ice;

int main() {
    int menu, num;

    while(1) {
        printf("1.맥주 : %d캔, 2.우유 : %d개, 3.과자 : %d개, 4.아이스크림 : %d개\n", beer, milk, snack, ice);
        printf("재고를 변경할 물품과 재고 수를 입력해주세요 : ");
        scanf("%d %d", &menu, &num);

        if (menu == 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        } else {
            stock(menu, num);
        }
    }
    return 0;
}