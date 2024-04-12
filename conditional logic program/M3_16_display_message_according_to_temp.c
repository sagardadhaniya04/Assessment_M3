/*

	16. Write a C program to read temperature in centigrade and display a suitable 
		message according to the temperature state below:
		Temp < 0 then Freezing weather 
		Temp 0-10 then Very Cold weather 
		Temp 10-20 then Cold weather 
		Temp 20-30 then Normal in Temp 
		Temp 30-40 then Its Hot
		Temp >=40 then Its Very Hot

*/

#include <stdio.h>
main()
{
	int temp;
	char *result;
	printf("\n\n\t Enter tempreture here : ");
	scanf("%d",&temp);
	
	if (temp <= 0){
		result = "Freezing weather ";
	}else if (temp > 0 && temp < 10){
		result = "Very Cold weather";
	}else if (temp > 10 && temp < 20){
		result = "Cold weather";
	}else if (temp > 20 && temp < 30){
		result = "Normal weather";
	}else if (temp > 30 && temp < 40){
		result = "Hot weather";
	}else{
		result = "Very hot weather";
	}
	printf("\n\n\t %s",result);
}
