// 12. Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>
main()
{
	int num,digit,sum=0,temp;
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	temp=num; 
	while (num > 0)
	{
		digit = num%10;
		sum = sum + (digit*digit*digit);
		num /= 10;
	}
	
	if(temp==sum)    
		printf("\n\n\t armstrong  number ");    
	else    
	printf("\n\n\t not armstrong number"); 
}
