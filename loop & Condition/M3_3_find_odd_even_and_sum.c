/*
	3. WAP to take 10 no. Input from user find out below values
		a. How many Even numbers are there
		b. How many odd numbers are there
		c. Sum of even numbers
		d. Sum of odd numbers
*/

#include <stdio.h>
main()
{
	int i, num[10],sum_odd=0,sum_even=0;
	
	for(i=0;i<10;i++){
		printf("\n\t Enter Number %d :",i+1);
		scanf("%d",&num[i]);
	}
	printf("\n\n\t Even Numbers.........");
	for (i=0;i<10;i++){
		if(num[i]%2 == 0){
			printf("\n\t %d : %d",i,num[i]);
			sum_even += num[i]; 
		}
	}
	printf("\n\n\t Sum Of Even Numbers : %d",sum_even);
	printf("\n\n\t Odd Numbers.........");
	for (i=0;i<10;i++){
		if(num[i]%2 != 0){
			printf("\n\t%d : %d",i,num[i]);
			sum_odd += num[i];
		}	
	}
	printf("\n\n\t Sum Of Odd Numbers : %d",sum_odd);
}
