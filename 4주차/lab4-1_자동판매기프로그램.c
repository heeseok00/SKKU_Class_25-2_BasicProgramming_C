#include <stdio.h>

int main(void) {
    int money, price, change;
    int coin100s, coin10s, coin1s;

    printf("������ ��: ");
    scanf("%d", &money);

    printf("���ǰ�: ");
    scanf("%d", &price);

    change = money - price;   // �Ž����� ���
    printf("�Ž�����: %d\n\n", change);

    // 100��¥�� ���� ����
    coin100s = change / 100;
    change = change % 100;

    // 10��¥�� ���� ����
    coin10s = change / 10;
    change = change % 10;

    // 1��¥�� ���� ����
    coin1s = change;

    // ��� ���
    printf("100�� ������ ����: %d\n", coin100s);
    printf("10�� ������ ����: %d\n", coin10s);
    printf("1�� ������ ����: %d\n", coin1s);

    return 0;
}
