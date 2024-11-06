#include <math.h>
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is odd or even
    if (n % 2 != 0)
        printf("The number is odd\n");
    else
        printf("The number is even\n");

    // Check if the number is a perfect square
    int k = sqrt(n);
    if (k * k == n)
        printf("The number is a perfect square\n");
    else
        printf("The number is not a perfect square\n");

    // Check if the number is an Armstrong number
    int sum = 0, d, temp = n;
    while (temp != 0) {
        d = temp % 10;
        sum = sum + (d * d * d);
        temp = temp / 10;
    }
    if (sum == n)
        printf("The number is an Armstrong number\n");
    else
        printf("The number is not an Armstrong number\n");

    // Check if the number belongs to the Fibonacci series
    int term = 0, F1 = 1, F2 = 1;
    while (term < n) {
        term = F1 + F2;
        F1 = F2;
        F2 = term;
    }
    if (n == term || n == 0 || n == 1)
        printf("The number belongs to the Fibonacci series\n");
    else
        printf("The number doesn't belong to the Fibonacci series\n");

    // Check if the number is prime
    int dv = 2, isPrime = 1;
    while (dv <= sqrt(n)) {
        if (n % dv == 0) {
            isPrime = 0;
            break;
        }
        dv++;
    }
    if (isPrime && n > 1)
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");

    return 0;
}
