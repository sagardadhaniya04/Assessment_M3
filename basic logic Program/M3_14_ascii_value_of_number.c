// 14. Find ascii value of given number

#include <stdio.h>

main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    printf("ASCII value of %d is %c",number,(char)number);

}

