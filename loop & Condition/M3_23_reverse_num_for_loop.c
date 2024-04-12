// 23. C Program to Reverse a Number Using FOR Loop


#include <stdio.h>
main()
{
	int num,rem;
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	for (; num != 0; num = num/10)
	{
		rem = num%10;
		printf("%d",rem);
	}
}
