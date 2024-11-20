#include "stdio.h"

extern int beer, milk, snack, ice;
void stock(int menu, int num) {
    if (num < 0) {
        printf("재고는 0개 이상이어야 합니다.\n");
    } else {
        switch (menu) {
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
