// 16.Calculate the Sum ofNatural Numbers Using the While Loop

#include <stdio.h>

main() {
    int num, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    while (i <= num) {
        sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers = %d\n", num, sum);

}

