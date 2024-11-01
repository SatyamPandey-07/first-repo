
#include <stdio.h>

// Function to perform Collatz Conjecture
void collatz(int n, int *count) {
    printf("%d ", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;  // Even
        } else {
            n = 3 * n + 1;  // Odd
        }
        printf("-> %d ", n);
        (*count)++;
    }
}

int main() {
    int num, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Collatz sequence: ");
        collatz(num, &count);
        printf("\nNumber of iterations: %d\n", count);
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}
