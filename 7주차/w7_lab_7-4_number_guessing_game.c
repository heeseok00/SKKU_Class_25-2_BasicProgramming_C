#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int answer;     // 정답
    int guess;      // 사용자의 입력
    int tries = 0;  // 시도 횟수

    srand(time(NULL));     // 랜덤 시드 설정
    answer = rand() % 100 + 1;  // 1~100 사이의 난수 생성

    // 반복 구조
    do {
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer)     // 사용자가 입력한 수가 정답보다 높을 때
            printf("제시한 정수가 높습니다.\n");
        if (guess < answer)     // 사용자가 입력한 수가 정답보다 낮을 때
            printf("제시한 정수가 낮습니다.\n");

    } while (guess != answer);  // 정답이 아닐 경우 반복

    printf("축하합니다. 시도횟수=%d\n", tries);
    return 0;
}
