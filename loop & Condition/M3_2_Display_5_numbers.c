// WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>
main()
{
	int i,num[5];
	
	for(i=0; i<=4;i++){
		printf("\n\n\t Enter Number here : ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<=4;i++){
		printf("\n\n\t %d",num[i]);
	}
}
