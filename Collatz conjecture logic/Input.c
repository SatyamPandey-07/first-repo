
#include <stdio.h>

int main() {
    int n, count = 0;

    // Input a number
    scanf("%d", &n);

    // Collatz Conjecture loop
    while (n != 1) {
        if (n % 2) 
            n = 3 * n + 1;
        else 
            n = n / 2;
        
        printf("%d ", n);
        count++;
    }

    // Print the number of steps
    printf("\nNumber of steps: %d", count);

    return 0;
}
