#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {      // Outer loop for the first number (1 to 4)
        for (int j = 1; j <= 9; j++) {  // Inner loop for the second number (1 to 9)
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
