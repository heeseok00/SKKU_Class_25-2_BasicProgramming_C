#include <stdio.h>

int main(void)
{
    int score;      // 점수를 저장할 변수
    char grade;     // 학점을 저장할 변수

    printf("성적을 입력하시오: ");
    scanf("%d", &score);   // 사용자에게 점수를 입력받음

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("학점 %c\n", grade);   // 결과 출력
    return 0;
}
