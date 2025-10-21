#include <stdio.h>

int main(void)
{
    double pound;         // 변환된 파운드를 저장
    int i = 0;            // 반복 제어 변수

    while (i < 3)         // 0kg, 1kg, 2kg까지만 출력
    {
        pound = i * 2.20462;   // 1kg = 2.20462lb
        printf("%d킬로그램은 %.2f파운드입니다.\n", i, pound);
        i++;
    }

    return 0;
}
