#include <stdio.h>

int main(void)
{
    int i, k;  // i: 단(1~9), k: 곱하는 수(1~9)

    for(i = 1; i <= 9; i++) {          // 1단부터 9단까지 반복
        for(k = 1; k <= 9; k++) {      // 각 단에서 1~9까지 곱하기
            printf("%d X %d = %d\n", i, k, i * k);
        }
    }

    return 0;  // 프로그램 정상 종료
}
