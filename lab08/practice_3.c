#include "stdio.h"

int main() {
    double x, y;    // x값과 y값을 저장
    char operator;      // 연산자(문자)를 저장
    int cnt = 1;    // 연산 횟수를 저장

    while (1) {
        printf("x값과 연산자, y값 입력하세요 => ");
        scanf("%lf %c %lf", &x, &operator, &y);     // double 타입의 형식 지정자는 %lf입니다.
        if (x == -1) break;     // x값이 -1일 경우에 반복문 종료 -> 프로그램 종료

        switch (operator) {     // 연산자에 따라 연산이 달라짐
            case '+':       // 더하기의 경우
                printf("연산 횟수 %d\t%.2lf + %.2lf = %.2lf\n", cnt, x, y, x+y);
                break;      // break를 사용하지 않으면 밑의 모든 코드가 실행되기 때문에 break 사용
            case '-':       // 나누기의 경우
                printf("연산 횟수 %d\t%.2lf - %.2lf = %.2lf\n", cnt, x, y, x-y);
                break;
            case '*':       // 곱하기의 경우
                printf("연산 횟수 %d\t%.2lf x %.2lf = %.2lf\n", cnt, x, y, x*y);
                break;
            case '/':       // 나누기의 경우
                if (y == 0) {   // 0으로 나누기는 올바르지 않은 연산이므로 예외 처리
                    printf("%lf를 0으로 나눌 수 없습니다!\n", x);
                    cnt --;     // 연산 횟수를 무효 처리
                } else {
                    printf("연산 횟수 %d\t%.2lf / %.2lf = %.2lf\n", cnt, x, y, x/y);
                }
                break;
            default:    // 연산자를 잘못 입력한 경우
                printf("연산자를 잘못 입력하였습니다.\n");
                cnt --;
        }
        cnt ++;
    }
    printf("프로그램이 종료되었습니다.\n");     // 반복문을 빠져 나가면 프로그램 종료

    return 0;
}