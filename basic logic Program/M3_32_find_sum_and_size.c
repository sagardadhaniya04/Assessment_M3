// 32. Accept 2 numbers and find out its sum check it size

#include <stdio.h>
main()
{
	int num1,num2,sum;
	
	printf("Entre First Number : ");
	scanf("%d",&num1);
	
	printf("Entre Second Number : ");
	scanf("%d",&num2);
	
	sum = num1 + num2;
	
	printf("Your Answer Is %d And Its size is %zu Bytes",sum); //,sizeof(sum)
}
