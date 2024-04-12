/*

	8. WAP to accept the height of a person in centimeters and categorize the 
	person according to their height.

*/

#include <stdio.h>
main()
{
	int hight;
	char *result;
	
	printf("\n\n\t Please Enter Your Hieght in Centemeter : ");
	scanf("%d",&hight);
	
	if (hight <= 50){
		printf("\n\n\t You Are Not Human Please Enter Right Hight");
	}
	else if (hight >= 198){
		result = "very Long Hight";
	}else if (hight >= 183 && hight <= 198  ){
		result = "Long Hight";
	}else if (hight >=165 && hight <= 183){
		result = "Avarage Hight";
	}else if (hight >= 152 && hight <= 165){
		result = "short hight";
	}else{
		result = "Very Short Hight";
	}
	printf("\n\n\t You Have %s",result);
}
