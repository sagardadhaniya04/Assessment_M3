// 10. WAP to check whether a number is negative, positive or zero

#include <stdio.h>
main()
{
	int num;
	printf("\n\n\t Enter Number :");
	scanf("%d",&num);
	
	if(num > 0){
		printf("\n\n\t Number Is Positive");
	}else if (num == 0){
		printf("\n\n\t Number Is zero");
	}else{
		printf("\n\n\t Number Is Nagetive");
	}
}
