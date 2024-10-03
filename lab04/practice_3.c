#include <stdio.h>

int main() {
    double tall, weight, bmi;

    printf("키와 몸무게를 입력하세요 : ");
    scanf_s("%lf %lf", &tall, &weight);

    bmi = weight / ((0.01 * tall) * (0.01 * tall));

    printf("계산된 BMI 지수는 %.2f입니다.\n", bmi);

    return 0;
}