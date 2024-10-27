#include<stdio.h>

int main() {
    int i, j, k, n;

    printf("Number of lines: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(j = 1; j <(n-i); j++) {
            printf(" ");
        }
        
        // Print numbers
        for(k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        
        printf("\n");
    }

    return 0;
}
