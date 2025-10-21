#include <stdio.h>

int main(void)
{
    long long money = 1;   // 첫날 금액 1원
    int i;                 // 반복 변수

    for(i = 1; i <= 30; i++) {    // 1일부터 30일까지 반복
        money *= 2;               // 전날보다 두 배
        printf("%d일후 현재 금액=%lld\n", i, money);  // 결과 출력
    }

    return 0;   // 프로그램 정상 종료
}
S