// Lab3-6: 학생의 평균 성적 계산하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char name; // 알파벳 한 글자
    int student_id;
    int score1, score2, score3, score4;
    double average;

    // 사용자 입력
    printf("이름: ");
    name = getchar();

    printf("학번: ");
    scanf("%d", &student_id);

    printf("성적: ");
    scanf("%d %d %d %d", &score1, &score2, &score3, &score4);

    // 평균 계산
    average = (score1 + score2 + score3 + score4) / 4.0;

    // 결과 출력
    printf("학생 %c(학번: %d)의 평균 성적은 %.2lf입니다.\n", name, student_id, average);

    return 0;
}
