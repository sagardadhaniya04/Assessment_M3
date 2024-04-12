// 7. Accept marks from user and check pass or fail


#include <stdio.h>
main()
{
	int marks;
	printf("\n\n\t Enter Your Marks ");
	scanf("%d",&marks);
	
	if (marks < 33){
		printf("\n\n\t You Are Fail");
	}else{
		printf("\n\n\t You Are pass");
	}
}
