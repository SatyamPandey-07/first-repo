#include <stdio.h>
#include <math.h>

double calculate_series(double x) {
    double sum_series = 0;
    int n = 1;
    double term = exp(n * x) / tgamma(n + 1);  // exp(n*x) / n!

    while (term > 1e-5) {
        sum_series += term;
        n++;
        term = exp(n * x) / tgamma(n + 1);  // Calculate next term
    }

    return sum_series;
}

int main() {
    double x;
    printf("Enter the value of X: ");
    scanf("%lf", &x);

    double result = calculate_series(x);
    printf("The result of the series is: %.5f\n", result);

    return 0;
}
