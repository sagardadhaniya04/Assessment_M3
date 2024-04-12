//  3. WAP to check if the given year is a leap year or not.


#include <stdio.h>
main()
{
	int year;
	
	printf("\n\n\t Enter Any Year :");
	scanf("%d",&year);
	
	if(year % 4 == 0){
		printf("\n\n\t %d Is Leap year",year);
	}else{
		printf("\n\n\t %d Is not a leap year",year);
	}
}
