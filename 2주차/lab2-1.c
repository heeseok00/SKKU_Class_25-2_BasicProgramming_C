// Lab2-1: 고양이와강아지를교환해보자
#include <stdio.h>

int main(void) {
    char a = 'C';  // 고양이
    char b = 'D';  // 강아지
    char temp;

    printf("before: a = %c, b = %c\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("after : a = %c, b = %c\n", a, b);

    return 0;
}
