// 귀환 시각 계산 프로그램
#include <stdio.h>

int main(void)
{
    int start_h, start_m;   // 현재 시각 (시, 분)
    int free_time;          // 자유 시간 (분)
    int end_h, end_m;       // 귀환 시각 (시, 분)

    printf("현재 시각을 입력하세요(시 분): ");
    scanf("%d %d", &start_h, &start_m);

    printf("자유 시간을 입력하세요(분): ");
    scanf("%d", &free_time);

    end_h = start_h;              // 시(hour)는 그대로 두고
    end_m = start_m + free_time;  // 분(minute)에 자유 시간을 더함

    // 분이 60 이상이면 시(hour)로 변환
    if (end_m >= 60)
    {
        end_h += end_m / 60;
        end_m = end_m % 60;
    }

    // 시(hour)가 24시를 넘을 경우 0으로 되돌림 (다음 날 처리)
    if (end_h >= 24)
        end_h = end_h % 24;

    printf("귀환 시각은 %02d %02d입니다.\n", end_h, end_m);

    return 0;
}
