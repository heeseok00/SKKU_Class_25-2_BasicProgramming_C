#include <stdio.h>

int main(void)
{
    int i;                  // 입력 횟수를 세는 변수
    double number, sum = 0.0;  // number: 입력값, sum: 합계

    for (i = 1; i <= 10; i++)  // 최대 10번 반복
    {
        printf("%d번째 실수를 입력하시오: ", i);
        scanf("%lf", &number);   // 실수 입력 (double은 %lf 사용)

        if (number < 0.0)        // 음수가 입력되면 반복 종료
            break;

        sum += number;           // 합계 누적
    }

    printf("합계 = %f\n", sum);  // 결과 출력
    return 0;                    // 프로그램 정상 종료
}
S