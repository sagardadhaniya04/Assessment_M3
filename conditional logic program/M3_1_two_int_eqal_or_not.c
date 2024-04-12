/*
	1. Write a C program to accept two integers and check whether they are equal 
		or no
*/

#include <stdio.h>
main()
{
	int num1,num2;
	
	printf("\n\n\t Enter Number 1 :");
	scanf("%d",&num1);
	printf("\n\n\t Enter Number 2 :");
	scanf("%d",&num2);
	if (num1 == num2)
	{
		printf("\n\n\t Number is Equal");
	}
	else
	{
		printf("\n\n\t number is Not Equal");
	}
}
