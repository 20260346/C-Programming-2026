//if-else문 -> switch case 변환 : 학년 출력하는 코드

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//int main() {
//	int grade;
//	printf("enter your grade: ");
//	scanf("%d", &grade);
//
//	if (grade == 1) {
//		printf("grade 1\n");
//	}
//	else if (grade == 2) {
//		printf("grade 2\n");
//	}
//	else if (grade == 3) {
//		printf("grade 3\n");
//	}
//	else {
//		printf("wrong text\n");
//	}
//}

int main()
{
    int grade;

    printf("학년을 입력하세요 : ");
    scanf("%d", &grade);

    switch (grade)
    {
    case 1:
        printf("1학년입니다\n");
        break;

    case 2:
        printf("2학년입니다\n");
        break;

    case 3:
        printf("3학년입니다\n");
        break;

    default:
        printf("잘못된 값을 입력함\n");
        break;
    }

    return 0;
}