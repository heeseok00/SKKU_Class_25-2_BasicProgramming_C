#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {
    srand(time(NULL));  // 실행할 때마다 다른 난수 생성
    int niter, inside_dots = 0;  // 반복횟수, 원 안에 찍힌 점 개수
    double x, y, z, pi;

    printf("반복횟수: ");
    scanf("%d", &niter);

    for (int i = 0; i < niter; i++) {
        x = (double)rand() / RAND_MAX;  // 0~1 사이 난수
        y = (double)rand() / RAND_MAX;  // 0~1 사이 난수
        z = x * x + y * y;              // 점의 거리 제곱 계산

        if (z <= 1)                     // 원 내부에 있으면 카운트 증가
            inside_dots++;
    }

    pi = (double)inside_dots / niter * 4;  // π ≈ (원 내부 점 비율) * 4
    printf("파이 = %lf\n", pi);

    return 0;  // 프로그램 정상 종료
}
