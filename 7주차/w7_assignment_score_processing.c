#include <stdio.h>

int main(void)
{
    int n;                      // 학생 수를 저장할 변수
    int score;                  // 현재 입력 중인 학생의 점수
    int i = 0;                  // 입력된 학생 수 카운트
    int sum = 0;                // 전체 점수의 합
    int max, min;               // 최고 점수와 최저 점수 저장
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0; // 성적 구간별 인원 수
    double avg;                 // 평균 점수 계산용
    char input[10];             // 점수 또는 종료 명령어 입력용 버퍼

    // 학생 수 입력
    printf("학생 수를 입력하세요 (1~25): ");
    scanf("%d", &n);

    // 범위를 벗어나면 다시 입력받기
    while (n < 1 || n > 25) {
        printf("잘못된 입력입니다. 1~25 사이의 값을 다시 입력하세요: ");
        scanf("%d", &n);
    }

    // 성적 입력 안내
    printf("\n학생들의 성적을 입력하세요 (0~100, 입력 중 'q' 입력 시 종료)\n");

    // 학생 수만큼 반복 입력
    while (i < n) {
        printf("%d번째 학생 점수: ", i + 1);
        scanf("%s", input);  // 문자열로 입력받아 숫자/문자 구분

        // 사용자가 q 또는 Q를 입력하면 조기 종료
        if (input[0] == 'q' || input[0] == 'Q') {
            printf("입력을 중단합니다.\n");
            break;
        }

        // 입력된 문자를 정수로 변환하고 유효 범위 확인
        if (sscanf(input, "%d", &score) != 1 || score < 0 || score > 100) {
            printf("점수는 0~100 사이의 숫자만 가능합니다. 다시 입력하세요.\n");
            continue;
        }

        // 첫 번째 입력일 때 max, min 초기화
        if (i == 0) {
            max = min = score;
        } else {
            if (score > max) max = score;
            if (score < min) min = score;
        }

        // 총합 계산
        sum += score;

        // 점수 구간별 인원 카운트
        if (score >= 90) countA++;
        else if (score >= 80) countB++;
        else if (score >= 70) countC++;
        else if (score >= 60) countD++;
        else countF++;

        i++; // 학생 수 증가
    }

    // 아무 점수도 입력되지 않은 경우
    if (i == 0) {
        printf("\n입력된 점수가 없습니다.\n");
        return 0;
    }

    // 평균 계산
    avg = (double)sum / i;

    // 결과 출력
    printf("\n==============================\n");
    printf("입력된 학생 수: %d명\n", i);
    printf("최고 점수: %d점\n", max);
    printf("최저 점수: %d점\n", min);
    printf("평균 점수: %.2f점\n", avg);
    printf("------------------------------\n");
    printf("[성적 분포]\n");
    printf("A(90~100): %d명\n", countA);
    printf("B(80~89): %d명\n", countB);
    printf("C(70~79): %d명\n", countC);
    printf("D(60~69): %d명\n", countD);
    printf("F(0~59): %d명\n", countF);
    printf("==============================\n");

    return 0;
}
