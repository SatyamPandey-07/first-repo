#include <stdio.h>

void numberTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print ascending part of the row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print descending part of the row
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the number of terms: ");
    scanf("%d", &N);
    numberTriangle(N);
    return 0;
}
