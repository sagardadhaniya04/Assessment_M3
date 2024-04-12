/*

	19. Write a program in C to calculate and print the electricity bill of a given 
		customer. The customer ID, name, and unit consumed by the user should 
		be captured from the keyboard to display the total amount to be paid to the 
		customer. The charge are as follow :
	
	-----------------------------------------------------------------	
	20 - Unit 									21. Charge/unit
	-----------------------------------------------------------------
	22 - upto 350 								23. @1.20
	
	24 - 350 and above but less than 600 		25. @1.50
	
	26 - 600 and above but less than 800 		27. @1.80
	
	28 - 800 and above 							29. @2.00
	-----------------------------------------------------------------
	
	
	30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
	minimum bill should be of Rs. 256/-

*/

#include <stdio.h>
main()
{
	int c_id,unit;
	char name[15];
	float bill,surcharge;
	
	printf("\n\n\t Enter Your Coustomer Id : ");
	scanf("%d",&c_id);
	
	printf("\n\n\t Enter Your Name : ");
	scanf("%s",&name);
	
	printf("\n\n\t Enter unit Consumed By You : ");
	scanf("%d",&unit);
/*	
	switch(unit){
		case 0 ... 350:
		bill = unit * 1.20;
		break;
		
		case 351 ... 600:
		bill = unit * 1.50;
		break;
		
		case 601 ... 800:
		bill = unit * 1.80;
		break;
		
		
		default:
			bill = unit * 2.00;
	}
	switch (bill){
		case 0 ... 800 :
			bill =
	}
*/
	if (unit <= 350){
		bill = unit * 1.20;
	}else if (unit > 350 && unit <= 600 ){
		bill = unit * 1.50;
	}else if (unit > 600 && unit <= 800 ){
		bill = unit * 1.80;
	}else{
		bill = unit * 2.00;
	}
	
	if (bill > 800){
		surcharge = bill * 18 / 100;
	}
	
	printf("\n\n\t Bill = %.2f",bill);	
	printf("\n\n\t Surcharge = %.2f",surcharge);
	printf("\n\n\t Total Bill = %.2f",bill+surcharge);
	
}
