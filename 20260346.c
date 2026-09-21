#include <stdio.h>

/*int main(void)
{
    double inch, cm;
    double celsius, fahrenheit;
    double radius, area;

    // Inch to Centimeter
    printf("Enter inch: ");
    scanf_s("%lf", &inch);

    cm = inch * 2.54;

    printf("%.2f inch = %.2f cm\n", inch, cm);

    // Celsius to Fahrenheit
    printf("Enter Celsius: ");
    scanf_s("%lf", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    // Circle Area
    printf("Enter radius: ");
    scanf_s("%lf", &radius);

    area = 3.141592 * radius * radius;

    printf("Circle area = %.2f\n", area);

    return 0;
}*/

/*#include <stdio.h>
int main(void)
{
    // 15
    int total;
    int hours;
    int minutes;
    int seconds;

    printf("Enter seconds: ");
    scanf_s("%d", &total);

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%d sec = %d hr %d min %d sec\n\n",
        total, hours, minutes, seconds);


    // 16
    int score;
    int attendance;
    int passed;

    printf("Enter score: ");
    scanf_s("%d", &score);

    printf("Enter attendance: ");
    scanf_s("%d", &attendance);

    passed = (score >= 60) && (attendance >= 80);

    if (passed)
        printf("PASS\n\n");
    else
        printf("FAIL\n\n");


    // 17
    unsigned int permission;

    printf("Enter permission (1=READ, 2=WRITE): ");
    scanf_s("%u", &permission);

    if ((permission & 0x01) && (permission & 0x02))
    {
        permission = permission | 0x04;
    }

    printf("Final permission = 0x%02X\n", permission);

    return 0;
}*/

/*#include <stdio.h>

int main(void)
{
    int year;

    scanf_s("%d", &year);

    if (year % 400 == 0)
    {
        printf("1\n");
    }
    else if (year % 100 == 0)
    {
        printf("0\n");
    }
    else if (year % 4 == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}*/

#include <stdio.h>

int main(void)
{
    int amount;

    scanf_s("%d", &amount);

    int won10000 = amount / 10000;
    amount %= 10000;

    int won1000 = amount / 1000;
    amount %= 1000;

    int won100 = amount / 100;
    amount %= 100;

    int won10 = amount / 10;

    printf("10000:%d 1000:%d 100:%d 10:%d\n",
        won10000, won1000, won100, won10);

    return 0;
}