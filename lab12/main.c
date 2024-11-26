#include <stdio.h>

void stock(int menu, int num);
int beer, milk, snack, ice;     // 각 물품의 재고를 저장하기 위한 전역 변수(project global) 선언
// 참고로 앞에 static을 붙이면 file global로 다른 파일에서는 위의 전역 변수를 참조할 수 없습니다.

int main() {
    int menu, num;      // 물품 코드와 재고 수를 저장하기 위한 변수 선언

    while(1) {
        printf("1.맥주 : %d캔, 2.우유 : %d개, 3.과자 : %d개, 4.아이스크림 : %d개\n", beer, milk, snack, ice);  // 먼저 물품의 재고를 출력
        printf("재고를 변경할 물품과 재고 수를 입력해주세요 : ");
        scanf("%d %d", &menu, &num);    // 물품 코드와 재고 수를 입력

        if (menu == 0) {    // 만약 물품 코드에 0을 입력한 경우 프로그램 종료
            printf("프로그램을 종료합니다.\n");
            break;  // break로 반복문 종료
        }
        stock(menu, num);   // 사용자 지정 함수 stock의 파라미터 값으로 물품 코드와 재고 수 입력
    }
    return 0;
}