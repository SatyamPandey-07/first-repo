#include <stdio.h>
#include <math.h>

double summation_series(double x, double p) {
    double S = 0.0;
    double base = exp(x) + 1;  // Calculate e^x + 1 once as it is reused

    for (int i = 1; i <= 10; i++) {
        double numerator = pow(base, i);           // (e^x + 1)^i
        double denominator = log(x) + i * p;       // log(x) + i * p
        if (denominator != 0) {                    // Check for division by zero
            S += numerator / denominator;
        } else {
            printf("Division by zero encountered at term %d. Stopping calculation.\n", i);
            break;
        }
    }

    return S;
}

int main() {
    double x, p;

    // Input values
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of p: ");
    scanf("%lf", &p);

    // Ensure x is greater than 0 for log(x)
    if (x <= 0) {
        printf("Error: x must be greater than 0 for log(x).\n");
        return 1;
    }

    // Calculate and display the result
    double result = summation_series(x, p);
    printf("The result of the summation series is: %.6f\n", result);

    return 0;
}
