/*#define _CRT_SECURE_NO_WARNINGS // Visual Studio scanf 에러 방지
#include <stdio.h>

int main(void) {
    int mid, final_exam, assignment;

    // 입력받을 변수 앞에 주소 연산자(&)를 작성합니다.
    scanf("%d %d %d", &mid, &final_exam, &assignment);

    double weighted_score = (mid * 0.3) + (final_exam * 0.4) + (assignment * 0.3);

    printf("weighted_score=%.2f\n", weighted_score);

    return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS // Visual Studio scanf 경고/오류 방지 (최상단 작성)
#include <stdio.h>

int main(void) {
    double height, weight;

    // double 형 변수 입력에는 %lf 사용 및 주소 연산자(&) 필수
    scanf("%lf %lf", &height, &weight);

    // BMI 계산: 몸무게 / (키 * 키)
    double bmi = weight / (height * height);

    // 소수점 둘째 자리까지 출력
    printf("bmi=%.2f\n", bmi);

    return 0;
}