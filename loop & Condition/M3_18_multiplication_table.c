// 18.Write a C Program to Print the Multiplication Table of N

#include<stdio.h>
main()
{
	int i,num;
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\t %d x %d = %d",num,i,num*i);
	}
}
