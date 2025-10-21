#include <stdio.h>

int main(void)
{
    char op;    // 연산자 저장 변수
    int x, y;   // 피연산자 저장 변수

    printf("수식을 입력하시오: ");
    scanf("%d %c %d", &x, &op, &y);  // 예: 10 * 2

    if (op == '+')
        printf("%d\n", x + y);
    else if (op == '-')
        printf("%d\n", x - y);
    else if (op == '*')
        printf("%d\n", x * y);
    else if (op == '/')
        printf("%d\n", x / y);
    else
        printf("지원되지 않는 연산자입니다.\n");

    return 0;
}
