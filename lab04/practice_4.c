#include <stdio.h>

int main() {
    int midTest, finalTest, homework, attend;
    double score;

    printf("중간고사 점수를 입력하세요. : ");
    scanf_s("%d", &midTest);
    printf("기말고사 점수를 입력하세요. : ");
    scanf_s("%d", &finalTest);
    printf("과제 점수를 입력하세요. : ");
    scanf_s("%d", &homework);
    printf("출석 점수를 입력하세요. : ");
    scanf_s("%d", &attend);

    score = (0.35 * midTest) + (0.4 * finalTest) + (0.15 * homework) + (0.1 * attend);

    printf("최종 성적은 %.2f 입니다.\n", score);

    return 0;
}