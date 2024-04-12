// 6. Find the Character Is Vowel or Not 

#include <stdio.h>
main()
{
	char ch;
	
	printf("\n\n\t Enter Character to see its vovel or not : ");
	scanf("%c",&ch);
	
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		printf("This Is vovel");
	}else{
		printf("This Is Not vovel");
	}
}
