#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int nearestHundreds;

    printf("Enter your number: ");
    scanf("%d", &num);

    // Find the nearest hundred
    nearestHundreds = (num % 100 <= 50) ? (num / 100) * 100 : ((num + 100) / 100) * 100;

    printf("Nearest Hundreds: %d\n", nearestHundreds);

    return 0;
}
