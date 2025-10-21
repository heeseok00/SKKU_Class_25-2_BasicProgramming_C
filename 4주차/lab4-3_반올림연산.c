#include <stdio.h>

int main(void) {
    double a = 3.6;  // 소수 값
    int b;

    // 반올림: 소수점에 0.5 더한 뒤 정수형으로 변환
    b = (int)(a + 0.5);

    printf("반올림하기 전의 값 = %f\n", a);
    printf("반올림한 후의 결과 = %d\n", b);

    return 0;
}
