// 10. Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include <stdio.h>

main() {
    int num, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    last_digit = num % 10;

    sum = first_digit + last_digit;

    printf("Sum of the first and last digits: %d\n", sum);

}

