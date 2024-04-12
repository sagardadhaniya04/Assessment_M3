// 17.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include <stdio.h>
main()
{
	int i,num[5],even=0,odd=0;
	i=0;
	while(i<5)
	{
		printf("\n\n\t Enter Number %d : ",i+1);
		scanf("%d",&num[i]);
		i++;
	}
	i=0;
	while(i<5)
	{
		if(num[i]%2 == 0)
		{
			even++;	
		}else
		{
			odd++;
		}
		i++;
	}
	printf("\n\n\t Even Numbers : %d",even);
	printf("\n\n\t Odd Numbers : %d",odd);
	
}
