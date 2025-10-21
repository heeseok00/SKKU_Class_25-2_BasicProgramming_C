#include <stdio.h>

int main(void)
{
    int a, b, c;  // 세 변의 길이

    for(a = 1; a <= 100; a++) {          // 첫 번째 변
        for(b = 1; b <= 100; b++) {      // 두 번째 변
            for(c = 1; c <= 100; c++) {  // 세 번째 변 (빗변 후보)
                if((a * a + b * b) == c * c)   // 피타고라스의 정리 만족
                    printf("%d %d %d\n", a, b, c);  // 결과 출력
            }
        }
    }

    return 0;  // 프로그램 정상 종료
}
