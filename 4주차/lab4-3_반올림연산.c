#include <stdio.h>

int main(void) {
    double a = 3.6;  // �Ҽ� ��
    int b;

    // �ݿø�: �Ҽ����� 0.5 ���� �� ���������� ��ȯ
    b = (int)(a + 0.5);

    printf("�ݿø��ϱ� ���� �� = %f\n", a);
    printf("�ݿø��� ���� ��� = %d\n", b);

    return 0;
}
