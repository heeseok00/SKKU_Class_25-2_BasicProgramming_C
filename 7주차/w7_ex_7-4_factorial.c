#include <stdio.h>

int main(void)
{
    int i = 5;              // 5! 계산을 위한 초기값
    int factorial = 1;      // 결과를 저장할 변수, 초기값은 1

    while (i >= 1)          // i가 1 이상일 때까지 반복
    {
        factorial *= i;     // factorial = factorial * i
        i--;                // i를 1씩 감소
    }

    printf("%d\n", factorial);  // 최종 결과 출력 (120)
    return 0;
}
S