/*

	32. Write a C program to input basic salary of an employee and calculateits 
		Gross salary according to following:
		
			Basic Salary <= 10000 : HRA = 20%, DA = 80% 
			Basic Salary <= 20000 : HRA = 25%, DA = 90%
			Basic Salary > 20000 : HRA = 30%, DA = 95%\

*/

#include <stdio.h>
main()
{
	int base_salary,hra,da;
	
	printf("\n\n\t Enter Your basic salary : ");
	scanf("%d",&base_salary);
	
	if (base_salary > 20000)
	{
			hra = base_salary * 30 / 100;
			da = base_salary * 95 / 100;
			printf("\n\n\t Your Gross salary Is %d",base_salary+hra+da);
	}else if (base_salary <= 20000)
	{
			hra = base_salary * 30 / 100;
			da = base_salary * 95 / 100;
			printf("\n\n\t Your Gross salary Is %d",base_salary+hra+da);
	}else
	{
			hra = base_salary * 30 / 100;
			da = base_salary * 95 / 100;
			printf("\n\n\t Your Gross salary Is %d",base_salary+hra+da);
	}
}
