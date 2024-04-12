//  24. 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>
main()
{
	int i,num,sum=0;
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		printf("%d+",i);
		sum += i;
	}
	printf("\n\n\t %d",sum);
}
