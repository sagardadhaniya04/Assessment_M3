// 30. WAP to convert years into days and days into years

#include <stdio.h>
main() {
    int years, days;

    // Convert years to days
    printf("\n\n\t Enter the number of years: ");
    scanf("%d", &years);
    days = years * 365;
    printf("\n\n\t %d years is equivalent to %d days.\n", years, days);

    // Convert days to years
    printf("\n\n\t Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    printf("\n\n\t %d days is equivalent to %d years.\n", days, years);
}
