#include <stdio.h>

int main() {
    int count = 0;
    
    for (int num = 2; num <= 100; num += 2) {
        if (!(num % 8 == 0 && num % 10 == 0)) {
            printf("%3d ", num);
            count++;
            
            if (count % 5 == 0) {
                printf("\n");  // Move to the next line after 5 numbers
            }
        }
    }

    return 0;
}
