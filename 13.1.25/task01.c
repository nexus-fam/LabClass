#include <stdio.h>
int main()
{
    int days, month, year;
    printf("How many days ");
    scanf("%d", &days);

    year = days / 365;
    days = days % 365;
    month = days / 30;
    days = days % 30;

    printf("It's been %d year %d month %d days.", year, month, days);
    return 0;
}