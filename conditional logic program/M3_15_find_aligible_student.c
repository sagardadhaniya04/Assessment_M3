/*

	15. Write a C program to determine eligibility for admission to a professional 
		course based on the following criteria
		Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
		in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
		Physics >=140 --------------------------------------Input the marks obtained in
		Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
		obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
		188 Total marks of Maths and Physics : 137 The candidate is not eligible.

*/

#include <stdio.h>

int main() {
    int maths, phy, chem, total;

    // Input marks
    printf("Enter marks in Mathematics: ");
    scanf("%d", &maths);

    printf("Enter marks in Physics: ");
    scanf("%d", &phy);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);

    // Calculate total marks
    total = maths + phy + chem;

    // Check eligibility criteria
    if ((maths >= 65 && phy >= 55 && chem >= 50 && total >= 190) || (maths + phy >= 140)) {
        printf("Congratulations! You are eligible for admission to the professional course.\n");
    } else {
        printf("Sorry, you are not eligible for admission to the professional course.\n");
    }

    return 0;
}

