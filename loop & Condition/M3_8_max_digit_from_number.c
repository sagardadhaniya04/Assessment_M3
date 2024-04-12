//  8. Write a program to find out the max from given number (E.g., No: -1562  Max number is 6)

#include <stdio.h>
main()
{
	int num,digit,max= 1;
	
	printf("\n\n\t Entre Number Here : ");
	scanf("%d",&num);
	
	while (num > 0)
	{
		digit = num%10;
		if (digit > max){
			max = digit;
		}
		num = num/10;
	}
	printf("%d",max);
}
