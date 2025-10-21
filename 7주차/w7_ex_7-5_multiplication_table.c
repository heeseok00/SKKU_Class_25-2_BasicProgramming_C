#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;     // 출력할 단
    int i = 1; // 곱하는 수 (1부터 시작)

    printf("구구단 몇 단을 출력할까?: ");
    scanf("%d", &n);        // 사용자 입력

    while (i <= 9)          // 1부터 9까지 반복
    {
        printf("%d*%d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
