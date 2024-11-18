#include "stdio.h"
#include "math.h"

// 함수 원형 선언
double fun_sin(double x);
double fun_cos(double x);
double fun_tan(double x);

int main() {
    int angle;
    const double PI = 3.141592;     // 상수로 PI를 선언

    printf("각도를 입력하세요 => ");
    scanf("%d", &angle);        // 각도를 입력 받아 angle에 저장

    // sin cos tan 함수는 파라메터 값으로 radian 값을 받습니다.
    // radian = 각도 x PI / 180 입니다.
    printf("sin %d도 = %lf\n", angle, fun_sin(angle * PI / 180));    // 삼각 함수의 결과를 return으로 반환 받아서 출력
    printf("cos %d도 = %lf\n", angle, fun_cos(angle * PI / 180));
    printf("tan %d도 = %lf\n", angle, fun_tan(angle * PI / 180));

    return 0;
}

// 사용자 지정 함수 선언
double fun_sin(double x) {
    return sin(x);
}

double fun_cos(double x) {
    return cos(x);
}

double fun_tan(double x) {
    return tan(x);
}
