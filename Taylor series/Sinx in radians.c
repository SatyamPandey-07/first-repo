
#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;
    double x, sum = 0.0, term;

    // Input value in radians
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    do {
        term = pow(-1, n) * pow(x, 2 * n + 1) / tgamma(2 * n + 2);
        sum += term;
        n++;
    } while (fabs(term) > 0.00001); // Precision threshold

    printf("sin(%lf) = %lf\n", x, sum);

    return 0;
}
