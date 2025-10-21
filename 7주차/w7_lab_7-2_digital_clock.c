#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    int hour, min, sec;
    hour = min = sec = 0;

    while (1) // 무한 반복하겠다는 말
    {
        system("cls");                        // 화면을 지운다
        printf("%02d: %02d: %02d\n", hour, min, sec);  // 시, 분, 초 출력
        sec++;                                // 초 증가

        if (sec == 60) { min++; sec = 0; }    // 초가 60이면 분 증가
        if (min == 60) { hour++; min = 0; }   // 분이 60이면 시 증가
        if (hour == 24) { hour = min = sec = 0; }  // 24시가 되면 초기화

        Sleep(1000);                          // 1초(1000ms) 동안 프로그램 일시 정지
    }

    return 0;
}
