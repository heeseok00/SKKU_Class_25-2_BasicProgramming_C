// Lab3-5: 부동소수점 오차

#include <stdio.h>

int main(void)
{
    float a = 0.1f;
    float b = 0.2f;
    float c = a + b;

    printf("%f + %f = %.10f\n", a, b, c);

    return 0;
}
