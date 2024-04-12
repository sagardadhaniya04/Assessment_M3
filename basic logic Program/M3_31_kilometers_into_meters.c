// 31. Convert kilometers into meters

#include <stdio.h>
main()
{
	float km;
	int mr;
	
	printf("Entre Kilometer here : ");
	scanf("%f",&km);
	
	mr = km * 1000 ; 
	
	printf("%.1f KiloMeter is equivalent to %d Meter.\n",km,mr);
}
