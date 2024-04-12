/*

12. Accept number of students from user. I need to give 5 apples to each 
student. How many apples are required?

*/

#include <stdio.h>
main()
{
	int num;
	printf ("\n\n\t Enter Number Of Students = ");
	scanf("%d",&num);
	
	printf("\n\n\t Reqired Apple Is %d",num * 5);
}
