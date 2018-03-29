// check for the valid date and print the day

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int d, m, y, weekday, valid = 0;
    int daysinmonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char c;
    scanf("%d%c%d%c%d", &d, &c, &m, &c, &y);
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 == 0))
        daysinmonth[1] = 29;
    if (m < 13 && d > 0)
    {
        if (d <= daysinmonth[m - 1])
            valid = 1;
    }
    if (valid == 1)
    {
        weekday = (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
        switch (weekday)
        {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        }
    }
    else
    {
        printf("Invalid Date");
    }

    return 0;
}
