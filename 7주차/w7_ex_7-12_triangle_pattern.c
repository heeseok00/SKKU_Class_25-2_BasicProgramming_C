#include <stdio.h>

int main(void)
{
    int x, y;  // x: 가로 반복, y: 세로 반복

    for(y = 1; y <= 5; y++) {        // 줄 수 1~5까지 반복
        for(x = 0; x < y; x++)       // 각 줄마다 y개의 * 출력
            printf("*");
        printf("\n");                // 한 줄이 끝나면 줄바꿈
    }

    return 0;  // 프로그램 정상 종료
}
