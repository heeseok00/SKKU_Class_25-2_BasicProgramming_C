#include <stdio.h>

int main(void) {
    int commute = 60;       // 하루 왕복 출퇴근 거리 (km)
    int moon_dist = 383000; // 달까지 거리 (km)
    int days, years, months;

    // 총 필요한 일수 계산
    days = moon_dist / commute;

    // 년, 월, 일로 변환 (1년 = 365일, 1달 = 30일 가정)
    years = days / 365;
    months = (days % 365) / 30;
    days = (days % 365) % 30;

    printf("왕복 출퇴근 거리: %d km\n", commute);
    printf("달까지의 거리: %d km\n", moon_dist);
    printf("%d년 %d월 %d일 후 출퇴근 거리가 달까지의 거리가 됩니다.\n",
           years, months, days);

    return 0;
}
