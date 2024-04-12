// 11. Accept 5 names from user at run time.

# include <stdio.h>
main()
{
	char i,name[5][25]; 
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Enter name [%d] ",i+1);
		scanf("%s",&name[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("\n\n\t %s",&name[i]);
	}
}
