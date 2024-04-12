// 29. Convert minutes into seconds and hours

#include <stdio.h>
main()
{
	int minut,second,hour;
	
	printf("\n\n\t Enter Minutes :");
	scanf("%d",&minut);
	
	second = minut * 60;
	hour = minut / 60;
	
	printf("\n\n\t %d minutes means %d seconds",minut,second);
	printf("\n\n\t %d minutes means %d hour",minut,hour);
}
