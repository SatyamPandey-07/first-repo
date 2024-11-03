
#include <stdio.h>

int main() {
    int a, b, c, d;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Determine the greatest number
    int max = a; // Assume 'a' is the greatest initially

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    // Output the greatest number
    printf("The greatest number is: %d\n", max);

    return 0;
}

