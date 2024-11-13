#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    for (int num = 10000; num <= 99999; num++) {
        if (num * 4 == reverseNumber(num)) {
            printf("The number is: %d\n", num);
            break;
        }
    }
    return 0;
}
