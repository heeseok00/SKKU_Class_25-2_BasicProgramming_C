#include <stdio.h>

int main(void)
{
    for(int a = 1; a <= 100; a++) {          // 첫 번째 변
        for(int b = a; b <= 100; b++) {      // 두 번째 변 (a부터 시작 -> 중복 제거)
            for(int c = b; c <= 100; c++) {  // 세 번째 변 (빗변 후보)
                if((a * a + b * b) == c * c) // 피타고라스의 정리 검사
                    printf("%d %d %d\n", a, b, c); // 결과 출력
            }
        }
    }

    return 0;  // 프로그램 정상 종료
}
