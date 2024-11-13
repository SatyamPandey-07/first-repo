#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        digits++;
    }

    num = originalNum;

    // Calculate the sum of digits raised to the power of the number of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    printf("Three-digit Armstrong numbers:\n");
    for (int i = 100; i < 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n\nFour-digit Armstrong numbers:\n");
    for (int i = 1000; i < 10000; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
