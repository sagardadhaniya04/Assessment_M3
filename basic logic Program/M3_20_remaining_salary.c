/*
20. Accept monthly salary from the user and deduct 10% insurance premium, 
	10% loan installment find out of remaining salary.
*/

#include <stdio.h>
main()
{
	int salary, insurance_p, loan_ins, result;	
	
	printf("\n\n\t Enter Your Monthly Salary ");
	scanf("%d",&salary);
	
	insurance_p =  salary * 0.10 ; 
	loan_ins =  salary * 0.10 ;
	
	printf("\n\n\t Your Insurance Premium Is %d",insurance_p);
	printf("\n\n\t Your Loan Installment Is %d",loan_ins);
	printf("\n\n\t Your Remain Salary is = %d", salary - (insurance_p + loan_ins));
}
