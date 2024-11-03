#include <stdio.h>

int main() {
    int a, b, c, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Determine the greatest number using the ternary operator
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    // Output the greatest number
    printf("The greatest number is: %d\n", max);

    return 0;
}
