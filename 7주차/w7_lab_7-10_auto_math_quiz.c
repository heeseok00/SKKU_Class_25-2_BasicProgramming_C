#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ans;  // 사용자가 입력할 답

    printf("산수 문제를 자동으로 출제합니다.\n");

    while (1) {   // 맞을 때까지 무한 반복
        int x = rand() % 100;   // 0~99 사이 난수 생성
        int y = rand() % 100;   // 0~99 사이 난수 생성

        printf("%d + %d = ", x, y);
        scanf("%d", &ans);

        if (x + y == ans) {      // 정답일 경우
            printf("맞았습니다.\n");
            break;               // 반복 종료
        }
        else
            printf("틀렸습니다.\n");
    }

    return 0;  // 프로그램 정상 종료
}
