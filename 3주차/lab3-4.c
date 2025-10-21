// Lab3-4: 실수 3 개의 평균과 표준편차

#include <stdio.h>
#include <math.h>

int main(void) {
    double num1, num2, num3;
    double sum = 0.0;
    double mean, variance, std_deviation;

    printf("3개의 실수를 입력하세요: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    mean = sum / 3.0;

    variance = (pow(num1 - mean, 2) + pow(num2 - mean, 2) + pow(num3 - mean, 2)) / 3.0;
    std_deviation = sqrt(variance);

    printf("평균: %.2lf\n", mean);
    printf("표준편차: %.2lf\n", std_deviation);

    return 0;
}
