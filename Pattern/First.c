
//Triangle pattern 1



#include<stdio.h>
#include<conio.h>

int main() {
    int i, j, k;
    int n;

    printf("How many rows do you want: ");
    scanf("%d", &n);

    // Validate input
    if(n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print triangle
    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(k = n - i; k > 0; k--) {
            printf(" ");
        }
        
        // Print numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}
