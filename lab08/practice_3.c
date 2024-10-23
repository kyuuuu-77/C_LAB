#include "stdio.h"

int main() {
    double x, y;
    char operator;
    int cnt = 1;

    while (1) {
        printf("x값과 연산자, y값 입력하세요 => ");
        scanf("%lf %c %lf", &x, &operator, &y);
        if (x == -1) break;

        switch (operator) {
            case '+':
                printf("연산 횟수 %d\t%.2lf + %.2lf = %.2lf\n", cnt, x, y, x+y);
                break;
            case '-':
                printf("연산 횟수 %d\t%.2lf - %.2lf = %.2lf\n", cnt, x, y, x-y);
                break;
            case '*':
                printf("연산 횟수 %d\t%.2lf x %.2lf = %.2lf\n", cnt, x, y, x*y);
                break;
            case '/':
                if(y == 0) {
                    printf("%lf를 0으로 나눌 수 없습니다!\n", x);
                    cnt --;
                } else {
                    printf("연산 횟수 %d\t%.2lf / %.2lf = %.2lf\n", cnt, x, y, x/y);
                }
                break;
            default:
                printf("연산자를 잘못 입력하였습니다.\n");
                cnt --;
        }
        cnt ++;
    }
    printf("프로그램이 종료되었습니다.\n");

    return 0;
}