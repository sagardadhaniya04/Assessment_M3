// 19. Patterns

/*
1
1 0
1 0 1 
1 0 1 0
1 0 1 0 1

*/
#include<stdio.h>
main()
{
	int i,j;
		
		for (i = 1; i <= 5; i++) 
		{
	        int num = 1;
		        for (j = 1; j <= i; j++) 
				{
		            printf("%d ", num);
		            num = 1 - num; // Alternating between 1 and 0
		        }
		        printf("\n");
	    }
}
