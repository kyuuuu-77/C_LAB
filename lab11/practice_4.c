#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 문제를 채점하는 함수를 선언
int exam(int x, int y, int input) {     // 파라메터 값으로 x, y, 사용자가 입력한 정수 값을 받음
    if (x * y == input) return 1;   // 문제를 맞춘 경우 1을 반환
    else return 0;  // 틀린 경우 0을 반환, 아래처럼 else 없이 return 0만으로도 가능
//    return 0;
}

int main() {
    int num1, num2;     // 두개의 랜덤 값을 저장할 변수 선언
    int user_num;       // 사용자가 입력한 값을 저장할 변수 선언
    srand((unsigned) time(NULL));   // 랜덤 함수를 사용하기 위한 함수 사용

    while(1) {  // 반복문을 통해서 문제를 계속 만듭니다.
        num1 = rand() % 101;    // 0~100의 랜덤한 정수 값을 생성 후 저장
        num2 = rand() % 101;    // 위와 동일

        printf("%d x %d = ??? : ", num1, num2);
        scanf("%d", &user_num);     // 사용자가 정답을 입력할 수 있게 scanf사용

        if (user_num == -1) {   // 사용자가 정답으로 -1을 입력하면 프로그램 종료
            printf("프로그램을 종료합니다.\n");
            break;  // 반복문을 빠져나감
        }

        if (exam(num1, num2, user_num) == 1) {  // 만약 문제 체점 함수가 1을 반환하면, 즉 정답일 경우
            printf("정답입니다!\n");
        } else {    // 틀린 경우
            printf("틀렸습니다...\n");
        }
    }
}