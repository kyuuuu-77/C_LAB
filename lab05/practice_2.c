#include <stdio.h>

int main() {
    int money, rest;

    printf("거스름 돈을 입력하세요 => ");
    scanf("%d", &money);

    rest = money % 10;
    money -= rest;

    printf("절사 금액 = %d원\n", rest);
    printf("500원 개수 = %d개\n", money/500);
    printf("100원 개수 = %d개\n", money%500/100);
    printf("50원 개수 = %d개\n", money%100/50);
    printf("10원 개수 = %d개\n", money%50/10);

    return 0;
}