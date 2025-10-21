#include <stdio.h>

int main(void)
{
    double pheight = 0.001;         // 종이 두께 (단위: 미터)
    const double everest = 8800.0;  // 에베레스트 높이 (단위: 미터)
    int count = 0;                  // 접는 횟수

    while (pheight < everest)
    {
        pheight *= 2.0;             // 종이를 접을 때마다 두께가 2배 증가
        count++;                    // 접은 횟수 증가
    }

    printf("종이 접는 횟수=%d\n", count);
    return 0;
}
