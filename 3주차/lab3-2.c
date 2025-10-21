// Lab3-2: 16진수로 하드웨어 제어하기

#include <stdio.h>

int main(void)
{
    unsigned char ioport = 0x00; // 초기: 모든 LED 꺼짐

    // 첫 번째 LED 켜기 (1000 0000)
    ioport = 0x80;
    printf("첫 번째 LED: ioport = 0x%02X\n", ioport);

    // 두 번째 LED 켜기 (0100 0000)
    ioport = 0x40;
    printf("두 번째 LED: ioport = 0x%02X\n", ioport);

    // 세 번째 LED 켜기 (0010 0000)
    ioport = 0x20;
    printf("세 번째 LED: ioport = 0x%02X\n", ioport);

    // 모든 LED 켜기 (1111 1111)
    ioport = 0xFF;
    printf("모든 LED: ioport = 0x%02X\n", ioport);

    // 모든 LED 끄기 (0000 0000)
    ioport = 0x00;
    printf("모든 LED 끔: ioport = 0x%02X\n", ioport);

    return 0;
}
