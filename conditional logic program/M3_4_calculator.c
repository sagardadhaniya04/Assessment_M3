/*

4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement

*/

#include <stdio.h>

main() 
{
    int num1, num2;
    char action;
    float answer;
    
    printf("\n\n\t Enter First Number : ");
    scanf("%d", &num1);
    printf("\n\n\t Enter second Number : ");
    scanf("%d", &num2);
    printf("\n\n\t select action (+, -, *, /) : ");
    scanf(" %c", &action);
    
    if (action == '+') {
        answer = num1 + num2;
    } else if (action == '-') {
        answer = num1 - num2;
    } else if (action == '*') {
        answer = num1 * num2;
    } else if (action == '/') {
        if (num2 != 0) {
            answer = (float)num1 / num2;
        } else {
            printf("\n\n\t Error: Division by zero\n");
            return 1; 
        }
    } else {
        printf("\n\n\t Invalid Operator\n");
        return 1;
    }
    
    printf("\n\n\t Your Answer Is %.2f\n", answer);
    return 0;
}

