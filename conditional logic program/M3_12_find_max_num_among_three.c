//  12. WAP to find maximum number among 3 numbers using ternary operator


#include <stdio.h>
main()
{
	int a,b,c,result;
	
	printf("\n\n\t Enter Three Numbers To Find Bigger One : ");
	scanf("%d%d%d",&a,&b,&c);
	
	result = (a>b)?(a>c?a:c):(b>c?b:c);
	
	printf("\n\n\t Big Number Is %d",result);
}
