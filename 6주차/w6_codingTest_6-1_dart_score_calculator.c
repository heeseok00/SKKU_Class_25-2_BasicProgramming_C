// 다트 게임 점수 계산 프로그램
#include <stdio.h>
#include <math.h>   // sqrt() 함수 사용을 위해 필요

int main(void)
{
    float x, y;     // 좌표 입력값
    int points;     // 점수

    printf("다트의 x, y 좌표를 입력하시오: ");
    scanf("%f %f", &x, &y);

    float distance = sqrt(x * x + y * y);  // 원점으로부터 거리 계산

    if (distance > 10)
        points = 0;       // 바깥 원 (10 초과) → 0점
    else if (distance > 5)
        points = 1;       // 중간 원 (5~10) → 1점
    else if (distance > 1)
        points = 5;       // 안쪽 원 (1~5) → 5점
    else
        points = 10;      // 중심 원 (1 이하) → 10점

    printf("획득한 점수: %d\n", points);
    return 0;
}
