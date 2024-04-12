//  19.Calculate compound interest

#include <stdio.h>
main() 
{
    float principal, rate, time, amount, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    amount = principal * (1 + rate / 100 * time);

    compound_interest = amount - principal;

    printf("Compound Interest: %.2f\n", compound_interest);
}

