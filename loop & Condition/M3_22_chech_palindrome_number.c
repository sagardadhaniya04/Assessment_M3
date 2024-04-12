//  22. Accept 3 numbers from user using while loop and check each numbers palindrome


#include <stdio.h>

main() {
    int num, temp, rem, reversed;
    int i = 0;

    while (i < 3) {
        printf("\n\n\t Enter Number %d: ", i + 1);
        scanf("%d", &num);

        temp = num;
        reversed = 0;

        while (temp != 0) {
            rem = temp % 10;
            reversed = reversed * 10 + rem;
            temp = temp / 10;
        }

        if (num == reversed)
            printf("\n\t %d is a palindrome.\n", num);
        else
            printf("\n\t %d is not a palindrome.\n", num);

        i++;
    }

}

