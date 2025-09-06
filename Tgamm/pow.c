#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &y);
    
    for (int i = 1; i <= y; i++) {
        sum += pow(x, i) / tgamma(i + 1); // tgamma(i + 1) = factorial(i)
    }

    printf("Sum = %.2f\n", sum);
    return 0;
}
