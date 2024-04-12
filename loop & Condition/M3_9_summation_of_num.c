// 9. Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

main() {
    int number, digit, sum = 0;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("\n\n\t Sum of the digits: %d\n", sum);

}

