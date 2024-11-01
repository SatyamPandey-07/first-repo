#include <stdio.h>
#include <math.h>

int main() {
    long long num, n, t = 0, i = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    n = num;

    // Reverse the number
    while (n > 0) {
        t = t * 10;
        t += (n % 10);
        n = n / 10;
        i++;
    }

    // Calculate the sum of digits
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }

    printf("Reverse: %lld\n", t);
    printf("Sum of digits: %lld\n", sum);

    return 0;
}

/*Example Output:

Enter a number: 123456
Reverse: 654321
Sum of digits: 21*/
