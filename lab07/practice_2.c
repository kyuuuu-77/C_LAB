#include "stdio.h"

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    if (x == 0 || y == 0) {
        printf("Error");
    } else {
        if (x > 0 && y > 0) {
            printf("x=%d y=%d, 제%d사분면\n", x, y, 1);
        } else if (x < 0 && y > 0) {
            printf("x=%d y=%d, 제%d사분면\n", x, y, 2);
        } else if (x < 0 && y < 0) {
            printf("x=%d y=%d, 제%d사분면\n", x, y, 3);
        } else {
            printf("x=%d y=%d, 제%d사분면\n", x, y, 4);
        }
    }

    return 0;
}