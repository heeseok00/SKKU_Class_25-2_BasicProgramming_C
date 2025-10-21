// Lab2-5: 체크 디지트

#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5;
    int sum;

    printf("식별 번호를 입력하세요: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    sum = n1 + n2 + n3 + n4 + n5;
    int check_digit = sum % 10;

    printf("체크 디지트는 %d입니다.\n", check_digit);

    return 0;
}
