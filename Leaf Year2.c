//1 ~ 12월 중 하나를 입력 받아, 해당 월의 일 수 출력(Switch-case)

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int year;
    int month;

    printf("연도를 입력하세요 : ");
    scanf("%d", &year);

    printf("월을 입력하세요 : ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("31일\n");
        break;

    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            printf("29일\n");
        }
        else
        {
            printf("28일\n");
        }
        break;

    case 3:
        printf("31일\n");
        break;

    case 4:
        printf("30일\n");
        break;

    case 5:
        printf("31일\n");
        break;

    case 6:
        printf("30일\n");
        break;

    case 7:
        printf("31일\n");
        break;

    case 8:
        printf("31일\n");
        break;

    case 9:
        printf("30일\n");
        break;

    case 10:
        printf("31일\n");
        break;

    case 11:
        printf("30일\n");
        break;

    case 12:
        printf("31일\n");
        break;

    default:
        printf("잘못된 월입니다.\n");
        break;
    }

    return 0;
}