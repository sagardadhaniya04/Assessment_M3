/*
21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
	and without using 3rd variable
*/

#include <stdio.h>
main()
{
	int num1, num2;
	printf("Enter Number 1  : ");
	scanf("%d",&num1);
	
	printf("Enter Number 2  : ");
	scanf("%d",&num2);	
	
	num1 = num1 + num2; // 2 = 2 + 4 = 6
    num2 = num1 - num2; // 4 = 6 - 4 = 2
    num1 = num1 - num2; // 6 = 6 - 2 = 4

    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

}
