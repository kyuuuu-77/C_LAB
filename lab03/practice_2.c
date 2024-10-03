#include <stdio.h>

int main() {
    int width = 10;
    double length = 17.2;
    double height = 14.6;
    double volumn = (double)width * length * height;

    printf("상자 가로 : %d\n", width);
    printf("상자 세로 : %.1lf\n", length);
    printf("상자 높이 : %.1lf\n", height);
    printf("부피 : %.2lf\n", volumn);

    return 0;
}