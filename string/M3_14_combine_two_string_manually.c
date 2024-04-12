// 14. Write a program in C to combine two strings manually

#include <stdio.h>
main() 
{
    int i, j, str1_l;
    char str1[100], str2[100];

    printf("\n\n\t Please Enter String 1 : ");
    gets(str1);

    printf("\n\n\t Please Enter String 2 : ");
    gets(str2);

    for(i=0;str1[i] != '\0';i++)
    {
    	
	}
	
	for(j=0;str2[j] != '\0';j++,i++)
	{
		str1[i] = str2[j];
	}
	printf("\n\n\t Combined String Is -> %s",str1);
}

