#include <stdio.h>

int main(void) {
    int year;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &year);

    // ���� ����: 4�� ������ �������� 100���� ������ �������� �ʰų�,
    // 400���� ������ �������� ���
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d���� �����Դϴ�.\n", year);
    } else {
        printf("%d���� ������ �ƴմϴ�.\n", year);
    }

    return 0;
}
