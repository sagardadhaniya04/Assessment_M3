// 23. WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>
main()
{
	float num1, num2;
	
	printf("\n\n\tEnter first Number Here :  ");
	scanf("%f",&num1);
	
	printf("\n\n\tEnter Second Number Here : ");
	scanf("%f",&num2);
	
	num1 = num1 * num2; // 2 * 7 = 14
	num2 = num1 / num2; // 14 / 7 = 2
	num1 = num1 / num2; // 14 / 2 = 7
	
	printf("\n\n\t After Swap Your Num1 is : %.0f",num1);
	printf("\n\n\tAfter Swap Your Num2 is : %.0f",num2);
}
