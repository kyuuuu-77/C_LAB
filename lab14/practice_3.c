#include <stdio.h>

int main() {
    char english[20];

    printf("문자열을 입력하세요 : ");
    scanf_s("%s", english, 20);
    // gets(english);
    // fgets(english, 20, stdin);

    for (int i = 0; i < english[i] != '\0'; i++) {
        if (english[i] >= 'a' && english[i] <= 'z') {
            english[i] -= 32;
        } else if (english[i] >= 'A' && english[i] <= 'Z') {
            english[i] += 32;
        } else if (english[i] >= '0' && english[i] <= '9') {
            english[i] = ' ';
        } else {
            english[i] = '_';
        }
    }
    printf("출력결과 : %s", english);

    return 0;
}