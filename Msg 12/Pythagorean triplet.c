#include <stdio.h>
#include <math.h>

int main() {
    int count = 0;
    int limit = 100;

    printf("First 20 unique Pythagorean triplets up to 100:\n");

    for (int i = 1; i <= limit; i++) {
        for (int j = i; j <= limit; j++) {  // Start j from i to avoid repetition
            int k = (int) sqrt(i * i + j * j);

            // Check if i^2 + j^2 = k^2 and k <= limit
            if (k * k == i * i + j * j && k <= limit) {
                printf("(%d, %d, %d)\n", i, j, k);
                count++;
            }

            // Stop if we have found 20 triplets
            if (count == 20) {
                return 0;
            }
        }
    }

    return 0;
}
