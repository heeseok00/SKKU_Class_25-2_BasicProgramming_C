#include <stdio.h>   // 표준 입출력 함수 사용을 위한 헤더파일

int main(void)
{
    int i, sum;      // i: 반복 변수, sum: 합계를 저장할 변수
    sum = 0;         // 합계를 0으로 초기화

    for(i = 1; i <= 10; i++)  // i를 1부터 10까지 1씩 증가시키며 반복
        sum += i;             // sum = sum + i 와 같은 의미 (1부터 10까지 더함)

    printf("1부터 10까지의 정수의 합= %d\n", sum);  // 합계 출력
    return 0;       // 프로그램 정상 종료
}
