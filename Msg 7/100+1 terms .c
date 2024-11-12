#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double calculate_series(double x) {
    double sum = 100 + 1;  // Starting with 100 + 1
    int n = 2;
    double term = pow(x, n) / factorial(n);  // Initial term (X^2) / 2!
    int sign = -1;  // Start with subtraction for the first term

    while (fabs(term) >= 1e-5) {
        sum += sign * term;
        n += 2;  // Increase the power by 2 for the next term
        term = pow(x, n) / factorial(n);
        sign = -sign;  // Alternate the sign for each term
    }

    return sum;
}

int main() {
    double x;
    printf("Enter the value of X: ");
    scanf("%lf", &x);

    double result = calculate_series(x);
    printf("The result of the series is: %.5f\n", result);

    return 0;
}
