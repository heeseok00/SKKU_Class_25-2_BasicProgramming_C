#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>

int main(void)
{
    int num, i = 1;  // num: 입력받을 정수, i: 반복 변수

    printf("정수를 입력하시오: ");  // 사용자 입력 요청
    scanf("%d", &num);               // 정수 입력 받기

    while(i <= num) {                // 1부터 num까지 반복
        if(num % i == 0)             // 나누어떨어지면 약수
            printf("%d ", i);        // 약수 출력
        i++;                         // i 1 증가
    }

    printf("\n\n");  // 줄바꿈
    return 0;        // 프로그램 정상 종료
}
