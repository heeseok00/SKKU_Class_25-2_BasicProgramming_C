// 반복을 이용한 네모 그리기
#include <stdio.h>

int main(void)
{
    int i;  // 반복 변수

    printf("**********\n");   // 윗줄 출력

    for(i = 0; i < 5; i++)    // 중간 부분 5줄 반복
        printf("*        *\n"); // 좌우만 * 표시

    printf("**********\n");   // 아랫줄 출력

    return 0;  // 프로그램 정상 종료
}
