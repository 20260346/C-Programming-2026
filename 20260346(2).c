/*#define _CRT_SECURE_NO_WARNINGS // scanf 오류 방지
#include <stdio.h>

int main(void) {
    int year;

    // 정수형 연도 입력
    scanf("%d", &year);

    // 윤년이면 1, 아니면 0
    int is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("%d\n", is_leap_year);

    return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS // scanf 오류 방지
#include <stdio.h>

int main(void) {
    int amount;

    // 금액 입력받기
    scanf("%d", &amount);

    int won10000 = amount / 10000;
    amount %= 10000;

    int won1000 = amount / 1000;
    amount %= 1000;

    int won100 = amount / 100;
    amount %= 100;

    int won10 = amount / 10;

    printf("10000:%d 1000:%d 100:%d 10:%d\n", won10000, won1000, won100, won10);

    return 0;
}