#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));  // 실행 시마다 다른 난수 생성

    int dice1, dice2;
    int count1 = 0, count2 = 0;

    // 플레이어 1
    do {
        dice1 = rand() % 6 + 1;  // 1~6 사이 주사위
        dice2 = rand() % 6 + 1;
        count1++;
    } while (!(dice1 == 6 && dice2 == 6));  // 두 주사위 모두 6이 될 때까지 반복

    printf("플레이어 1은 두 개의 주사위를 %d번 던져서 두 개의 6을 얻었습니다.\n", count1);

    // 플레이어 2
    do {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        count2++;
    } while (!(dice1 == 6 && dice2 == 6));

    printf("플레이어 2는 두 개의 주사위를 %d번 던져서 두 개의 6을 얻었습니다.\n", count2);

    // 승자 판별
    if (count1 < count2)
        printf("플레이어 1이 승리했습니다!\n");
    else if (count1 > count2)
        printf("플레이어 2가 승리했습니다!\n");
    else
        printf("비겼습니다!\n");

    return 0;
}
