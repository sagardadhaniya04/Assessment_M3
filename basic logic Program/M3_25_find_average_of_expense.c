//  25. Accept 5 expense from user and find average of expense

#include <stdio.h>
main()
{
	// exp_name, expance , total_exp, avarage_exp, i
	char exp_name[5][20];
	int expance[5], total_exp = 0, i;
	float avarage_exp;
	
	for (i=0; i < 5; i++)
	{
		printf("\n\n\t %d Enter Expance Name Here : ",i + 1);
		scanf("%s",&exp_name[i]);
		
		printf("\n\n\t what is Amount Of %s Enter here :",exp_name[i]);
		scanf("%d",&expance[i]);
		total_exp += expance[i];
	}
	
	avarage_exp = total_exp /5;
	
	printf("\n\n\t Your total Expance Is : %d ",total_exp);
	printf("\n\n\t your totla Avarage Expance Is : %.2f ",avarage_exp);
}
