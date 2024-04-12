//  25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)


#include <stdio.h>
main()
{
	int i,num,sum=0;
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		printf("(%d * %d)+ ",i,i);
		sum = sum + i * i;
	}
	printf(" = %d",sum);
}
