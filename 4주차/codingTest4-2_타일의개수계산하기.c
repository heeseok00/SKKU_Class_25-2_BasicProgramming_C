#include <stdio.h>

int main(void) {
    int room_width = 320;   // 거실의 가로 길이 (cm)
    int room_height = 200;  // 거실의 세로 길이 (cm)
    int tile_size = 30;     // 타일의 한 변의 길이 (cm)

    // 가로 방향 타일 개수 (나머지가 있으면 +1)
    int tiles_width = room_width / tile_size + (room_width % tile_size != 0);
    
    // 세로 방향 타일 개수 (나머지가 있으면 +1)
    int tiles_height = room_height / tile_size + (room_height % tile_size != 0);

    // 전체 타일 개수
    int tiles_needed = tiles_width * tiles_height;

    printf("필요한 타일 개수: %d개\n", tiles_needed);

    return 0;
}
