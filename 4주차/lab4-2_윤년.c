#include <stdio.h>

int main(void) {
    int year;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    // 윤년 조건: 4로 나누어 떨어지고 100으로 나누어 떨어지지 않거나,
    // 400으로 나누어 떨어지는 경우
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d년은 윤년입니다.\n", year);
    } else {
        printf("%d년은 윤년이 아닙니다.\n", year);
    }

    return 0;
}
