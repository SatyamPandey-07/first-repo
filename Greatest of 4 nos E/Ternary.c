
#include <stdio.h>

int main() {
    int a, b, c, d, max;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Determine the greatest number using the ternary operator
    max = (a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d)) : 
                  (b > c ? (b > d ? b : d) : (c > d ? c : d)));

    // Output the greatest number
    printf("The greatest number is: %d\n", max);

    return 0;
}

