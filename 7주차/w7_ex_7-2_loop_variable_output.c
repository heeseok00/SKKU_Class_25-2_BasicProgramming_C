#include <stdio.h>

int main(void)
{
    int i = 0;             // 반복 제어 변수 i 초기화
    while (i < 10)         // i가 10보다 작을 때까지 반복
    {
        printf("i=%d ", i); // i의 현재 값 출력
        i++;                // i를 1 증가시킴
    }
    return 0;
}
