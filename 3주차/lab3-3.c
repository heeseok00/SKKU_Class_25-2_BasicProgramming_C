// Lab3-3: 야구공이 도착하는데 걸리는 시간

#include <stdio.h>
#define KMH_TO_MS (1000.0 / 3600.0) // km/h -> m/s 변환 상수

int main(void)
{
    double distance = 18.4;              // 거리 (m)
    double speed = 160 * KMH_TO_MS;      // 속도 (m/s)
    double time = distance / speed;      // 시간 (s)

    printf("강속구가 홈플레이트에 도달하는 데 걸리는 시간: %.6f초\n", time);
    return 0;
}
