// 24. Accept 5 employees name and salary and count average and total salary

#include <stdio.h>
main()
{	
	char name[5][15];
	int salary[5], i, total_salary=0;
	float avarage_salary;
	
	for (i=0; i < 5; i++)
	{
		printf("\n\t Enter Name Of Employee %d : ",i + 1);
		scanf("%s",&name[i]);
		
		printf("\n\t Enter salary Of %s : ",name[i]);
		scanf("%d",&salary[i]);
		total_salary += salary[i];
	}
	avarage_salary = total_salary / 5;
	
	printf("\n\t Total Salary of Employees Is : %d", total_salary);
	printf("\n\t Total Avarage salary is : %.2f ", avarage_salary);
	
}
