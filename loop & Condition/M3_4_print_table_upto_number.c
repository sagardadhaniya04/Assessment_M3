//  4. WAP to print table up to given numbers

// 4. WAP to print table up to given numbers


#include <stdio.h>
main()
{
	int i,j,num;
	
	printf("\n\n\t Enter Number For the Table : ");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n\t %d * %d = %d",i,j,i*j);
		}
		printf("\n\n\t");
	}
}
