#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    for (int i = 10000; i < 99999; i++) {
        if (i == 4 * reverse(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

