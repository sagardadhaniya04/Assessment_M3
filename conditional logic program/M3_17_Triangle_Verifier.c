/*
	17. Write a C program to check whether a triangle can be formed with the given 
		values for the angles
*/

#include <stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("\n\n\t Enter the three Angle of triangle : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1+n2+n3 == 180){
		printf("\n\n\t The given angles can form a triangle");
	}else{
		printf("\n\n\t The given angles can not form a triangle");
	}
}
