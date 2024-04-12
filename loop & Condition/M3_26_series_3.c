#include <stdio.h>
main()
{
	int i,j,num,sum=0;
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		sum += i;
		for (j=1; j<=i; j++)
		{
			if (j == 1)
                printf("(%d", j);
            else
                printf("+%d", j);
        }
        
        if (i != num) 
            printf(") + ");
	}
	printf("\n\n\t %d",sum);
}
