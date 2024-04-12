/*
22. Calculate compound interest(Compound Interest formula:
		a. Formula to calculate compound interest annually is given by:
		Amount= P(1 + R/100)t
		b. Compound Interest = Amount – P
*/

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

