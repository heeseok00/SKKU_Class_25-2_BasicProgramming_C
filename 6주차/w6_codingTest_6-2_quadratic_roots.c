// 이차방정식의 실근 계산 프로그램
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double d, x1, x2;

    printf("계수 a, b, c를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    // a가 0이면 1차 방정식으로 처리
    if (a == 0)
    {
        if (b == 0)
            printf("해가 존재하지 않습니다.\n");
        else
            printf("이 방정식은 1차 방정식입니다. 근은 %.6f\n", - (double)c / b);
        return 0;
    }

    // 판별식 계산
    d = b * b - 4.0 * a * c;

    if (d < 0)
        printf("허근입니다.\n"); // 실근이 존재하지 않음
    else if (d == 0)
        printf("중근입니다. 근 = %.6f\n", -b / (2.0 * a));
    else
    {
        x1 = (-b + sqrt(d)) / (2.0 * a);
        x2 = (-b - sqrt(d)) / (2.0 * a);

        printf("첫 번째 실근 = %.6f\n", x1);
        printf("두 번째 실근 = %.6f\n", x2);
    }

    return 0;
}
