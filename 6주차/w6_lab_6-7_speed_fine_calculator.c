// 과속 여부를 판단하고 과태료를 계산하는 프로그램
#include <stdio.h>

int main(void)
{
    int speed_limit = 100;  // 제한 속도
    int user_speed;         // 사용자가 입력한 속도
    int fine;               // 과태료

    printf("현재 속도를 입력하시오: ");
    scanf("%d", &user_speed);

    if (user_speed <= speed_limit)
    {
        fine = 0; // 제한 속도 이하일 경우 과태료 없음
    }
    else if (user_speed <= speed_limit + 20)
    {
        fine = 40000; // 20km/h 초과
    }
    else if (user_speed <= speed_limit + 40)
    {
        fine = 70000; // 21~40km/h 초과
    }
    else if (user_speed <= speed_limit + 60)
    {
        fine = 100000; // 41~60km/h 초과
    }
    else
    {
        fine = 130000; // 60km/h 초과
    }

    printf("과태료는 %d원입니다.\n", fine);
    return 0;
}
