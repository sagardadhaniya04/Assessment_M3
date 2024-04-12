// 18. Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>
main()
{
	int exp,profit,ans;
	
	printf("\n\n\t Enter Expance of Your Tarnsiction : ");
	scanf("%d",&exp);
	
	printf("\n\n\t Enter Ganerated amount of Your Tarnsiction : ");
	scanf("%d",&profit);
	
	ans = profit - exp;
	
	if (ans > 0 ){
		printf("\n\n\t You Are Profitable Your Profit IS %d",ans);
	}else{
		printf("\n\n\t You Are Not Profitable Your Loss Is %d",ans);
	}
}
