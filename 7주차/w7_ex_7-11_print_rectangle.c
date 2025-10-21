// 중첩 for 문을 이용하여 *기호를 사각형 모양으로 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    int x, y;  // x: 가로 반복, y: 세로 반복

    for(y = 0; y < 5; y++) {         // 세로로 5줄 출력
        for(x = 0; x < 10; x++) {    // 가로로 10개의 * 출력
            printf("*");
        }
        printf("\n");                // 한 줄이 끝나면 줄바꿈
    }

    return 0;  // 프로그램 정상 종료
}
