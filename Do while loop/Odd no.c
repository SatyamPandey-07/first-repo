#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int I = 1, count = 0; // Initialize I with 1

    do {
        printf("%4d", I);
        I = I + 2;          // Increment I by 2 to get odd numbers

        ++count;
        if (count % 10 == 0) // Print a newline every 10 numbers
            printf("\n");
    } while (I <= 99);

    return 0;
}
