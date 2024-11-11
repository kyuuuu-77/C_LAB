#include <stdio.h>

int main() {
    int num; char ch;       // 특수문자를 저장할 변수 ch와 개수를 저장할 변수 num을 선언
    printf("정수를 입력하세요 => ");
    scanf("%d", &num);      // num에 입력한 정수 값 저장
    getchar();      // 엔터도 하나의 문자로 입력되기 때문에 getchar를 통해서 엔터를 문자로 받지 않게 함
    printf("특수 문자를 입력하세요 => ");
    scanf("%c", &ch);       // char에 특수문자 저장

    if (ch == '*' || ch == '&' || ch == '%' || ch == '$') {     // 지정된 특수 문자를 입력한 경우에만 출력하게 조건문 사용
        for (int i=1; i<=num; i++) {
            for (int j=1; j<=num; j++) {
                if (j > (num - i)) {        // 끝에서 부터 하나씩 증가하면서 출력
                    printf("%c", ch);
                } else {    // 위의 경우가 아닌 경우 빈칸으로 출력
                    printf("%c", ' ');
                }
            }
            printf("\n");   // 하나의 반복문이 끝난 경우 줄 바꿈 적용
        }
    }

    return 0;
}