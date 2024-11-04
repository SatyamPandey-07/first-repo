#include <stdio.h>
#include <math.h>

void isPerfectSquare(int n) {
    int sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n)
        printf("Perfect Square\n");
    else
        printf("Not a Perfect Square\n");
}

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    isPerfectSquare(num);

    return 0;
}
