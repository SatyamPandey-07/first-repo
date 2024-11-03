
#include <stdio.h>

int main() {
    int a, b, c, d, max;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Determine the greatest number using if-else statements
    if (a > b && a > c && a > d) {
        max = a;
    } else if (b > c && b > d) {
        max = b;
    } else if (c > d) {
        max = c;
    } else {
        max = d;
    }

    // Output the greatest number
    printf("The greatest number is: %d\n", max);

    return 0;
}

