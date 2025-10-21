#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i++) {         // 0부터 9까지 반복
        if (i % 2 == 1)                // 홀수이면
            continue;                  // 아래 코드 건너뛰고 다음 반복으로

        printf("정수: %d\n", i);       // 짝수일 때만 출력
    }

    return 0;  // 프로그램 정상 종료
}
