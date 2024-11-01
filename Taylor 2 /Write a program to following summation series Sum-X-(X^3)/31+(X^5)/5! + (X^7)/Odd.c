
#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double series_sum(double x, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double result = series_sum(x, n);
    printf("The sum of the series is: %.10f\n", result);

    return 0;
}
