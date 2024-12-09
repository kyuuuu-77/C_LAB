#include <stdio.h>

int main() {
    char dict[10][13] = {0};    // 배열을 선언하고 모든 칸에다가 0의 값을 대입
    int column;    // 입력 받은 행(column)을 저장할 변수 선언
    // 12/19 19:13 수정 : 변수 이름 row->column으로 변경

    while (1) {
        printf("저장할 칸을 입력하세요 : ");
        scanf_s("%d", &column);

        if (column == -1) {    // -1을 입력하면 단어장 종료
            printf("단어장을 종료합니다.\n");
            break;
        }

        if (column >= 0 && column < 10) {   // 저장할 수 있는 칸일 경우에 (단어장의 크기가 10이기 때문에 0~9칸에 저장할 수 있다)
            printf("%d번째 칸에 저장할 단어를 입력하세요 : ", column);
            scanf_s("%s", dict[column], 13);
            // scanf("%s", dict[column]);
            // 문자열과 배열일 경우에는 scanf와 scanf_s의 사용 방법이 다릅니다. 주의!
            printf("%d번째 칸에 %s를 저장했습니다!\n", column, dict[column]);  // 저장한 칸(행)과 저장한 문자열을 출력

            for (int i = 0; i < 10; i++) {  // 반복문을 통해서 단어장의 단어를 모두 출력
                if (dict[i][0] != 0) {  // 단어장에 저장된 값이 0이 아니면 = 즉 단어를 저장한 상태이면
                    printf("%s ", dict[i]);     // 해당 칸에 저장된 단어를 출력
                }
            }
            printf("\n");
        }
        else {      // 올바르지 않은 칸에 저장하려고 시도하는 경우
            printf("다시 입력하세요!\n");
        }
    }
}