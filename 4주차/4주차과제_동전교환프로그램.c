#include <stdio.h>

int main(void) {
    int money;             // 입력받을 금액
    int c500, c100, c50, c10;  // 동전 개수
    int remain;            // 바꾸지 못한 잔돈
    int total_coins;       // 총 동전 개수

    printf("교환할 돈은? ");
    if (scanf("%d", &money) != 1) {  // 숫자 이외 입력 차단
        printf("잘못된 입력입니다. 숫자를 입력하세요.\n");
        return 1; 
    }

    // 음수 입력 처리
    if (money < 0) {
        printf("금액은 음수가 될 수 없습니다.\n");
        return 1;
    }

    // 0 입력 처리
    if (money == 0) {
        printf("교환할 금액이 없습니다.\n");
        return 0;
    }

    // 너무 큰 금액 제한 (예: 1억 이상)
    if (money > 100000000) {
        printf("금액이 너무 큽니다. 1억 원 이하만 입력하세요.\n");
        return 1;
    }

    // 고액의 동전부터 차례대로 나눔
    c500 = money / 500;
    money = money % 500;

    c100 = money / 100;
    money = money % 100;

    c50 = money / 50;
    money = money % 50;

    c10 = money / 10;
    money = money % 10;

    remain = money; // 남은 금액 (10원 미만)

    // 총 동전 개수
    total_coins = c500 + c100 + c50 + c10;

    // 결과 출력
    printf("오백 원짜리 => %d개\n", c500);
    printf("백 원짜리  => %d개\n", c100);
    printf("오십 원짜리 => %d개\n", c50);
    printf("십 원짜리  => %d개\n", c10);
    printf("바꾸지 못한 잔돈 => %d원\n", remain);

    // 개인 아이디어 추가 출력
    printf("총 동전 개수 = %d개\n", total_coins);

    if (remain > 0) {
        printf("잔돈이 %d원 남아서 완전히 교환할 수 없습니다.\n", remain);
    } else {
        printf("모든 금액이 동전으로 교환되었습니다.\n");
    }

    return 0;
}
