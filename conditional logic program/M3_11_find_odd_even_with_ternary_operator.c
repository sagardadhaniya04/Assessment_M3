// 11. WAP to find number is even or odd using ternary operator

#include <stdio.h>
main()
{
	int num;
	printf("\n\n\t Enter Any Number : ");
	scanf("%d",&num);
	
	( num % 2 == 0)? printf("\n\n\t %d Number is Even",num):printf("\n\n\t %d Number is odd",num);
}
