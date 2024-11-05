#include "stdio.h"

int main() {
    int x = 1, y;

    while (x < 10) {
        y = 1;
        while (y < 10) {
            printf("%d x %d = %2d | ", x, y, x*y);
            y++;
        }
        printf("\n");
        x++;
    }

    return 0;
}