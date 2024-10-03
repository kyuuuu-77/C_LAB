#include <stdio.h>

int main() {
    int midTest, finalTest, homework, attend;
    double score;

    printf("중간 점수/기말 점수/과제 점수/출석 점수를 입력하세요 -> ");
    scanf_s("%d/%d/%d/%d", &midTest, &finalTest, &homework, &attend);
    score = (0.35 * midTest) + (0.4 * finalTest) + (0.15 * homework) + (0.1 * attend);

    printf("최종 성적은 %.2f 입니다.\n", score);

    return 0;
}