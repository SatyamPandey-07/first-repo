#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) 
        return 0; // numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // found a divisor, not prime
    }
    return 1; // no divisors found, it's prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
