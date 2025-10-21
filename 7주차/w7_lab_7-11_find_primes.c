#include <stdio.h>

int main(void) {
    int n, is_prime;  // n: 사용자 입력, is_prime: 소수 판별 변수

    printf("어디까지 찾을까요? : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {     // 2부터 n까지 검사
        is_prime = 1;                  // 처음엔 소수라고 가정
        for (int k = 2; k < i; k++) {  // 2부터 i-1까지 나눠보기
            if (i % k == 0) {          // 나누어 떨어지면 소수가 아님
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)             // 소수라면 출력
            printf("%d, ", i);
    }

    printf("\n\n");
    return 0;  // 프로그램 정상 종료
}
