#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // [01. 유효한 점수 세 개]
    {
        int score;
        int count = 0;
        int sum = 0;

        printf("--- 1번 문제: 유효한 점수 세 개 ---\n");
        while (count < 3) {
            printf("점수 입력 (0~100, 종료:-1): ");
            scanf("%d", &score);

            if (score == -1) {
                break;
            }

            if (score < 0 || score > 100) {
                printf("잘못된 입력입니다. 0~100 사이의 점수를 입력하세요.\n");
                continue;
            }

            sum += score;
            count++;
        }

        if (count == 0) {
            printf("입력된 점수가 없습니다.\n\n");
        }
        else {
            printf("[결과] 유효한 점수 개수: %d개, 평균: %.2f\n\n", count
                , (float)sum / count);
        }
    }