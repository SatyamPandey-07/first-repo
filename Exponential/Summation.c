#include <stdio.h>
#include <math.h>

double series_sum(double a, double b, double x, int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = (1 + exp(i * x)) / pow((2 * a + b), i);
        sum += term;
    }
    return sum;
}

int main() {
    double a, b, x;
    int n = 10;  // number of terms

    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    double result = series_sum(a, b, x, n);
    printf("The sum of the series is: %.10f\n", result);

    return 0;
}
