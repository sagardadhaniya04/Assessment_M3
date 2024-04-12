// 35. Accept the input month number and print number of days in that month.


#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t Enter Month  : ");
	scanf("%d",&num);
	
	switch(num){
	
		case 1 : 
				printf("\n\n\t January - 31 Days");
				break;
		case 2 :
				printf("\n\n\t Fabruary - 28 Days");
				break;
		case 3 : 
				printf("\n\n\t March - 31 Days");
				break;
		case 4 :
				printf("\n\n\t April - 30 Days");
				break;
		case 5 : 
				printf("\n\n\t May - 31 Days");
				break;
		case 6 :
				printf("\n\n\t Jun - 30 Days");
				break;
				//{0,31,28,31,30,31,30,31,31,30,31,30,31};
		case 7 : 
				printf("\n\n\t July - 31 Days");
				break;
		case 8 :
				printf("\n\n\t August - 31 Days");
				break;
		case 9 : 
				printf("\n\n\t September - 30 Days");
				break;
		case 10 :
				printf("\n\n\t October - 31 Days");
				break;
		case 11 : 
				printf("\n\n\t November - 30 Days");
				break;
		case 12 :
				printf("\n\n\t December - 31 Days");
				break;
		default : printf("\n\n\t Invalid Month");
	}
}
