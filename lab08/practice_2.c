#include "stdio.h"

int main() {
    unsigned short int num;
    int length = 15;

    printf("숫자를 입력하세요 => ");
    scanf("%hd", &num);

    if (num <= 255) length = 7;
    for (int i=length; i>=0; i--) {
        printf("%d", num >> i & 1);
    }

    return 0;
}