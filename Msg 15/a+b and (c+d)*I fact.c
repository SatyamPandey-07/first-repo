#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the summation series
double summation_series(double a, double b, double c, double d, int n_terms) {
    double S = 0.0;
    for (int i = 1; i <= n_terms; i++) {
        double numerator = a + i * b;
        double denominator = pow(c + d, i) * factorial(i);
        S += numerator / denominator;
    }
    return S;
}

int main() {
    double a, b, c, d;
    int n_terms;

    // Input values
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);
    printf("Enter the value of d: ");
    scanf("%lf", &d);
    printf("Enter the number of terms: ");
    scanf("%d", &n_terms);

    // Calculate and display the result
    double result = summation_series(a, b, c, d, n_terms);
    printf("The result of the summation series is: %.6f\n", result);

    return 0;
}
