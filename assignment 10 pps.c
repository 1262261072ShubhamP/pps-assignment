#include <stdio.h>

int main()
{
    int year, month, days, firstday;
    int i, j;
    
    int monthDays[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};

    char *months[] = {"January", "February", "March",
                      "April", "May", "June",
                      "July", "August", "September",
                      "October", "November", "December"};

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        monthDays[1] = 29;
    }

    
    days = 365 * (year - 1) + (year - 1) / 4
           - (year - 1) / 100 + (year - 1) / 400;

    firstday = (days + 1) % 7;

    for (i = 0; i < 12; i++)
    {
        printf("\n\n      %s %d\n", months[i], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (j = 0; j < firstday; j++)
            printf("    ");

        for (j = 1; j <= monthDays[i]; j++)
        {
            printf("%3d ", j);

            if ((firstday + j) % 7 == 0)
                printf("\n");
        }

        firstday = (firstday + monthDays[i]) % 7;
    }

    return 0;
}