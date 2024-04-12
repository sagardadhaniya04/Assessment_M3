// 14. WAP to find the largest of three numbers.

#include <stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("Enter three number using Space : ");
	scanf("%d %d %d",&n1,&n2,&n3);

	if(n1 > n2 && n1 > n3){
		printf("%d is Largest",n1);
	}else if (n2 > n3){
		printf("%d is Largest",n2);
	}else{
		printf("%d is largest",n3);
	}
	
}
