#include <stdio.h>
#include <math.h>

double term(int n, double x, double a, double b) {
    return (1 + pow(x, n)) / pow(4 * a + 2 * b, n + 1);
}

int main() {
    double x, a, b;
    printf("Enter the values of X, a, and b: ");
    scanf("%lf %lf %lf", &x, &a, &b);

    double sixth_term = term(6, x, a, b);
    double seventh_term = term(7, x, a, b);
    double eleventh_term = term(11, x, a, b);

    printf("6th term: %.5f\n", sixth_term);
    printf("7th term: %.5f\n", seventh_term);
    printf("11th term: %.5f\n", eleventh_term);

    return 0;
}
