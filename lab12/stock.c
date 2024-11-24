#include "stdio.h"

extern int beer, milk, snack, ice;
void stock(int menu, int num) {
    if (num < 0) {      // 재고는 0개 이상이어야 하므로
        printf("재고는 0개 이상이어야 합니다.\n");
    } else {
        switch (menu) {     // 물품 코드에 따라서 물품의 재고를 변경
            case 1:
                beer = num;
                break;
            case 2:
                milk = num;
                break;
            case 3:
                snack = num;
                break;
            case 4:
                ice = num;
                break;
            default:
                printf("취급하지 않는 품목입니다.\n");
        }
    }
}
