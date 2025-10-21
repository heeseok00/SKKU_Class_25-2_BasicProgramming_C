// goto문을 이용한 구구단 출력 프로그램
#include <stdio.h>

int main(void)
{
    int i = 1;   // 초기값 설정

loop:   // 반복 시작 지점
    printf("%d * %d = %d\n", 3, i, 3 * i);
    i++;   // 증가

    if (i == 10)  // i가 10이면 (1~9까지 출력 후) 종료
        goto end;

    goto loop;   // 다시 loop로 이동

end:   // 종료 지점
    return 0;
}
