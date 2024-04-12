//  28. Convert years into days and months

#include <stdio.h>
main()
{
	float year, month;
	int days;
	
	printf("\n\n\t Please Enter Year To convert Days And Month :");
	scanf("%f",&year);
	
	month = year * 12;
	days = year * 365;
	
	printf("\n\n\t %.1f years have %d Days",year,days);
	printf("\n\n\t %.1f years have %.1f months",year,month);
}
