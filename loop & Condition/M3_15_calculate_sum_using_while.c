// 15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>
main()
{
	int i,num[10],sum=0;
	i=0;
	while(i<10)
	{
		printf("\n\n\t Entre Number %d : ",i+1);	
		scanf("%d",&num[i]);
		sum += num[i];
		i++;
	}
	printf("\n\n\t Sum = %d",sum);
}
