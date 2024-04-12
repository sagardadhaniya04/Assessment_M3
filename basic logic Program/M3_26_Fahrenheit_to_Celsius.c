//  26. Convert temperature Fahrenheit to Celsius

#include <stdio.h>
main()
{
	//°C = (°F - 32) × 5/9
	
	float f,c;
	
	printf("\n\n\t Enter Fahrenheit temperature here : ");
	scanf("%f",&f);
	
	c = (f - 32) * 5/9 ;
	
	printf("\n\n\t Temperature in Celsius is %.2f\n\n",c);
}
