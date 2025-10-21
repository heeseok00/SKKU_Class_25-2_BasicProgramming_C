#include <stdio.h>

int main(void) {
    int money, price, change;
    int coin100s, coin10s, coin1s;

    printf("투입한 돈: ");
    scanf("%d", &money);

    printf("물건값: ");
    scanf("%d", &price);

    change = money - price;   // 거스름돈 계산
    printf("거스름돈: %d\n\n", change);

    // 100원짜리 동전 개수
    coin100s = change / 100;
    change = change % 100;

    // 10원짜리 동전 개수
    coin10s = change / 10;
    change = change % 10;

    // 1원짜리 동전 개수
    coin1s = change;

    // 결과 출력
    printf("100원 동전의 개수: %d\n", coin100s);
    printf("10원 동전의 개수: %d\n", coin10s);
    printf("1원 동전의 개수: %d\n", coin1s);

    return 0;
}
