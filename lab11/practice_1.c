#include "stdio.h"
#include "math.h"

double fun_sin(double x);
double fun_cos(double x);
double fun_tan(double x);

int main() {
    int angle;
    const double PI = 3.141592;

    printf("실수를 입력하세요 => ");
    scanf("%d", &angle);

    printf("sin %d도 = %lf\n", angle, fun_sin(angle * PI / 180));
    printf("cos %d도 = %lf\n", angle, fun_cos(angle * PI / 180));
    printf("tan %d도 = %lf\n", angle, fun_tan(angle * PI / 180));

    return 0;
}

double fun_sin(double x) {
    return sin(x);
}

double fun_cos(double x) {
    return cos(x);
}

double fun_tan(double x) {
    return tan(x);
}
