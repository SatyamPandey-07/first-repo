
#include<stdio.h>

int main() {
    int i, j, k, n;

    printf("Number of lines: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }
        
        // Print ascending numbers
        for(k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        
        // Print descending numbers
        for(k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }
        
        printf("\n");
    }

    return 0;
}
