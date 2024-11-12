#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int exam(int x, int y, int input) {
    if (x * y == input) return 1;
    else return 0;
}

int main() {
    int num1, num2;
    int user_num;
    srand((unsigned) time(NULL));

    while(1) {
        num1 = rand() % 101;
        num2 = rand() % 101;

        printf("%d x %d = ??? : ", num1, num2);
        scanf("%d", &user_num);

        if (user_num == -1) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        if (exam(num1, num2, user_num) == 1) {
            printf("정답입니다!\n");
        } else {
            printf("틀렸습니다...\n");
        }
    }
}