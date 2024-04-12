// 17. Calculate person’s insurance premium based on salary

#include <stdio.h>
main()
{
	float salary,pr,amount;
	
	printf("\n\n\t Enter Your Salary : ");
	scanf("%f",&salary);
	
	printf("\n\n\t Enter Your Premium percentage : ");
	scanf("%f",&pr);
	
	amount = (salary * pr) / 100;
	
	printf("\n\n\t Your Primium Is %.2f",amount);
}
