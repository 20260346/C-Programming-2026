//윤년 판별 프로그램 (if-else)

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int main() {
	int year;

	printf("Enter any year: ");
	scanf("%d", &year);
	if (year % 400 == 0) {
		printf("Leap year");
	}
	else if (year % 100 == 0) {
		printf("Common year");
	}
	else if (year % 4 == 0) {
		printf("Leap year");
	}
	else {
		printf("Common year");
	}
	return 0;
}