// 18. Calculate person’s Annual salary

#include <stdio.h>
main()
{
	int salary, annual_salary;
	
	printf("Enter Your Monthly Salary ");
	scanf("%d",&salary);
	
	annual_salary = salary * 12 ;
	
	printf("Your Annual Salary Package Is %d ",annual_salary);
}
