#define _CRT_SECURE_NO_WARNINGS   // scanf 보안 경고 방지
#include <stdio.h>

int main(void)
{
    int fact = 1;   // 결과값을 저장할 변수, 초기값은 1
    int i, n;       // i: 반복 변수, n: 입력값

    printf("정수를 입력하시오: ");  // 사용자에게 입력 요청
    scanf("%d", &n);                // n에 정수 입력 받기

    for(i = 1; i <= n; i++)         // 1부터 n까지 반복
        fact = fact * i;            // fact에 i를 곱함

    printf("%d!은 %d입니다.\n", n, fact);  // 결과 출력

    return 0;  // 프로그램 정상 종료
}
