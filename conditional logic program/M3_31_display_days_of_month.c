/*
	31. Write a program in C to read any Month Number in integer and display the 
		number of days for this month.
*/

#include <stdio.h>
main()
{
	int choise,i, days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	char month[][10] = {"none","January","Fabruary","March","April","May","June","July","August","September","Octomber","November","December"};
	
	for (i=1;i<13;i++)
	{
		printf("\n\t %d . %s",i,month[i]);
	}
	
	printf("\n\n\t Please Select Month To Know Days : ");
	scanf("%d",&choise);
	
	printf("\n\n\t You select %s; This Month has %d Days",month[choise],days[choise]);
}
