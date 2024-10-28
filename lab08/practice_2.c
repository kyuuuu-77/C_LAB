#include "stdio.h"

int main() {
    unsigned short int num;     // unsigned short int 타입의 변수 선언
    int length = 15;    // 이진수로 출력하기 위해 비트 길이 선언 (15인 경우 15부터 0까지 해서 16비트)

    printf("숫자를 입력하세요 => ");
    scanf("%hd", &num);     // unsigned short int의 경우 형식 지정자는 %hd

    if (num <= 255) length = 7;     // 입력한 숫자가 255 이하의 경우에는 8비트의 이진수로 출력하기 위해
    for (int i=length; i>=0; i--) {
        printf("%d", num >> i & 1);     // 반복문 for를 통해서 최상위 비트부터 맨 마지막 비트까지 한칸씩 이동하면서 각 자리의 이진수 값을 출력
    }

    return 0;
}