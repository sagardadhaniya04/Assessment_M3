// 13. calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int i,num,fact=1;
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	i=1;
	while(i<=num){
		fact = fact*i;
		i++;
	}
	printf("\n\n\t Factorial Of %d is %d",num,fact);
}
