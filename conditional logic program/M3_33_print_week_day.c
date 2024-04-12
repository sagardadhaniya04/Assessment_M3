// 33. WAP to input the week number and print week day.

#include <stdio.h>

main() {
    int i, week;
    char day[8][10] = {"none", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("\n\n\t Enter week number (1-7): ");
    scanf("%d", &week);

    if (week < 1 || week > 7) {
        printf("\n\n\t Invalid Input! Please enter week number between 1-7.");
    } else {
        printf("\n\n\t %s\n", day[week]);
    }
}

