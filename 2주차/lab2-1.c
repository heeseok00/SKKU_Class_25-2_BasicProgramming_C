// Lab2-1: ����̿Ͱ���������ȯ�غ���
#include <stdio.h>

int main(void) {
    char a = 'C';  // �����
    char b = 'D';  // ������
    char temp;

    printf("before: a = %c, b = %c\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("after : a = %c, b = %c\n", a, b);

    return 0;
}
