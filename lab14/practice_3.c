#include <stdio.h>

int main() {
    char english[20];   // 하나의 문자열을 저장할 배열 선언

    printf("문자열을 입력하세요 : ");
    scanf_s("%s", english, 20);     // 문자열의 중간에 띄어쓰기가 있지 않는 이상 왠만하면 scanf나 scanf_s를 사용하는 것을 권장합니다.
    // 띄어쓰기가 있는 경우에는 gets를 사용
    // gets(english);

    // 아스키코드 표를 참고할 것
    for (int i = 0; i < english[i] != '\0'; i++) {      // 문자열을 저장하고 나머지 공간에는 \0이 저장되어 있기 때문에 반복문은 \0이 저장된 바로 전의 칸까지 반복합니다.
        if (english[i] >= 'a' && english[i] <= 'z') {   // 소문자일 경우
            english[i] -= 32;   // 대문자로 변경
        } else if (english[i] >= 'A' && english[i] <= 'Z') {    // 대문자일 경우
            english[i] += 32;   // 소문자로 변경
        } else if (english[i] >= '0' && english[i] <= '9') {    // 숫자일 경우
            english[i] = ' ';   // 빈칸으로 변경
        } else {    // 그 외에 특수문자일 경우
            english[i] = '_';   // 언더바로 변경
        }
    }
    printf("출력결과 : %s", english);

    return 0;
}