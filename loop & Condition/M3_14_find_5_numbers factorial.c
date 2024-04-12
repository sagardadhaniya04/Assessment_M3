// 14. Accept 5 numbers from user and find those numbers factorials 

#include <stdio.h>
main()
{	
	int i,num[5],fact[5],factorial,j;
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Enter Number %d : ",i+1);
		scanf("%d",&num[i]);
	}
	 for (i = 0; i < 5; i++) {
         	factorial = 1;
        for (j = 1; j <= num[i]; j++) {
            factorial *= j;
        }
        fact[i] = factorial;
    }
	
	for (i=0;i<5;i++)
	{
		printf("\n\t %d",fact[i]);
	}
}
