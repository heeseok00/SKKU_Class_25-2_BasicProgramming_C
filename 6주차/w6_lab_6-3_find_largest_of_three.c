// 세 개의 정수 중 가장 큰 수를 찾는 프로그램
#include <stdio.h>

int main(void)
{
    int a, b, c, largest;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;              // 우선 a를 가장 큰 수라고 가정
    if (largest < b) largest = b;   // b가 더 크면 b로 교체
    if (largest < c) largest = c;   // c가 더 크면 c로 교체

    printf("가장 큰 정수는 %d입니다.\n", largest);

    return 0;
}S
