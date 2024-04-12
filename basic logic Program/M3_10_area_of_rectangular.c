//  10. find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>
main()
{
	
	// find the area of a rectangular prism   (formula : A=2(wl+hl+hw) )
	
	float w,l,h,a;
	
	w = 10;
	l = 7;
	h = 12;
	
	a = 2 * (w*l + h*l + h*w);
	
	printf("\n\n\trectangular prism area is %.2f",a);

}
