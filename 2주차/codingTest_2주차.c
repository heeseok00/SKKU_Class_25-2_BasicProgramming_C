// CodingTest 2주차: 저축 금액 계산

#include <stdio.h>

int main(void) {
    int salary, days;
    int transport, food, pocket;
    int total_expense, saving;

    printf("월급을 입력하세요: ");
    scanf("%d", &salary);

    printf("한 달에 며칠이나 출근하나요(일): ");
    scanf("%d", &days);

    printf("하루 교통비를 입력하세요: ");
    scanf("%d", &transport);

    printf("하루 식비를 입력하세요: ");
    scanf("%d", &food);

    printf("하루 용돈을 입력하세요: ");
    scanf("%d", &pocket);

    total_expense = days * (transport + food + pocket);
    saving = salary - total_expense;

    printf("저축액: %d\n", saving);

    return 0;
}
