#include <stdio.h>

int main() {
    int i,n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int term = 1;
    printf("%d ", term);

    for (i = 2; i <= n; ++i) {
        term *= (i % 2 == 0) ? 2 : 3;
        printf("%d ", term);
    }

    printf("\n");

    return 0;
}

