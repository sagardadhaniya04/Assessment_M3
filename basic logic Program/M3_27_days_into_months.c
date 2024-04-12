// 27. Convert days into months

#include <stdio.h>
main()
{
	/*
	Formula ---->  Answer =       given Number Of Days
						   ---------------------------------
							Avarage Number Of days In month
	*/
	
	float avarage_days = 30.42,month; // 365/12 = 30.42
	int days;
	
	printf("\n\n\t Enter Days Here :");
	scanf("%d",&days);
	
	month = days/avarage_days;
	
	printf("\n\n\t %d Days Means %.1f Months",days,month);
}
