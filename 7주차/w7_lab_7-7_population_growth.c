#include <stdio.h>

#define GROWTH_RATE 0.01   // 연간 인구 증가율 1%

int main(void)
{
    double population = 7.9e9;  // 현재 세계 인구 (약 79억)
    int year = 2023;            // 현재 연도

    while (population < 10e9) {         // 인구가 100억 미만이면 반복
        population *= (1.0 + GROWTH_RATE); // 인구에 1% 증가 적용
        year++;                           // 연도 1 증가
    }

    printf("세계 인구가 100억 명을 돌파하는 연도는 %d년입니다.\n", year);

    return 0;  // 프로그램 정상 종료
}
