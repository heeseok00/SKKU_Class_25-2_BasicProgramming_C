#include <stdio.h>

int main(void)
{
    int price = 30560;   // 물건값
    int money;           // 사용자가 넣는 금액

    printf("물건값은 %d원입니다.\n", price);

    while (price > 0) {
        printf("남은 금액은 %d원입니다.\n", price);
        printf("적당한 동전이나 지폐를 계산해주세요: ");
        scanf("%d", &money);

        price -= money;  // 입력한 금액만큼 차감

        if (price > 0)
            continue;    // 아직 남았다면 반복 계속
        else if (price == 0) {
            printf("거스름돈 0원입니다.\n");
            break;       // 정확히 지불 완료
        } else {         // 초과로 낸 경우
            printf("거스름돈은 %d원입니다.\n", -price);
            break;
        }
    }

    return 0;
}
