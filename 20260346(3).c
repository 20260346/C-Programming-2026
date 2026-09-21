/*#include <stdio.h>

int main()
{
    int total;
    int hours;
    int minutes;
    int seconds;

    printf("Enter seconds: ");
    scanf_s("%d", &total);

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%d hours %d minutes %d seconds\n",
        hours, minutes, seconds);

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int score;
    int attendance;

    printf("Enter score: ");
    scanf_s("%d", &score);

    printf("Enter attendance: ");
    scanf_s("%d", &attendance);

    if (score >= 60 && attendance >= 80)
        printf("PASS\n");
    else
        printf("FAIL\n");

    return 0;
}*/

#include <stdio.h>

#define READ  0x01
#define WRITE 0x02
#define EXEC  0x04

int main()
{
    unsigned int permission;

    printf("Enter permission: ");
    scanf_s("%x", &permission);

    permission = permission | EXEC;

    printf("Result: 0x%02X\n", permission);

    return 0;
}


