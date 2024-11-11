#include <stdio.h>

// Function to calculate factorial of a number
long factorial(int num) {
    long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the sum of the series
double calculateSeriesSum(double X, int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (pow(X, i) / factorial(i));
    }
    return sum;
}

int main() {
    double X;
    int n;

    // Input X and n from the user
    printf("Enter the value of X: ");
    scanf("%lf", &X);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate and display the sum of the series
    double result = calculateSeriesSum(X, n);
    printf("The sum of the series is: %.4f\n", result);

    return 0;
}
