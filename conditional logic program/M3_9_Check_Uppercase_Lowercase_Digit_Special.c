/*

	9. C Program to Check Uppercase or Lowercase or Digit or Special 
		Character
*/

#include <stdio.h>
main()
{
	char in,*result;
	int ascii;
	
	printf("\n\n\t Enter One character : ");
	scanf("%c",&in);
	ascii = in;
	
	if (ascii >= 65 && ascii <= 90){
		result = "Uppercase ";
	}else if (ascii >= 97 && ascii <= 122){
		result = "Lowercase ";
	}else if (ascii >= 48 && ascii <= 57){
		result = "Digit ";
	}else {
		result = "Special Character";
	}
	printf("\n\n\t The Character Is %s",result);
}
