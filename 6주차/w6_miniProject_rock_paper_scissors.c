// 가위바위보 게임 프로그램
#include <stdio.h>
#include <stdlib.h>   // rand(), srand() 사용
#include <time.h>     // time() 사용

int main(void)
{
    int user, computer;

    srand(time(NULL));            // 난수 초기화 (현재 시간 기반)
    computer = rand() % 3;        // 0~2 사이 난수 발생

    printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n");
    printf("하나를 선택하세요 (가위=0, 바위=1, 보=2): ");
    scanf("%d", &user);

    printf("사용자=%d\n", user);
    printf("컴퓨터=%d\n", computer);

    // 승패 판단
    if (user == computer)
        printf("비겼습니다!\n");
    else if ((user == 0 && computer == 2) ||
             (user == 1 && computer == 0) ||
             (user == 2 && computer == 1))
        printf("사용자 승리!\n");
    else
        printf("컴퓨터 승리!\n");

    return 0;
}
