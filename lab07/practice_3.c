#include "stdio.h"

int main() {
    int dice1, dice2, dice3;

    printf("주사위 수를 입력하세요 => ");
    scanf("%d %d %d", &dice1, &dice2, &dice3);

    if (dice1 == dice2 && dice1 == dice3)
        printf("상금은 %d원 입니다.\n", 10000 + 1000 * dice1);
    else if (dice1 == dice2 || dice1 == dice3)
        printf("상금은 %d원 입니다.\n", 1000 + 100 * dice1);
    else if (dice2 == dice3)
        printf("상금은 %d원 입니다.\n", 1000 + 100 * dice2);
    else {
        if (dice1 > dice2 && dice1 > dice3)
            printf("상금은 %d원 입니다.\n", 100 * dice1);
        else if (dice2 > dice1 && dice2 > dice3)
            printf("상금은 %d원 입니다.\n", 100 * dice2);
        else
            printf("상금은 %d원 입니다.\n", 100 * dice3);
    }

    return 0;
}