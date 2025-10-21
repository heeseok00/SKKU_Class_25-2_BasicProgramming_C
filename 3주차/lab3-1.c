// Lab3-1: 정수형 입출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int value;

    // 정수형의 크기 출력
    printf("정수형 int의 크기는 %zu입니다.\n", sizeof(int)); //sizeof는 size_t형을 반환하므로 %zu 사용
    printf("정수형 long의 크기는 %zu입니다.\n", sizeof(long));
    printf("정수형 long long의 크기는 %zu입니다.\n", sizeof(long long));

    // 10진수 입력
    printf("\n정수를 입력하세요(10진수): ");
    scanf("%d", &value);
    printf("%d은 10진수로 %d, 8진수로 %#o, 16진수로 %#x입니다.\n", value, value, value, value);

    // 16진수 입력
    printf("\n정수를 입력하세요(16진수): ");
    scanf("%x", &value);
    printf("%d은 10진수로 %d, 8진수로 %#o, 16진수로 %#x입니다.\n", value, value, value, value);

    return 0;
}
