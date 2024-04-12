#include<stdio.h>
main()
{
	int a=0, b=1, c, i, number ;
	printf("\n\n\t Input a number : ");
	scanf("%d",&number);
	printf("\n\n\t %d %d", a, b);
	i=2;
	while(i<=number)
	{
		//0 1 1 2 3 5 8
		          //a b c
		
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		i=i+1;
	}

}
