#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 02 학생 수 설정: 기본 10명, #define SIZE로 변경 가능
#define SIZE 10

int main() {
    int scores[SIZE];
    int max = -1;       // 최댓값 초기화 (0보다 작은 값)
    int min = 101;      // 최솟값 초기화 (100보다 큰 값)
    int sum = 0;        // 총점
    double average;     // 평균

    // 매번 다른 난수가 생성되도록 시드값 설정
    srand((unsigned int)time(NULL));

    // 01 점수 생성: 0~100점의 난수로 배열 채우기
    for (int i = 0; i < SIZE; i++) {
        scores[i] = rand() % 101; // 0부터 100까지의 난수 발생

        // 총합 누적
        sum += scores[i];

        // 최댓값 비교
        if (scores[i] > max) {
            max = scores[i];
        }
        // 최솟값 비교
        if (scores[i] < min) {
            min = scores[i];
        }
    }

    // 평균 계산
    average = (double)sum / SIZE;

    // 03 결과 출력: 학생별 점수, 최댓값, 최솟값, 평균
    printf("=== 학생별 점수 ===\n");
    for (int i = 0; i < SIZE; i++) {
        printf("학생 %d: %d점\n", i + 1, scores[i]);
    }

    printf("\n=== 결과 요약 ===\n");
    printf("최댓값: %d점\n", max);
    printf("최솟값: %d점\n", min);
    printf("평균: %.2f점\n", average);

    return 0;
}