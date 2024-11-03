
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    double x, a, b, sum = 0.0;

    printf("Enter numbers for variables x, a, and b: ");
    scanf("%lf %lf %lf", &x, &a, &b);

    for(int i = 1; i <= 10; i++) {
        sum += ((1 + pow(2.71, i * x)) / pow(2 * a + b, i));
    }

    printf("Sum: %.10f\n", sum);

    getch();
    return 0;
}
