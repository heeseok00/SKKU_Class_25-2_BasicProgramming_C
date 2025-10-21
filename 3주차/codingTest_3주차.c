// codingTest_3주차: 어떤 자료형을 사용할까

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char model;           // 자동차 모델 (한 글자)
    int seats;            // 승차인원
    double efficiency;    // 연비 (km/l)
    long distance;        // 주행거리 (km)
    long price;           // 가격 (원)

    // 입력
    printf("모델: ");
    scanf(" %c", &model);

    printf("승차인원: ");
    scanf("%d", &seats);

    printf("연비(km/l): ");
    scanf("%lf", &efficiency);

    printf("주행거리(km): ");
    scanf("%ld", &distance);

    printf("가격(원): ");
    scanf("%ld", &price);

    // 출력
    printf("\n자동차의 모델은 %c입니다.\n", model);
    printf("승차인원은 %d명입니다.\n", seats);
    printf("연비는 %.1lfkm/l 입니다.\n", efficiency);
    printf("주행거리는 %ldkm입니다.\n", distance);
    printf("가격은 %ld원입니다.\n", price);

    return 0;
}
