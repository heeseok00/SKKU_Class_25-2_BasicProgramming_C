#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    long num;      // 입력받을 정수
    int digit;     // 한 자리씩 저장할 변수

    printf("정수를 입력하시오: ");
    scanf("%ld", &num);

    while (num > 0)
    {
        digit = num % 10;   // 마지막 자리 추출
        printf("%d ", digit);
        num = num / 10;     // 한 자리 제거
    }

    return 0;
}
