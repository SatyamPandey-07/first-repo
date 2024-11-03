#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    // Prompt the user to enter the sides of the triangle
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the result
    printf("Area of the triangle: %f\n", area);

    return 0;
}
