// 34. Accept month number and display month name

#include <stdio.h>
main()
{
	int choise;
	char month[][10] = {"none","January","Fabruary","March","April","May","June","July","August","September","Octomber","November","December"};
	
	printf("\n\n\t Please Select Month To Know Name : ");
	scanf("%d",&choise);
	
	printf("\n\n\t You select %s ",month[choise]);
}
