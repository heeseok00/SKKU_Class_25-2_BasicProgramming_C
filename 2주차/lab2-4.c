// Lab2-4: 형식 지정자 사용하기

#include <stdio.h>

int main(void) {
    char ch = 'A';
    int num = 123;
    float pi = 3.141592f;

    printf("%c는 문자입니다.\n", ch);
    printf("%d는 정수입니다.\n", num);
    printf("%f는 실수입니다.\n", pi);

    return 0;
}
