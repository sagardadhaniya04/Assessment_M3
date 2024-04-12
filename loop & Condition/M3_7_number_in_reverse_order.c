//  7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>
main()
{
	int i,rem,num;
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);

	while (num != 0)
	{
		rem = num%10;	 // get last digit of number with num %10
		printf("%d",rem); // print the last digit 
		num /= 10; // Empty the num variable
	}
	
}
