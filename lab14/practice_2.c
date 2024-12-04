#include <stdio.h>

int main() {
    char dict[10][12] = {0};
    int row;

    while (1) {
        printf("저장할 칸을 입력하세요 : ");
        scanf_s("%d", &row);

        if (row == -1) {
            printf("단어장을 종료합니다.\n");
            break;
        }

        if (row >= 0 && row < 10) {
            printf("%d번째 칸에 저장할 단어를 입력하세요 : ", row);
            scanf_s("%s", dict[row], sizeof(dict[row]));
            printf("%d번째 칸에 %s를 저장했습니다!\n", row, dict[row]);

            for (int i = 0; i < 10; i++) {
                if (dict[i][0] != 0) {
                    printf("%s ", dict[i]);
                }
            }
            printf("\n");
        }
        else {
            printf("다시 입력하세요!\n");
        }
    }
}