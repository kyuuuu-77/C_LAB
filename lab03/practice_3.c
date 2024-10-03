#include <stdio.h>

int main() {
    const double exchange = 1332.2;	// 원/달러 환율
    double dollar = 1 / exchange;	// 1KRW -> ??? USD

    printf("1달러 => %.2lf원\n", exchange);
    printf("125달러 => %.2lf원\n", exchange * 125);
    printf("1000원 => %.2lf달러\n", dollar * 1000);
    printf("130만원 => %.2lf달러\n", dollar * 1300000);

    return 0;
}